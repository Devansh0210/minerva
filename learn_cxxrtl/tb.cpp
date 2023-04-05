#include <stdio.h>
#include <stdint.h>
#include <string>
#include <iostream>
#include <fstream>

#include "build/dut.cpp"
#include <backends/cxxrtl/cxxrtl_vcd.h>
#include <cxxopts.hpp>



int main(int argc, char** argv){

    cxxrtl_design::p_adder top;
    cxxrtl::vcd_writer vcd;
    std::ostream waves_f("waves.vcd");

    top.step();

    for(int cycle = 0; cycle < 1000; cycle++){
        top.p_clk.set<bool>(false);
        top.p_a.set<uint8_t>(cycle%16);
        top.p_b.set<uint8_t>(cycle%16);

        top.step();
        top.p_clk.set<bool>(true);

        top.step();
    }






}