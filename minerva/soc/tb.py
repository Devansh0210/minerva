from amaranth import *
from amaranth.sim import Simulator
from amaranth.hdl.rec import *
from amaranth.utils import log2_int

from minerva.core import Minerva
from amaranth.cli import main_parser, main_runner

import subprocess
from gen_instr import gen_imem

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


init_instr = gen_imem("/home/devector/Documents/riscv/minerva/minerva/soc/sim/riscv-tests/isa/rv32ui-p-andi.bin")

init_data = [0 for i in range(32*1024)]

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
            waddr.eq(adr_r[0:32]), # Registered addr
            raddr.eq(self.wbus.adr[0:32]) # Current addr
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

    def __init__(self, init_instr=None, init_data=None, *args, **kwargs):
        self.imem = Wishbone_RAM(2048, init_instr)
        self.dmem = Wishbone_RAM(2048, init_data)
        self.s_intr = Signal()
        self.t_intr = Signal()
        self.ext_intr = Signal(32)

        self.core = Minerva(*args, **kwargs)

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


mem_w = 4
mem_d = 2**5

dut = SOC(init_instr=init_instr, init_data=init_data, reset_address=0x80000000)

def run_simulation():

    # mem_init = gen_imem("/home/devector/Documents/riscv/minerva/minerva/soc/sim/riscv-tests/isa/rv32ui-p-andi.bin")



    def test_mem():
        for i in range(30):
            yield


    sim = Simulator(dut)
    sim.add_clock(1e-6)
    sim.add_sync_process(test_mem)

    with sim.write_vcd("test_mem.vcd"):
        sim.run()


run_simulation()

# class TestBench:

#     XLEN = 32

#     def __init__(self, bin_file=None):
#         self.dut = SOC()
#         self._fbin = bin_file
#         self._sim = Simulator(self.dut)
#         self._imem = []

        
#     def run_simulation(self):
#         pass
        
# def main():

#     tb = TestBench()
#     tb.run_simulation()

# if __name__ == '__main__':




#     main()


# def main(*args, **kwargs):
#     parser = main_parser()
#     main_runner(parser, parser.parse_args(), *args, **kwargs)

# main(dut)
