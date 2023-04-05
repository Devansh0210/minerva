TOP_F := adder.v

BUILD := build



VERILATOR_ROOT := /home/devector/Documents/verilator

.PHONY: all clean

veri:
	verilator --trace --Mdir $(BUILD) --cc $(TOP_F) --top-module $(basename $(TOP_F)) 
	
clean:
	rm -rf $(BUILD)
	rm $(wildcard *.vcd)

tb: veri tb.cpp
	# make -C $(BUILD) -f V$(basename $(TOP_F)).mk
	# g++ -I ${VERILATOR_ROOT}/include $(VERILATOR_ROOT)/include/verilated.cpp -I $(BUILD) $(BUILD)/V$(basename $(TOP_F))__ALL.cpp $(BUILD)/V$(basename $(TOP_F)).cpp tb.cpp -o tb
	verilator --trace --Mdir $(BUILD) --cc $(TOP_F) --top-module $(basename $(TOP_F)) --exe tb.cpp
	make -C $(BUILD) -f V$(basename $(TOP_F)).mk V$(basename $(TOP_F))


