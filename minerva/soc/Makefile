YOSYS_BACKEND := $(yosys-config --datdir) 

TOP_F := minerva.v
TOPLEVEL := minerva_cpu

BUILD := build

# SYNTH_CMD += read_verilog $(TOP_F); 
# SYNTH_CMD += hierarchy -top $(basename $TOP_F);
# SYNTH_CMD += write_cxxrtl $(BUILD)/dut.cpp


.PHONY: all clean

$(TOP_F):
	py3 ../../cli.py generate $(TOP_F)

veri: $(TOP_F)
	verilator --trace --Mdir $(BUILD) --cc $(TOP_F) --top-module $(basename $(TOP_F))_cpu --Wno-WIDTHEXPAND --Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-CASEOVERLAP
	
vclean:
	rm -rf $(BUILD)
	rm $(wildcard *.vcd)

tb: veri tb.cpp
	verilator --trace --Mdir $(BUILD) --cc $(TOP_F) --top-module $(basename $(TOP_F))_cpu --exe tb.cpp --Wno-WIDTHEXPAND --Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-CASEOVERLAP
	make -C $(BUILD) -f V$(basename $(TOP_F))_cpu.mk V$(basename $(TOP_F))_cpu
	./$(BUILD)/V$(TOPLEVEL)
	

