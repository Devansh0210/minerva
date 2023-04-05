#include <stdio.h>
#include <string>
#include <verilated.h>

#include <Vadder.h>
#include <verilated_vcd_c.h>

#include "Vadder.h"
// #include "Vadder___024unit.h"

int main(int argc, char **argv){

    Verilated::commandArgs(argc, argv);

    Vadder* top = new Vadder;

    Verilated::traceEverOn(true);
    VerilatedVcdC *trace = new VerilatedVcdC;

    top->trace(trace, 5);
    trace->open("waves.vcd");

    for(int cycle=0; cycle < 1000; cycle++){
        top->clk = 0;
        top->a = (cycle%16);
        top->b = (cycle%16); 

        top->eval();
        trace->dump(2*cycle);
        top->clk = 1;
        top->eval();
        trace->dump(2*cycle + 1);

    }

    trace->close();
    delete top;

}
