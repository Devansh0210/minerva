#include <stdio.h>
#include <stdint.h>
#include <string>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iostream>


#include "build/Vminerva_cpu.h"

static const int MEM_SIZE = 512 * 1024;

static const uint32_t IO_BASE = 0x80000000;

class memio{

	public:
		uint8_t mem[MEM_SIZE];
		bool valid;
		
	void load_bin(const char* bin_path){
		std::ifstream fd(bin_path, std::ios::binary | std::ios::ate);
		
		std::streamsize bin_size = fd.tellg();
		if(bin_size > MEM_SIZE){
			std::cerr << "Binary file has more size than available" << std::endl;
		};

		fd.seekg(0, std::ios::beg);
		fd.read((char*) mem, bin_size);

		valid = 1;
	};

	bool write_mem(uint32_t addr, uint32_t data){
		if(addr < MEM_SIZE){
			mem[addr] = data & 0xffu;
			mem[addr + 1] = (data >> 8) & 0xffu;
			mem[addr + 2] = (data >> 16) & 0xffu;
			mem[addr + 3] = (data >> 24) & 0xffu;

			return true;
		}

		return false;

	}

	uint32_t read_mem(uint32_t addr){
		uint32_t rd_data = 0;
		rd_data = (uint32_t)(mem[addr] | (mem[addr + 1] << 8) | (mem[addr+2] << 16) | (mem[addr+3] << 24));

		return rd_data;
	}

};



int main(int argc, char** argv){

	Verilated::commandArgs(argc, argv);

	Vminerva_cpu* top = new Vminerva_cpu;
	VerilatedVcdC* m_trace = new VerilatedVcdC;
	Verilated::traceEverOn(true);

	top->trace(m_trace, 1);
	m_trace->open("wave.vcd");

	uint64_t cyc = 0;

	top->rst = 1;
	top->clk = 0;
	top->eval();
	m_trace->dump(cyc);
	cyc++;

	uint64_t max_cycles = 10;

	top->rst = 1;
	top->eval();
	// m_trace->dump(cyc);
	// cyc++;
	memio memio_i;
	memio_i.load_bin("sim/isa/rv32ui-p-and.bin");
	
	top->clk = 1;
	top->eval();
	m_trace->dump(cyc);
	cyc++;

	top->clk = 0;
	top->rst = 0;
	top->eval();
	m_trace->dump(cyc);
	// cyc++;
	// cyc = (cyc + 1)/2;
	cyc = 2;

	for(; cyc < max_cycles; cyc++){
		top->clk = 0;
		top->eval();
		m_trace->dump(2*cyc);

		// if(top->ibus___05Fack){
		// 	top->ibus___05Fack = 0;
		// }


		top->clk = 1;		
		top->eval();

		if(top->ibus___05Fstb && top->ibus___05Fcyc){
			// Reading from memory
			if(!top->ibus___05Fwe){
				top->ibus___05Fdat_r = memio_i.read_mem(top->ibus___05Fadr);
			}
			else{
				memio_i.write_mem(top->ibus___05Fadr, top->ibus___05Fdat_w);
			}
			

			// top->ibus___05Fack = !top->ibus___05Fack;
		}

		top->eval();

		m_trace->dump(2*cyc + 1);
	}


	delete top;
	delete m_trace;

}