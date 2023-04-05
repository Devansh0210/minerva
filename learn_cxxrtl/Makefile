YOSYS_BACKEND := $(yosys-config --datdir) 

TOP_F := adder.v

BUILD := build

SYNTH_CMD += read_verilog $(TOP_F); 
SYNTH_CMD += hierarchy -top $(basename $(TOP_F));
SYNTH_CMD += write_cxxrtl $(BUILD)/dut.cpp


.PHONY: all clean

tb:
	mkdir -p $(BUILD)
	yosys -p '$(SYNTH_CMD)'

all: tb tb.cpp
	g++ -I $(shell yosys-config --datdir)/include -I $(BUILD)/dut.cpp -o tb

clean:
	rm -rf $(BUILD)
	rm ./tb
