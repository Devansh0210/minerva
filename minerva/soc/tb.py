from amaranth import *
from amaranth.sim import Simulator
from amaranth.hdl.rec import *
from amaranth.utils import log2_int

from minerva.core import Minerva

# Memory

mem_layout = [
    ("addr", 5, DIR_FANIN),
    ("data", 4, DIR_FANOUT)
]

wishbone_layout = [
    ("adr",   32, DIR_FANOUT),
    ("dat_w", 32, DIR_FANOUT),
    ("dat_r", 32, DIR_FANIN),
    ("sel",    4, DIR_FANOUT),
    ("cyc",    1, DIR_FANOUT),
    ("stb",    1, DIR_FANOUT),
    ("ack",    1, DIR_FANIN),
    ("we",     1, DIR_FANOUT),
    ("cti",    3, DIR_FANOUT),
    ("bte",    2, DIR_FANOUT),
    ("err",    1, DIR_FANIN)
]

class RWB:
    READ = 0
    WRITE = 1


init_instr = [
    0x00000013,
    0x00000013,
    0x00000013
]

init_data = []


# wishbone_layout = [
#     ("adr",   32, DIR_FANOUT),
#     ("dat_w", 32, DIR_FANOUT),
#     ("dat_r", 32, DIR_FANIN),
#     ("sel",    4, DIR_FANOUT),
#     ("cyc",    1, DIR_FANOUT),
#     ("stb",    1, DIR_FANOUT),
#     ("ack",    1, DIR_FANIN),
#     ("we",     1, DIR_FANOUT),
#     ("cti",    3, DIR_FANOUT),
#     ("bte",    2, DIR_FANOUT),
#     ("err",    1, DIR_FANIN)
# ]


class Wishbone_RAM(Elaboratable):
    """RAM interfaced with Wishbone Protocol

    Parameters
    ----------
    depth : int
        Memory will contain ``depth`` number of elements

    init : list of int
        Inititiallizaion of memory list of 32-bit ``int``

    Attributes
    ----------
    depth : int
    _init : list of int
    """

    def __init__(self, depth, init):
        self.wbus = Record(wishbone_layout)
        self.depth = depth
        self._init = init
        
    def elaborate(self, platform):

        m = Module()

        adr_r = Signal(32, reset=0)

        valid = Signal()

        m.d.comb += valid.eq(self.wbus.cyc & self.wbus.stb)

        m.d.sync += [
            adr_r.eq(self.wbus.adr),  # one cycle delayed address
            self.wbus.ack.eq(valid & ~self.wbus.ack) # Only turn on for one cycle
        ]

        ram_we = Signal()

        m.d.comb += ram_we.eq(self.wbus.we & valid & self.wbus.ack)

        waddr = Signal(32)
        raddr = Signal(32)

        m.d.comb += [
            waddr.eq(adr_r[2:32]), # Registered addr
            raddr.eq(self.wbus.adr[2:32]) # Current addr
        ]

        we = Signal(4)

        m.d.comb += we.eq(Repl(ram_we, 4) & self.wbus.sel)

        raddr2 = Signal(log2_int(int(self.depth/4)))
        waddr2 = Signal(log2_int(int(self.depth/4)))

        m.d.comb += [
            raddr2.eq(raddr[0:log2_int(int(self.depth/4))]),
            waddr2.eq(waddr[0:log2_int(int(self.depth/4))])
        ]

        def generate_mem(depth):
            _mem = Array()
            for i in range(depth):
                _mem.append(Signal(32))


            for j in range(depth):
                try:
                    _mem[j].reset = self._init[j]
                except IndexError:
                    _mem[j].reset = 0

            return _mem
        
        mem = generate_mem(depth=int(self.depth/4))

        m.d.sync += self.wbus.dat_r.eq(mem[raddr2])
        

        with m.If(waddr2 < int(128*1024/4)):
            for i in range(4):
                with m.If(we[i]):
                    mem[waddr2][8*i:8*(i+1)].eq(self.wbus.dat_w[8*i:8*(i+1)])
        
        return m





class SOC(Elaboratable):

    def __init__(self, init_instr, init_data):
        self.imem = Wishbone_RAM(32, init_instr)
        self.dmem = Wishbone_RAM(32, init_data)
        self.s_intr = Signal()
        self.t_intr = Signal()
        self.ext_intr = Signal(32)

        self.core = Minerva()

        self.dummy = Signal()

    def elaborate(self, platform):
        
        m = Module()

        m.submodules.imem = self.imem
        m.submodules.dmem = self.dmem
        m.submodules.core = self.core

        m.d.comb += [
            self.core.ibus.connect(self.imem.wbus),
            self.core.dbus.connect(self.dmem.wbus),
            self.core.software_interrupt.eq(self.s_intr),
            self.core.timer_interrupt.eq(self.t_intr),
            self.core.external_interrupt.eq(self.ext_intr)
        ]

        m.d.sync += [
            self.dummy.eq(1)
        ]

        return m

class MemMaster(Elaboratable):

    def __init__(self, width, depth, init):
        self.imem = Wishbone_RAM(depth=depth, init=init)
        self.ibus = Record(wishbone_layout)
        self.en = Signal(1)
        self.addr = Signal(range(depth/4))
        self.wr_en = Signal(1)
        self.r_data = Signal(width)
        self.w_data = Signal(width)
        self.dummy =Signal(1)


    def elaborate(self, platform):
        m = Module()
        
        m.submodules.imem = self.imem

        m.d.comb += [
            self.r_data.eq(self.ibus.dat_r),
            self.ibus.dat_w.eq(self.w_data),
            self.ibus.connect(self.imem.wbus),
            self.ibus.cyc.eq(self.en),
            self.ibus.stb.eq(self.en),
            self.ibus.adr.eq(self.addr),
            self.ibus.we.eq(self.wr_en)
        ]

        m.d.sync += [
            self.dummy.eq(1)
        ]

        return m

mem_w = 4
mem_d = 2**5

mem_init = []

for i in range(32):
    mem_init.append(i%2**4)


dut = SOC(init_instr=init_instr, init_data=init_data)

def test_mem():

    # yield dut.addr.eq(0b00001); yield dut.en.eq(1); yield dut.wr_en.eq(0)
    # for _ in range(1):
    #     yield
    # yield dut.en.eq(0)
    # yield

    for i in range(30):
        yield


sim = Simulator(dut)
sim.add_clock(1e-6)
sim.add_sync_process(test_mem)

with sim.write_vcd("test_mem.vcd"):
    sim.run()
