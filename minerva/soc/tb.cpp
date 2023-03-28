#include <backends/cxxrtl/cxxrtl.h>

#if defined(CXXRTL_INCLUDE_CAPI_IMPL) || \
    defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_capi.cc>
#endif

#if defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_vcd_capi.cc>
#endif

using namespace cxxrtl_yosys;

namespace cxxrtl_design {

// \amaranth.hierarchy: top
// \top: 1
// \generator: Amaranth
struct p_top : public module {
	// \hdlname: core m_payload__exception
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_m__payload____exception;
	// \hdlname: core csrf_rp__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:68
	// \init: 0
	wire<13> p_core_2e_csrf__rp____addr;
	// \hdlname: core payload__pc$24
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: -4
	wire<33> p_core_2e_payload____pc_24_24;
	// \hdlname: core payload__pc$26
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____pc_24_26;
	// \hdlname: core payload__instruction$27
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____instruction_24_27;
	// \hdlname: core payload__fetch_error$28
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____fetch__error_24_28;
	// \hdlname: core payload__fetch_badaddr$29
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<30> p_core_2e_payload____fetch__badaddr_24_29;
	// \hdlname: core payload__pc$31
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____pc_24_31;
	// \hdlname: core payload__instruction$33
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____instruction_24_33;
	// \hdlname: core payload__fetch_error$35
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____fetch__error_24_35;
	// \hdlname: core payload__fetch_badaddr$37
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<30> p_core_2e_payload____fetch__badaddr_24_37;
	// \hdlname: core payload__illegal$38
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____illegal_24_38;
	// \hdlname: core payload__rd$39
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<5> p_core_2e_payload____rd_24_39;
	// \hdlname: core payload__rs1$40
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<5> p_core_2e_payload____rs1_24_40;
	// \hdlname: core payload__rd_we$41
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____rd__we_24_41;
	// \hdlname: core payload__rs1_re$42
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____rs1__re_24_42;
	// \hdlname: core payload__src1$43
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____src1_24_43;
	// \hdlname: core payload__src2$44
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____src2_24_44;
	// \hdlname: core payload__store_operand$45
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____store__operand_24_45;
	// \hdlname: core payload__bypass_x$46
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____bypass__x_24_46;
	// \hdlname: core payload__bypass_m$47
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____bypass__m_24_47;
	// \hdlname: core payload__funct3$48
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<3> p_core_2e_payload____funct3_24_48;
	// \hdlname: core payload__load$49
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____load_24_49;
	// \hdlname: core payload__store$50
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____store_24_50;
	// \hdlname: core payload__adder_sub$51
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____adder__sub_24_51;
	// \hdlname: core payload__logic$52
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____logic_24_52;
	// \hdlname: core payload__shift$55
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____shift_24_55;
	// \hdlname: core payload__direction$56
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____direction_24_56;
	// \hdlname: core payload__sext$57
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____sext_24_57;
	// \hdlname: core payload__jump$58
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____jump_24_58;
	// \hdlname: core payload__compare$59
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____compare_24_59;
	// \hdlname: core payload__branch$60
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____branch_24_60;
	// \hdlname: core payload__branch_target$61
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____branch__target_24_61;
	// \hdlname: core payload__branch_predict_taken$62
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____branch__predict__taken_24_62;
	// \hdlname: core payload__fence_i
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____fence__i;
	// \hdlname: core payload__csr$63
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____csr_24_63;
	// \hdlname: core payload__csr_adr$64
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<12> p_core_2e_payload____csr__adr_24_64;
	// \hdlname: core payload__csr_we$65
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____csr__we_24_65;
	// \hdlname: core payload__ecall$66
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____ecall_24_66;
	// \hdlname: core payload__ebreak$67
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____ebreak_24_67;
	// \hdlname: core payload__mret$68
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____mret_24_68;
	// \hdlname: core payload__pc$70
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____pc_24_70;
	// \hdlname: core payload__instruction$72
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____instruction_24_72;
	// \hdlname: core payload__fetch_error$74
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____fetch__error_24_74;
	// \hdlname: core payload__fetch_badaddr$76
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<30> p_core_2e_payload____fetch__badaddr_24_76;
	// \hdlname: core payload__illegal$78
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____illegal_24_78;
	// \hdlname: core payload__loadstore_misaligned$79
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____loadstore__misaligned_24_79;
	// \hdlname: core payload__ecall$81
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____ecall_24_81;
	// \hdlname: core payload__ebreak$83
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____ebreak_24_83;
	// \hdlname: core payload__rd$85
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<5> p_core_2e_payload____rd_24_85;
	// \hdlname: core payload__rd_we$87
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____rd__we_24_87;
	// \hdlname: core payload__bypass_m$89
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____bypass__m_24_89;
	// \hdlname: core payload__funct3$91
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<3> p_core_2e_payload____funct3_24_91;
	// \hdlname: core payload__result$92
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____result_24_92;
	// \hdlname: core payload__shift$94
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____shift_24_94;
	// \hdlname: core payload__load$96
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____load_24_96;
	// \hdlname: core payload__store$98
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____store_24_98;
	// \hdlname: core payload__store_data$99
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____store__data_24_99;
	// \hdlname: core payload__compare$101
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____compare_24_101;
	// \hdlname: core payload__condition_met$106
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____condition__met_24_106;
	// \hdlname: core payload__branch_target$108
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____branch__target_24_108;
	// \hdlname: core payload__branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____branch__taken;
	// \hdlname: core payload__branch_predict_taken$109
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____branch__predict__taken_24_109;
	// \hdlname: core payload__csr$111
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____csr_24_111;
	// \hdlname: core payload__csr_adr$113
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<12> p_core_2e_payload____csr__adr_24_113;
	// \hdlname: core payload__csr_we$115
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____csr__we_24_115;
	// \hdlname: core payload__csr_result$116
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____csr__result_24_116;
	// \hdlname: core payload__mret$117
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____mret_24_117;
	// \hdlname: core payload__pc$120
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____pc_24_120;
	// \hdlname: core payload__rd$122
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<5> p_core_2e_payload____rd_24_122;
	// \hdlname: core payload__rd_we$124
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____rd__we_24_124;
	// \hdlname: core payload__funct3$126
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<3> p_core_2e_payload____funct3_24_126;
	// \hdlname: core payload__result$128
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____result_24_128;
	// \hdlname: core payload__load$130
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_payload____load_24_130;
	// \hdlname: core payload__load_data$131
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<32> p_core_2e_payload____load__data_24_131;
	// \hdlname: core a valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_a_2e_valid;
	// \hdlname: core f valid$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_f_2e_valid_24_1;
	// \hdlname: core d valid$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_d_2e_valid_24_1;
	// \hdlname: core x valid$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_x_2e_valid_24_1;
	// \hdlname: core m valid$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// \init: 0
	wire<1> p_core_2e_m_2e_valid_24_1;
	// \hdlname: core adder x_sub
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:21
	// \init: 0
	wire<1> p_core_2e_adder_2e_x__sub;
	// \hdlname: core exception irq_pending__r__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:23
	// \init: 0
	wire<32> p_core_2e_exception_2e_irq__pending____r____value;
	// \hdlname: core exception irq_mask__r__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:22
	// \init: 0
	wire<32> p_core_2e_exception_2e_irq__mask____r____value;
	// \hdlname: core exception mip__r__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<20> p_core_2e_exception_2e_mip____r____zero3;
	// \hdlname: core exception mip__r__meip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____meip;
	// \hdlname: core exception mip__r__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____zero2;
	// \hdlname: core exception mip__r__seip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____seip;
	// \hdlname: core exception mip__r__ueip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____ueip;
	// \hdlname: core exception mip__r__mtip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____mtip;
	// \hdlname: core exception mip__r__zero1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____zero1;
	// \hdlname: core exception mip__r__stip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____stip;
	// \hdlname: core exception mip__r__utip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____utip;
	// \hdlname: core exception mip__r__msip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____msip;
	// \hdlname: core exception mip__r__zero0
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____zero0;
	// \hdlname: core exception mip__r__ssip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____ssip;
	// \hdlname: core exception mip__r__usip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	// \init: 0
	wire<1> p_core_2e_exception_2e_mip____r____usip;
	// \hdlname: core exception mtval__r__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:20
	// \init: 0
	wire<32> p_core_2e_exception_2e_mtval____r____value;
	// \hdlname: core exception mcause__r__interrupt
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	// \init: 0
	wire<1> p_core_2e_exception_2e_mcause____r____interrupt;
	// \hdlname: core exception mcause__r__ecode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	// \init: 0
	wire<31> p_core_2e_exception_2e_mcause____r____ecode;
	// \hdlname: core exception mepc__r__zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	// \init: 0
	wire<2> p_core_2e_exception_2e_mepc____r____zero;
	// \hdlname: core exception mscratch__r__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:17
	// \init: 0
	wire<32> p_core_2e_exception_2e_mscratch____r____value;
	// \hdlname: core exception mtvec__r__mode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	// \init: 0
	wire<2> p_core_2e_exception_2e_mtvec____r____mode;
	// \hdlname: core exception mie__r__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<20> p_core_2e_exception_2e_mie____r____zero3;
	// \hdlname: core exception mie__r__meie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____meie;
	// \hdlname: core exception mie__r__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____zero2;
	// \hdlname: core exception mie__r__seie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____seie;
	// \hdlname: core exception mie__r__ueie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____ueie;
	// \hdlname: core exception mie__r__mtie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____mtie;
	// \hdlname: core exception mie__r__zero1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____zero1;
	// \hdlname: core exception mie__r__stie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____stie;
	// \hdlname: core exception mie__r__utie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____utie;
	// \hdlname: core exception mie__r__msie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____msie;
	// \hdlname: core exception mie__r__zero0
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____zero0;
	// \hdlname: core exception mie__r__ssie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____ssie;
	// \hdlname: core exception mie__r__usie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	// \init: 0
	wire<1> p_core_2e_exception_2e_mie____r____usie;
	// \hdlname: core exception misa__r__mxl
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	// \init: 0
	wire<2> p_core_2e_exception_2e_misa____r____mxl;
	// \hdlname: core exception misa__r__zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	// \init: 0
	wire<4> p_core_2e_exception_2e_misa____r____zero;
	// \hdlname: core exception misa__r__extensions
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	// \init: 0
	wire<26> p_core_2e_exception_2e_misa____r____extensions;
	// \hdlname: core exception mstatus__r__sd
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____sd;
	// \hdlname: core exception mstatus__r__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<8> p_core_2e_exception_2e_mstatus____r____zero3;
	// \hdlname: core exception mstatus__r__tsr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____tsr;
	// \hdlname: core exception mstatus__r__tw
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____tw;
	// \hdlname: core exception mstatus__r__tvm
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____tvm;
	// \hdlname: core exception mstatus__r__mxr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____mxr;
	// \hdlname: core exception mstatus__r__sum
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____sum;
	// \hdlname: core exception mstatus__r__mprv
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____mprv;
	// \hdlname: core exception mstatus__r__xs
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<2> p_core_2e_exception_2e_mstatus____r____xs;
	// \hdlname: core exception mstatus__r__fs
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<2> p_core_2e_exception_2e_mstatus____r____fs;
	// \hdlname: core exception mstatus__r__mpp
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<2> p_core_2e_exception_2e_mstatus____r____mpp;
	// \hdlname: core exception mstatus__r__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<2> p_core_2e_exception_2e_mstatus____r____zero2;
	// \hdlname: core exception mstatus__r__spp
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____spp;
	// \hdlname: core exception mstatus__r__mpie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____mpie;
	// \hdlname: core exception mstatus__r__zero1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____zero1;
	// \hdlname: core exception mstatus__r__spie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____spie;
	// \hdlname: core exception mstatus__r__upie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____upie;
	// \hdlname: core exception mstatus__r__mie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____mie;
	// \hdlname: core exception mstatus__r__zero0
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____zero0;
	// \hdlname: core exception mstatus__r__sie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____sie;
	// \hdlname: core exception mstatus__r__uie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	// \init: 0
	wire<1> p_core_2e_exception_2e_mstatus____r____uie;
	// \hdlname: core exception mepc__r__base
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	// \init: 0
	wire<30> p_core_2e_exception_2e_mepc____r____base;
	// \hdlname: core exception mtvec__r__base
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	// \init: 0
	wire<30> p_core_2e_exception_2e_mtvec____r____base;
	// \hdlname: core shifter m_result$9
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:23
	// \init: 0
	wire<32> p_core_2e_shifter_2e_m__result_24_9;
	// \hdlname: core shifter m_direction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:22
	// \init: 0
	wire<1> p_core_2e_shifter_2e_m__direction;
	// \hdlname: core fetch ibus_rdata
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:85
	// \init: 0
	wire<32> p_core_2e_fetch_2e_ibus__rdata;
	// \hdlname: core fetch f_badaddr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:78
	// \init: 0
	wire<30> p_core_2e_fetch_2e_f__badaddr;
	// \hdlname: core fetch f_fetch_error
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:77
	// \init: 0
	wire<1> p_core_2e_fetch_2e_f__fetch__error;
	// \hdlname: core fetch ibus__stb
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:66
	// \init: 0
	wire<1> p_core_2e_fetch_2e_ibus____stb;
	// \hdlname: core fetch ibus__cyc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:66
	// \init: 0
	wire<1> p_core_2e_fetch_2e_ibus____cyc;
	// \hdlname: core fetch ibus__adr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:66
	// \init: 0
	wire<30> p_core_2e_fetch_2e_ibus____adr;
	// \hdlname: core loadstore m_load_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:91
	// \init: 0
	wire<32> p_core_2e_loadstore_2e_m__load__data;
	// \hdlname: core loadstore dbus__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	// \init: 0
	wire<1> p_core_2e_loadstore_2e_dbus____we;
	// \hdlname: core loadstore dbus__stb
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	// \init: 0
	wire<1> p_core_2e_loadstore_2e_dbus____stb;
	// \hdlname: core loadstore dbus__cyc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	// \init: 0
	wire<1> p_core_2e_loadstore_2e_dbus____cyc;
	// \hdlname: core loadstore dbus__sel
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	// \init: 0
	wire<4> p_core_2e_loadstore_2e_dbus____sel;
	// \hdlname: core loadstore dbus__dat_w
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	// \init: 0
	wire<32> p_core_2e_loadstore_2e_dbus____dat__w;
	// \hdlname: core loadstore dbus__adr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	// \init: 0
	wire<30> p_core_2e_loadstore_2e_dbus____adr;
	// \hdlname: core loadstore m_badaddr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:94
	// \init: 0
	wire<30> p_core_2e_loadstore_2e_m__badaddr;
	// \hdlname: core loadstore m_store_error
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:93
	// \init: 0
	wire<1> p_core_2e_loadstore_2e_m__store__error;
	// \hdlname: core loadstore m_load_error
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:92
	// \init: 0
	wire<1> p_core_2e_loadstore_2e_m__load__error;
	// \hdlname: core gprf mem _mem_r_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:33
	wire<32> p_core_2e_gprf_2e_mem_2e___mem__r__data;
	// \hdlname: core gprf mem _mem_r_data$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:33
	wire<32> p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4;
	// \hdlname: core gprf mem fwd_wp_en
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:79
	// \init: 0
	wire<1> p_core_2e_gprf_2e_mem_2e_fwd__wp__en;
	// \hdlname: core gprf mem fwd_wp_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:80
	// \init: 0
	wire<32> p_core_2e_gprf_2e_mem_2e_fwd__wp__data;
	// \hdlname: core gprf mem collision
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:78
	// \init: 0
	wire<2> p_core_2e_gprf_2e_mem_2e_collision;
	// \hdlname: dmem wbus__dat_r
	// \src: tb.py:77
	// \init: 0
	wire<32> p_dmem_2e_wbus____dat__r;
	// \hdlname: dmem wbus__ack
	// \src: tb.py:77
	// \init: 0
	wire<1> p_dmem_2e_wbus____ack;
	// \hdlname: dmem adr_r
	// \src: tb.py:85
	// \init: 0
	wire<32> p_dmem_2e_adr__r;
	// \hdlname: imem wbus__dat_r
	// \src: tb.py:77
	// \init: 0
	wire<32> p_imem_2e_wbus____dat__r;
	// \hdlname: imem wbus__ack
	// \src: tb.py:77
	// \init: 0
	wire<1> p_imem_2e_wbus____ack;
	// \hdlname: imem adr_r
	// \src: tb.py:85
	// \init: 0
	wire<32> p_imem_2e_adr__r;
	// \src: tb.py:161
	// \init: 0
	wire<1> p_dummy;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	/*input*/ value<1> p_rst;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	/*input*/ value<1> p_clk;
	value<1> prev_p_clk;
	bool posedge_p_clk() const {
		return !prev_p_clk.slice<0>().val() && p_clk.slice<0>().val();
	}
	// \hdlname: core d_d_lock
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:580
	/*outline*/ value<1> p_core_2e_d__d__lock;
	// \hdlname: core m_payload__exception$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_m__payload____exception_24_next;
	// \hdlname: core pc_sel_f_pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:13
	/*outline*/ value<32> p_core_2e_pc__sel__f__pc;
	// \hdlname: core data_sel_x_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:15
	/*outline*/ value<2> p_core_2e_data__sel__x__offset;
	// \hdlname: core data_sel_w_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:18
	/*outline*/ value<2> p_core_2e_data__sel__w__offset;
	// \hdlname: core adder_d_sub
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:9
	/*outline*/ value<1> p_core_2e_adder__d__sub;
	// \hdlname: core compare_op
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:11
	/*outline*/ value<3> p_core_2e_compare__op;
	// \hdlname: core compare_zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:12
	/*outline*/ value<1> p_core_2e_compare__zero;
	// \hdlname: core compare_negative
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:13
	/*outline*/ value<1> p_core_2e_compare__negative;
	// \hdlname: core exception_m_fetch_misaligned
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:29
	/*outline*/ value<1> p_core_2e_exception__m__fetch__misaligned;
	// \hdlname: core exception_m_load_misaligned
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:32
	/*outline*/ value<1> p_core_2e_exception__m__load__misaligned;
	// \hdlname: core exception_m_store_misaligned
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:34
	/*outline*/ value<1> p_core_2e_exception__m__store__misaligned;
	// \hdlname: core logic_op
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:11
	/*outline*/ value<3> p_core_2e_logic__op;
	// \hdlname: core logic_src1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:12
	/*outline*/ value<32> p_core_2e_logic__src1;
	// \hdlname: core shifter_x_shamt
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:11
	/*outline*/ value<5> p_core_2e_shifter__x__shamt;
	// \hdlname: core gprf_rp1__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:12
	/*outline*/ value<5> p_core_2e_gprf__rp1____addr;
	// \hdlname: core gprf_rp2__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:13
	/*outline*/ value<5> p_core_2e_gprf__rp2____addr;
	// \hdlname: core gprf_wp__en
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:14
	/*outline*/ value<1> p_core_2e_gprf__wp____en;
	// \hdlname: core csrf_rp__addr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:68
	/*outline*/ value<13> p_core_2e_csrf__rp____addr_24_next;
	// \hdlname: core csrf_rp__en
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:68
	/*outline*/ value<1> p_core_2e_csrf__rp____en;
	// \hdlname: core csrf_wp__en
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:73
	/*outline*/ value<1> p_core_2e_csrf__wp____en;
	// \hdlname: core csrf_wp__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:73
	/*outline*/ value<13> p_core_2e_csrf__wp____addr;
	// \hdlname: core payload__pc$24$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<33> p_core_2e_payload____pc_24_24_24_next;
	// \hdlname: core payload__pc$26$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____pc_24_26_24_next;
	// \hdlname: core payload__instruction$27$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____instruction_24_27_24_next;
	// \hdlname: core payload__fetch_error$28$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____fetch__error_24_28_24_next;
	// \hdlname: core payload__fetch_badaddr$29$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<30> p_core_2e_payload____fetch__badaddr_24_29_24_next;
	// \hdlname: core payload__pc$31$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____pc_24_31_24_next;
	// \hdlname: core payload__instruction$33$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____instruction_24_33_24_next;
	// \hdlname: core payload__fetch_error$35$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____fetch__error_24_35_24_next;
	// \hdlname: core payload__fetch_badaddr$37$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<30> p_core_2e_payload____fetch__badaddr_24_37_24_next;
	// \hdlname: core payload__illegal$38$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____illegal_24_38_24_next;
	// \hdlname: core payload__rd$39$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<5> p_core_2e_payload____rd_24_39_24_next;
	// \hdlname: core payload__rs1$40$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<5> p_core_2e_payload____rs1_24_40_24_next;
	// \hdlname: core payload__rd_we$41$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____rd__we_24_41_24_next;
	// \hdlname: core payload__rs1_re$42$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____rs1__re_24_42_24_next;
	// \hdlname: core payload__src1$43$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____src1_24_43_24_next;
	// \hdlname: core payload__src2$44$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____src2_24_44_24_next;
	// \hdlname: core payload__store_operand$45$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____store__operand_24_45_24_next;
	// \hdlname: core payload__bypass_x$46$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____bypass__x_24_46_24_next;
	// \hdlname: core payload__bypass_m$47$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____bypass__m_24_47_24_next;
	// \hdlname: core payload__funct3$48$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<3> p_core_2e_payload____funct3_24_48_24_next;
	// \hdlname: core payload__load$49$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____load_24_49_24_next;
	// \hdlname: core payload__store$50$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____store_24_50_24_next;
	// \hdlname: core payload__adder_sub$51$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____adder__sub_24_51_24_next;
	// \hdlname: core payload__logic$52$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____logic_24_52_24_next;
	// \hdlname: core payload__shift$55$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____shift_24_55_24_next;
	// \hdlname: core payload__direction$56$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____direction_24_56_24_next;
	// \hdlname: core payload__sext$57$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____sext_24_57_24_next;
	// \hdlname: core payload__jump$58$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____jump_24_58_24_next;
	// \hdlname: core payload__compare$59$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____compare_24_59_24_next;
	// \hdlname: core payload__branch$60$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____branch_24_60_24_next;
	// \hdlname: core payload__branch_target$61$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____branch__target_24_61_24_next;
	// \hdlname: core payload__branch_predict_taken$62$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____branch__predict__taken_24_62_24_next;
	// \hdlname: core payload__fence_i$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____fence__i_24_next;
	// \hdlname: core payload__csr$63$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____csr_24_63_24_next;
	// \hdlname: core payload__csr_adr$64$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<12> p_core_2e_payload____csr__adr_24_64_24_next;
	// \hdlname: core payload__csr_we$65$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____csr__we_24_65_24_next;
	// \hdlname: core payload__ecall$66$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____ecall_24_66_24_next;
	// \hdlname: core payload__ebreak$67$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____ebreak_24_67_24_next;
	// \hdlname: core payload__mret$68$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____mret_24_68_24_next;
	// \hdlname: core payload__pc$70$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____pc_24_70_24_next;
	// \hdlname: core payload__instruction$72$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____instruction_24_72_24_next;
	// \hdlname: core payload__fetch_error$74$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____fetch__error_24_74_24_next;
	// \hdlname: core payload__fetch_badaddr$76$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<30> p_core_2e_payload____fetch__badaddr_24_76_24_next;
	// \hdlname: core payload__illegal$78$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____illegal_24_78_24_next;
	// \hdlname: core payload__loadstore_misaligned$79$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____loadstore__misaligned_24_79_24_next;
	// \hdlname: core payload__ecall$81$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____ecall_24_81_24_next;
	// \hdlname: core payload__ebreak$83$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____ebreak_24_83_24_next;
	// \hdlname: core payload__rd$85$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<5> p_core_2e_payload____rd_24_85_24_next;
	// \hdlname: core payload__rd_we$87$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____rd__we_24_87_24_next;
	// \hdlname: core payload__bypass_m$89$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____bypass__m_24_89_24_next;
	// \hdlname: core payload__funct3$91$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<3> p_core_2e_payload____funct3_24_91_24_next;
	// \hdlname: core payload__result$92$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____result_24_92_24_next;
	// \hdlname: core payload__shift$94$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____shift_24_94_24_next;
	// \hdlname: core payload__load$96$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____load_24_96_24_next;
	// \hdlname: core payload__store$98$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____store_24_98_24_next;
	// \hdlname: core payload__store_data$99$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____store__data_24_99_24_next;
	// \hdlname: core payload__compare$101$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____compare_24_101_24_next;
	// \hdlname: core payload__condition_met$106$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____condition__met_24_106_24_next;
	// \hdlname: core payload__branch_target$108$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____branch__target_24_108_24_next;
	// \hdlname: core payload__branch_taken$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____branch__taken_24_next;
	// \hdlname: core payload__branch_predict_taken$109$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____branch__predict__taken_24_109_24_next;
	// \hdlname: core payload__csr$111$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____csr_24_111_24_next;
	// \hdlname: core payload__csr_adr$113$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<12> p_core_2e_payload____csr__adr_24_113_24_next;
	// \hdlname: core payload__csr_we$115$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____csr__we_24_115_24_next;
	// \hdlname: core payload__csr_result$116$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____csr__result_24_116_24_next;
	// \hdlname: core payload__mret$117$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____mret_24_117_24_next;
	// \hdlname: core payload__pc$120$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____pc_24_120_24_next;
	// \hdlname: core payload__rd$122$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<5> p_core_2e_payload____rd_24_122_24_next;
	// \hdlname: core payload__rd_we$124$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____rd__we_24_124_24_next;
	// \hdlname: core payload__funct3$126$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<3> p_core_2e_payload____funct3_24_126_24_next;
	// \hdlname: core payload__result$128$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____result_24_128_24_next;
	// \hdlname: core payload__load$130$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_payload____load_24_130_24_next;
	// \hdlname: core payload__load_data$131$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<32> p_core_2e_payload____load__data_24_131_24_next;
	// \hdlname: core d_raw_rs1_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:544
	/*outline*/ value<1> p_core_2e_d__raw__rs1__x;
	// \hdlname: core d_raw_rs2_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:547
	/*outline*/ value<1> p_core_2e_d__raw__rs2__x;
	// \hdlname: core d_raw_rs1_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:545
	/*outline*/ value<1> p_core_2e_d__raw__rs1__m;
	// \hdlname: core d_raw_rs2_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:548
	/*outline*/ value<1> p_core_2e_d__raw__rs2__m;
	// \hdlname: core d_raw_rs1_w
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:546
	/*outline*/ value<1> p_core_2e_d__raw__rs1__w;
	// \hdlname: core d_raw_rs2_w
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:549
	/*outline*/ value<1> p_core_2e_d__raw__rs2__w;
	// \hdlname: core d_raw_csr_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:569
	/*outline*/ value<1> p_core_2e_d__raw__csr__x;
	// \hdlname: core d_raw_csr_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:570
	/*outline*/ value<1> p_core_2e_d__raw__csr__m;
	// \hdlname: core d_lock_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:578
	/*outline*/ value<1> p_core_2e_d__lock__x;
	// \hdlname: core d_lock_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:579
	/*outline*/ value<1> p_core_2e_d__lock__m;
	// \hdlname: core x_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:601
	/*outline*/ value<32> p_core_2e_x__result;
	// \hdlname: core m_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:602
	/*outline*/ value<32> p_core_2e_m__result;
	// \hdlname: core w_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:603
	/*outline*/ value<32> p_core_2e_w__result;
	// \hdlname: core x_csr_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:604
	/*outline*/ value<32> p_core_2e_x__csr__result;
	// \hdlname: core d_src1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:671
	/*outline*/ value<32> p_core_2e_d__src1;
	// \hdlname: core d_src2
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:672
	/*outline*/ value<32> p_core_2e_d__src2;
	// \hdlname: core d_adder_sub
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:863
	/*outline*/ value<1> p_core_2e_d__adder__sub;
	// \hdlname: core x_bypass_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:919
	/*outline*/ value<1> p_core_2e_x__bypass__m;
	// \hdlname: core x_branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:923
	/*outline*/ value<1> p_core_2e_x__branch__taken;
	// \hdlname: core x_branch_target
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:924
	/*outline*/ value<32> p_core_2e_x__branch__target;
	// \hdlname: core a kill$10
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	/*outline*/ value<1> p_core_2e_a_2e_kill_24_10;
	// \hdlname: core a stall$5
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	/*outline*/ value<1> p_core_2e_a_2e_stall_24_5;
	// \hdlname: core a valid$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_a_2e_valid_24_next;
	// \hdlname: core f kill$16
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	/*outline*/ value<1> p_core_2e_f_2e_kill_24_16;
	// \hdlname: core f valid$7
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	/*outline*/ value<1> p_core_2e_f_2e_valid_24_7;
	// \hdlname: core f stall$6
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	/*outline*/ value<1> p_core_2e_f_2e_stall_24_6;
	// \hdlname: core f valid$1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_f_2e_valid_24_1_24_next;
	// \hdlname: core d kill$15
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	/*outline*/ value<1> p_core_2e_d_2e_kill_24_15;
	// \hdlname: core d stall$6
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	/*outline*/ value<1> p_core_2e_d_2e_stall_24_6;
	// \hdlname: core d valid$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	/*outline*/ value<1> p_core_2e_d_2e_valid_24_4;
	// \hdlname: core d valid$1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_d_2e_valid_24_1_24_next;
	// \hdlname: core x stall$5
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	/*outline*/ value<1> p_core_2e_x_2e_stall_24_5;
	// \hdlname: core x valid$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	/*outline*/ value<1> p_core_2e_x_2e_valid_24_4;
	// \hdlname: core x valid$1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_x_2e_valid_24_1_24_next;
	// \hdlname: core m kill$17
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	/*outline*/ value<1> p_core_2e_m_2e_kill_24_17;
	// \hdlname: core m stall$8
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	/*outline*/ value<1> p_core_2e_m_2e_stall_24_8;
	// \hdlname: core m valid$1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	/*outline*/ value<1> p_core_2e_m_2e_valid_24_1_24_next;
	// \hdlname: core w valid$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	/*outline*/ value<1> p_core_2e_w_2e_valid_24_1;
	// \hdlname: core pc_sel a_pc4
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:37
	/*outline*/ value<30> p_core_2e_pc__sel_2e_a__pc4;
	// \hdlname: core pc_sel m_sel
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:35
	/*outline*/ value<1> p_core_2e_pc__sel_2e_m__sel;
	// \hdlname: core pc_sel m_pc4_a
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:36
	/*outline*/ value<30> p_core_2e_pc__sel_2e_m__pc4__a;
	// \hdlname: core pc_sel a_pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:30
	/*outline*/ value<32> p_core_2e_pc__sel_2e_a__pc;
	// \hdlname: core data_sel w_half
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:53
	/*outline*/ value<16> p_core_2e_data__sel_2e_w__half;
	// \hdlname: core data_sel w_byte
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:52
	/*outline*/ value<8> p_core_2e_data__sel_2e_w__byte;
	// \hdlname: core data_sel x_misaligned
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:22
	/*outline*/ value<1> p_core_2e_data__sel_2e_x__misaligned;
	// \hdlname: core data_sel w_load_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:25
	/*outline*/ value<32> p_core_2e_data__sel_2e_w__load__result;
	// \hdlname: core data_sel x_store_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:24
	/*outline*/ value<32> p_core_2e_data__sel_2e_x__store__data;
	// \hdlname: core data_sel x_mask
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:23
	/*outline*/ value<4> p_core_2e_data__sel_2e_x__mask;
	// \hdlname: core adder x_sub_overflow
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:37
	/*outline*/ value<1> p_core_2e_adder_2e_x__sub__overflow;
	// \hdlname: core adder x_sub_carry
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:36
	/*outline*/ value<1> p_core_2e_adder_2e_x__sub__carry;
	// \hdlname: core adder x_sub_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:35
	/*outline*/ value<32> p_core_2e_adder_2e_x__sub__result;
	// \hdlname: core adder x_add_overflow
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:28
	/*outline*/ value<1> p_core_2e_adder_2e_x__add__overflow;
	// \hdlname: core adder x_add_carry
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:27
	/*outline*/ value<1> p_core_2e_adder_2e_x__add__carry;
	// \hdlname: core adder x_add_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:26
	/*outline*/ value<32> p_core_2e_adder_2e_x__add__result;
	// \hdlname: core adder x_sub$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:21
	/*outline*/ value<1> p_core_2e_adder_2e_x__sub_24_next;
	// \hdlname: core adder x_carry
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:15
	/*outline*/ value<1> p_core_2e_adder_2e_x__carry;
	// \hdlname: core adder x_overflow
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:16
	/*outline*/ value<1> p_core_2e_adder_2e_x__overflow;
	// \hdlname: core adder x_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:14
	/*outline*/ value<32> p_core_2e_adder_2e_x__result;
	// \hdlname: core compare condition_met
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:17
	/*outline*/ value<1> p_core_2e_compare_2e_condition__met;
	// \hdlname: core decoder privileged
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:55
	/*outline*/ value<1> p_core_2e_decoder_2e_privileged;
	// \hdlname: core decoder fmt
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:77
	/*outline*/ value<3> p_core_2e_decoder_2e_fmt;
	// \hdlname: core decoder jimm20
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:74
	/*outline*/ value<21> p_core_2e_decoder_2e_jimm20;
	// \hdlname: core decoder uimm20
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:73
	/*outline*/ value<20> p_core_2e_decoder_2e_uimm20;
	// \hdlname: core decoder bimm12
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:72
	/*outline*/ value<13> p_core_2e_decoder_2e_bimm12;
	// \hdlname: core decoder simm12
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:71
	/*outline*/ value<12> p_core_2e_decoder_2e_simm12;
	// \hdlname: core decoder iimm12
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:70
	/*outline*/ value<12> p_core_2e_decoder_2e_iimm12;
	// \hdlname: core decoder funct12
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:68
	/*outline*/ value<12> p_core_2e_decoder_2e_funct12;
	// \hdlname: core decoder funct7
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:67
	/*outline*/ value<7> p_core_2e_decoder_2e_funct7;
	// \hdlname: core decoder funct3$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:66
	/*outline*/ value<3> p_core_2e_decoder_2e_funct3_24_1;
	// \hdlname: core decoder opcode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:65
	/*outline*/ value<5> p_core_2e_decoder_2e_opcode;
	// \hdlname: core decoder mret
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:58
	/*outline*/ value<1> p_core_2e_decoder_2e_mret;
	// \hdlname: core decoder ebreak
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:57
	/*outline*/ value<1> p_core_2e_decoder_2e_ebreak;
	// \hdlname: core decoder ecall
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:56
	/*outline*/ value<1> p_core_2e_decoder_2e_ecall;
	// \hdlname: core decoder csr_we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:54
	/*outline*/ value<1> p_core_2e_decoder_2e_csr__we;
	// \hdlname: core decoder fence_i
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:39
	/*outline*/ value<1> p_core_2e_decoder_2e_fence__i;
	// \hdlname: core decoder sext
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:47
	/*outline*/ value<1> p_core_2e_decoder_2e_sext;
	// \hdlname: core decoder direction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:46
	/*outline*/ value<1> p_core_2e_decoder_2e_direction;
	// \hdlname: core decoder shift
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:45
	/*outline*/ value<1> p_core_2e_decoder_2e_shift;
	// \hdlname: core decoder logic
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:42
	/*outline*/ value<1> p_core_2e_decoder_2e_logic;
	// \hdlname: core decoder store
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:38
	/*outline*/ value<1> p_core_2e_decoder_2e_store;
	// \hdlname: core decoder load
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:37
	/*outline*/ value<1> p_core_2e_decoder_2e_load;
	// \hdlname: core decoder bypass_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:36
	/*outline*/ value<1> p_core_2e_decoder_2e_bypass__m;
	// \hdlname: core decoder bypass_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:35
	/*outline*/ value<1> p_core_2e_decoder_2e_bypass__x;
	// \hdlname: core decoder rd_we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:29
	/*outline*/ value<1> p_core_2e_decoder_2e_rd__we;
	// \hdlname: core decoder rd
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:28
	/*outline*/ value<5> p_core_2e_decoder_2e_rd;
	// \hdlname: core decoder illegal
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:60
	/*outline*/ value<1> p_core_2e_decoder_2e_illegal;
	// \hdlname: core decoder jump
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:50
	/*outline*/ value<1> p_core_2e_decoder_2e_jump;
	// \hdlname: core decoder auipc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:49
	/*outline*/ value<1> p_core_2e_decoder_2e_auipc;
	// \hdlname: core decoder lui
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:48
	/*outline*/ value<1> p_core_2e_decoder_2e_lui;
	// \hdlname: core decoder rs2_re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:33
	/*outline*/ value<1> p_core_2e_decoder_2e_rs2__re;
	// \hdlname: core decoder rs1_re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:31
	/*outline*/ value<1> p_core_2e_decoder_2e_rs1__re;
	// \hdlname: core decoder immediate
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:34
	/*outline*/ value<32> p_core_2e_decoder_2e_immediate;
	// \hdlname: core decoder branch
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:51
	/*outline*/ value<1> p_core_2e_decoder_2e_branch;
	// \hdlname: core decoder compare
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:52
	/*outline*/ value<1> p_core_2e_decoder_2e_compare;
	// \hdlname: core decoder adder_sub
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:41
	/*outline*/ value<1> p_core_2e_decoder_2e_adder__sub;
	// \hdlname: core decoder adder
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:40
	/*outline*/ value<1> p_core_2e_decoder_2e_adder;
	// \hdlname: core decoder csr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:53
	/*outline*/ value<1> p_core_2e_decoder_2e_csr;
	// \hdlname: core decoder rs2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:32
	/*outline*/ value<5> p_core_2e_decoder_2e_rs2;
	// \hdlname: core decoder rs1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:30
	/*outline*/ value<5> p_core_2e_decoder_2e_rs1;
	// \hdlname: core exception interrupt_pe n
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:75
	/*outline*/ value<1> p_core_2e_exception_2e_interrupt__pe_2e_n;
	// \hdlname: core exception interrupt_pe o
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:74
	/*outline*/ value<4> p_core_2e_exception_2e_interrupt__pe_2e_o;
	// \hdlname: core exception trap_pe n
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:75
	/*outline*/ value<1> p_core_2e_exception_2e_trap__pe_2e_n;
	// \hdlname: core exception trap_pe o
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:74
	/*outline*/ value<4> p_core_2e_exception_2e_trap__pe_2e_o;
	// \hdlname: core exception interrupt_pe_i
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:73
	/*outline*/ value<16> p_core_2e_exception_2e_interrupt__pe__i;
	// \hdlname: core exception trap_pe_i
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:73
	/*outline*/ value<16> p_core_2e_exception_2e_trap__pe__i;
	// \hdlname: core exception irq_mask__r__value$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:22
	/*outline*/ value<32> p_core_2e_exception_2e_irq__mask____r____value_24_next;
	// \hdlname: core exception mip__r__zero3$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<20> p_core_2e_exception_2e_mip____r____zero3_24_next;
	// \hdlname: core exception mip__r__meip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____meip_24_next;
	// \hdlname: core exception mip__r__zero2$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____zero2_24_next;
	// \hdlname: core exception mip__r__seip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____seip_24_next;
	// \hdlname: core exception mip__r__ueip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____ueip_24_next;
	// \hdlname: core exception mip__r__zero1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____zero1_24_next;
	// \hdlname: core exception mip__r__stip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____stip_24_next;
	// \hdlname: core exception mip__r__utip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____utip_24_next;
	// \hdlname: core exception mip__r__zero0$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____zero0_24_next;
	// \hdlname: core exception mip__r__ssip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____ssip_24_next;
	// \hdlname: core exception mip__r__usip$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_exception_2e_mip____r____usip_24_next;
	// \hdlname: core exception mtval__r__value$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:20
	/*outline*/ value<32> p_core_2e_exception_2e_mtval____r____value_24_next;
	// \hdlname: core exception mcause__r__interrupt$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	/*outline*/ value<1> p_core_2e_exception_2e_mcause____r____interrupt_24_next;
	// \hdlname: core exception mcause__r__ecode$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	/*outline*/ value<31> p_core_2e_exception_2e_mcause____r____ecode_24_next;
	// \hdlname: core exception mepc__r__zero$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	/*outline*/ value<2> p_core_2e_exception_2e_mepc____r____zero_24_next;
	// \hdlname: core exception mscratch__r__value$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:17
	/*outline*/ value<32> p_core_2e_exception_2e_mscratch____r____value_24_next;
	// \hdlname: core exception mtvec__r__mode$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	/*outline*/ value<2> p_core_2e_exception_2e_mtvec____r____mode_24_next;
	// \hdlname: core exception mie__r__zero3$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<20> p_core_2e_exception_2e_mie____r____zero3_24_next;
	// \hdlname: core exception mie__r__meie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____meie_24_next;
	// \hdlname: core exception mie__r__zero2$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____zero2_24_next;
	// \hdlname: core exception mie__r__seie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____seie_24_next;
	// \hdlname: core exception mie__r__ueie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____ueie_24_next;
	// \hdlname: core exception mie__r__mtie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____mtie_24_next;
	// \hdlname: core exception mie__r__zero1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____zero1_24_next;
	// \hdlname: core exception mie__r__stie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____stie_24_next;
	// \hdlname: core exception mie__r__utie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____utie_24_next;
	// \hdlname: core exception mie__r__msie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____msie_24_next;
	// \hdlname: core exception mie__r__zero0$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____zero0_24_next;
	// \hdlname: core exception mie__r__ssie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____ssie_24_next;
	// \hdlname: core exception mie__r__usie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_exception_2e_mie____r____usie_24_next;
	// \hdlname: core exception misa__r__mxl$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<2> p_core_2e_exception_2e_misa____r____mxl_24_next;
	// \hdlname: core exception misa__r__zero$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<4> p_core_2e_exception_2e_misa____r____zero_24_next;
	// \hdlname: core exception misa__r__extensions$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<26> p_core_2e_exception_2e_misa____r____extensions_24_next;
	// \hdlname: core exception mstatus__r__sd$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____sd_24_next;
	// \hdlname: core exception mstatus__r__zero3$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<8> p_core_2e_exception_2e_mstatus____r____zero3_24_next;
	// \hdlname: core exception mstatus__r__tsr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____tsr_24_next;
	// \hdlname: core exception mstatus__r__tw$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____tw_24_next;
	// \hdlname: core exception mstatus__r__tvm$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____tvm_24_next;
	// \hdlname: core exception mstatus__r__mxr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____mxr_24_next;
	// \hdlname: core exception mstatus__r__sum$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____sum_24_next;
	// \hdlname: core exception mstatus__r__mprv$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____mprv_24_next;
	// \hdlname: core exception mstatus__r__xs$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_exception_2e_mstatus____r____xs_24_next;
	// \hdlname: core exception mstatus__r__fs$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_exception_2e_mstatus____r____fs_24_next;
	// \hdlname: core exception mstatus__r__mpp$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_exception_2e_mstatus____r____mpp_24_next;
	// \hdlname: core exception mstatus__r__zero2$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_exception_2e_mstatus____r____zero2_24_next;
	// \hdlname: core exception mstatus__r__spp$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____spp_24_next;
	// \hdlname: core exception mstatus__r__mpie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____mpie_24_next;
	// \hdlname: core exception mstatus__r__zero1$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____zero1_24_next;
	// \hdlname: core exception mstatus__r__spie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____spie_24_next;
	// \hdlname: core exception mstatus__r__upie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____upie_24_next;
	// \hdlname: core exception mstatus__r__mie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____mie_24_next;
	// \hdlname: core exception mstatus__r__zero0$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____zero0_24_next;
	// \hdlname: core exception mstatus__r__sie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____sie_24_next;
	// \hdlname: core exception mstatus__r__uie$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_exception_2e_mstatus____r____uie_24_next;
	// \hdlname: core exception mepc__r__base$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	/*outline*/ value<30> p_core_2e_exception_2e_mepc____r____base_24_next;
	// \hdlname: core exception mtvec__r__base$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	/*outline*/ value<30> p_core_2e_exception_2e_mtvec____r____base_24_next;
	// \hdlname: core exception m_raise
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:48
	/*outline*/ value<1> p_core_2e_exception_2e_m__raise;
	// \hdlname: core logic result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:15
	/*outline*/ value<32> p_core_2e_logic_2e_result;
	// \hdlname: core predict d_fetch_misaligned
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:21
	/*outline*/ value<1> p_core_2e_predict_2e_d__fetch__misaligned;
	// \hdlname: core predict d_branch_target
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:16
	/*outline*/ value<32> p_core_2e_predict_2e_d__branch__target;
	// \hdlname: core predict d_branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:15
	/*outline*/ value<1> p_core_2e_predict_2e_d__branch__taken;
	// \hdlname: core shifter m_result$9$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:23
	/*outline*/ value<32> p_core_2e_shifter_2e_m__result_24_9_24_next;
	// \hdlname: core shifter m_direction$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:22
	/*outline*/ value<1> p_core_2e_shifter_2e_m__direction_24_next;
	// \hdlname: core shifter x_filler
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:21
	/*outline*/ value<1> p_core_2e_shifter_2e_x__filler;
	// \hdlname: core shifter x_operand
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:20
	/*outline*/ value<32> p_core_2e_shifter_2e_x__operand;
	// \hdlname: core shifter m_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:15
	/*outline*/ value<32> p_core_2e_shifter_2e_m__result;
	// \hdlname: core fetch ibus_rdata$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:85
	/*outline*/ value<32> p_core_2e_fetch_2e_ibus__rdata_24_next;
	// \hdlname: core fetch f_busy
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:75
	/*outline*/ value<1> p_core_2e_fetch_2e_f__busy;
	// \hdlname: core fetch f_badaddr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:78
	/*outline*/ value<30> p_core_2e_fetch_2e_f__badaddr_24_next;
	// \hdlname: core fetch f_fetch_error$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:77
	/*outline*/ value<1> p_core_2e_fetch_2e_f__fetch__error_24_next;
	// \hdlname: core fetch f_instruction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:76
	/*outline*/ value<32> p_core_2e_fetch_2e_f__instruction;
	// \hdlname: core fetch ibus__stb$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:66
	/*outline*/ value<1> p_core_2e_fetch_2e_ibus____stb_24_next;
	// \hdlname: core fetch ibus__cyc$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:66
	/*outline*/ value<1> p_core_2e_fetch_2e_ibus____cyc_24_next;
	// \hdlname: core fetch ibus__adr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:66
	/*outline*/ value<30> p_core_2e_fetch_2e_ibus____adr_24_next;
	// \hdlname: core loadstore m_busy
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:90
	/*outline*/ value<1> p_core_2e_loadstore_2e_m__busy;
	// \hdlname: core loadstore m_load_data$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:91
	/*outline*/ value<32> p_core_2e_loadstore_2e_m__load__data_24_next;
	// \hdlname: core loadstore dbus__we$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	/*outline*/ value<1> p_core_2e_loadstore_2e_dbus____we_24_next;
	// \hdlname: core loadstore dbus__stb$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	/*outline*/ value<1> p_core_2e_loadstore_2e_dbus____stb_24_next;
	// \hdlname: core loadstore dbus__cyc$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	/*outline*/ value<1> p_core_2e_loadstore_2e_dbus____cyc_24_next;
	// \hdlname: core loadstore dbus__sel$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	/*outline*/ value<4> p_core_2e_loadstore_2e_dbus____sel_24_next;
	// \hdlname: core loadstore dbus__dat_w$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	/*outline*/ value<32> p_core_2e_loadstore_2e_dbus____dat__w_24_next;
	// \hdlname: core loadstore dbus__adr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:77
	/*outline*/ value<30> p_core_2e_loadstore_2e_dbus____adr_24_next;
	// \hdlname: core loadstore m_badaddr$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:94
	/*outline*/ value<30> p_core_2e_loadstore_2e_m__badaddr_24_next;
	// \hdlname: core loadstore m_store_error$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:93
	/*outline*/ value<1> p_core_2e_loadstore_2e_m__store__error_24_next;
	// \hdlname: core loadstore m_load_error$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:92
	/*outline*/ value<1> p_core_2e_loadstore_2e_m__load__error_24_next;
	// \hdlname: core gprf mem rp1__data
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:12
	/*outline*/ value<32> p_core_2e_gprf_2e_mem_2e_rp1____data;
	// \hdlname: core gprf mem rp2__data
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:13
	/*outline*/ value<32> p_core_2e_gprf_2e_mem_2e_rp2____data;
	// \hdlname: core gprf mem fwd_wp_en$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:79
	/*outline*/ value<1> p_core_2e_gprf_2e_mem_2e_fwd__wp__en_24_next;
	// \hdlname: core gprf mem fwd_wp_data$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:80
	/*outline*/ value<32> p_core_2e_gprf_2e_mem_2e_fwd__wp__data_24_next;
	// \hdlname: core gprf mem collision$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:78
	/*outline*/ value<2> p_core_2e_gprf_2e_mem_2e_collision_24_next;
	// \hdlname: core csrf irq_pending__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:23
	/*outline*/ value<1> p_core_2e_csrf_2e_irq__pending____re;
	// \hdlname: core csrf irq_mask__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:22
	/*outline*/ value<1> p_core_2e_csrf_2e_irq__mask____re;
	// \hdlname: core csrf mip__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____re;
	// \hdlname: core csrf mtval__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:20
	/*outline*/ value<1> p_core_2e_csrf_2e_mtval____re;
	// \hdlname: core csrf mcause__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	/*outline*/ value<1> p_core_2e_csrf_2e_mcause____re;
	// \hdlname: core csrf mepc__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	/*outline*/ value<1> p_core_2e_csrf_2e_mepc____re;
	// \hdlname: core csrf mscratch__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:17
	/*outline*/ value<1> p_core_2e_csrf_2e_mscratch____re;
	// \hdlname: core csrf mtvec__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	/*outline*/ value<1> p_core_2e_csrf_2e_mtvec____re;
	// \hdlname: core csrf mie__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____re;
	// \hdlname: core csrf misa__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<1> p_core_2e_csrf_2e_misa____re;
	// \hdlname: core csrf mstatus__re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____re;
	// \hdlname: core csrf irq_pending__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:23
	/*outline*/ value<32> p_core_2e_csrf_2e_irq__pending____w____value;
	// \hdlname: core csrf irq_pending__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:23
	/*outline*/ value<1> p_core_2e_csrf_2e_irq__pending____we;
	// \hdlname: core csrf irq_mask__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:22
	/*outline*/ value<32> p_core_2e_csrf_2e_irq__mask____w____value;
	// \hdlname: core csrf irq_mask__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:22
	/*outline*/ value<1> p_core_2e_csrf_2e_irq__mask____we;
	// \hdlname: core csrf mip__w__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<20> p_core_2e_csrf_2e_mip____w____zero3;
	// \hdlname: core csrf mip__w__meip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____meip;
	// \hdlname: core csrf mip__w__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____zero2;
	// \hdlname: core csrf mip__w__seip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____seip;
	// \hdlname: core csrf mip__w__ueip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____ueip;
	// \hdlname: core csrf mip__w__mtip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____mtip;
	// \hdlname: core csrf mip__w__zero1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____zero1;
	// \hdlname: core csrf mip__w__stip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____stip;
	// \hdlname: core csrf mip__w__utip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____utip;
	// \hdlname: core csrf mip__w__msip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____msip;
	// \hdlname: core csrf mip__w__zero0
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____zero0;
	// \hdlname: core csrf mip__w__ssip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____ssip;
	// \hdlname: core csrf mip__w__usip
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____w____usip;
	// \hdlname: core csrf mip__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	/*outline*/ value<1> p_core_2e_csrf_2e_mip____we;
	// \hdlname: core csrf mtval__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:20
	/*outline*/ value<32> p_core_2e_csrf_2e_mtval____w____value;
	// \hdlname: core csrf mtval__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:20
	/*outline*/ value<1> p_core_2e_csrf_2e_mtval____we;
	// \hdlname: core csrf mcause__w__interrupt
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	/*outline*/ value<1> p_core_2e_csrf_2e_mcause____w____interrupt;
	// \hdlname: core csrf mcause__w__ecode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	/*outline*/ value<31> p_core_2e_csrf_2e_mcause____w____ecode;
	// \hdlname: core csrf mcause__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	/*outline*/ value<1> p_core_2e_csrf_2e_mcause____we;
	// \hdlname: core csrf mepc__w__base
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	/*outline*/ value<30> p_core_2e_csrf_2e_mepc____w____base;
	// \hdlname: core csrf mepc__w__zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	/*outline*/ value<2> p_core_2e_csrf_2e_mepc____w____zero;
	// \hdlname: core csrf mepc__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	/*outline*/ value<1> p_core_2e_csrf_2e_mepc____we;
	// \hdlname: core csrf mscratch__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:17
	/*outline*/ value<32> p_core_2e_csrf_2e_mscratch____w____value;
	// \hdlname: core csrf mscratch__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:17
	/*outline*/ value<1> p_core_2e_csrf_2e_mscratch____we;
	// \hdlname: core csrf mtvec__w__base
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	/*outline*/ value<30> p_core_2e_csrf_2e_mtvec____w____base;
	// \hdlname: core csrf mtvec__w__mode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	/*outline*/ value<2> p_core_2e_csrf_2e_mtvec____w____mode;
	// \hdlname: core csrf mtvec__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	/*outline*/ value<1> p_core_2e_csrf_2e_mtvec____we;
	// \hdlname: core csrf mie__w__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<20> p_core_2e_csrf_2e_mie____w____zero3;
	// \hdlname: core csrf mie__w__meie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____meie;
	// \hdlname: core csrf mie__w__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____zero2;
	// \hdlname: core csrf mie__w__seie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____seie;
	// \hdlname: core csrf mie__w__ueie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____ueie;
	// \hdlname: core csrf mie__w__mtie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____mtie;
	// \hdlname: core csrf mie__w__zero1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____zero1;
	// \hdlname: core csrf mie__w__stie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____stie;
	// \hdlname: core csrf mie__w__utie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____utie;
	// \hdlname: core csrf mie__w__msie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____msie;
	// \hdlname: core csrf mie__w__zero0
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____zero0;
	// \hdlname: core csrf mie__w__ssie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____ssie;
	// \hdlname: core csrf mie__w__usie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____w____usie;
	// \hdlname: core csrf mie__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	/*outline*/ value<1> p_core_2e_csrf_2e_mie____we;
	// \hdlname: core csrf misa__w__mxl
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<2> p_core_2e_csrf_2e_misa____w____mxl;
	// \hdlname: core csrf misa__w__zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<4> p_core_2e_csrf_2e_misa____w____zero;
	// \hdlname: core csrf misa__w__extensions
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<26> p_core_2e_csrf_2e_misa____w____extensions;
	// \hdlname: core csrf misa__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	/*outline*/ value<1> p_core_2e_csrf_2e_misa____we;
	// \hdlname: core csrf mstatus__w__sd
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____sd;
	// \hdlname: core csrf mstatus__w__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<8> p_core_2e_csrf_2e_mstatus____w____zero3;
	// \hdlname: core csrf mstatus__w__tsr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____tsr;
	// \hdlname: core csrf mstatus__w__tw
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____tw;
	// \hdlname: core csrf mstatus__w__tvm
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____tvm;
	// \hdlname: core csrf mstatus__w__mxr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____mxr;
	// \hdlname: core csrf mstatus__w__sum
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____sum;
	// \hdlname: core csrf mstatus__w__mprv
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____mprv;
	// \hdlname: core csrf mstatus__w__xs
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_csrf_2e_mstatus____w____xs;
	// \hdlname: core csrf mstatus__w__fs
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_csrf_2e_mstatus____w____fs;
	// \hdlname: core csrf mstatus__w__mpp
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_csrf_2e_mstatus____w____mpp;
	// \hdlname: core csrf mstatus__w__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<2> p_core_2e_csrf_2e_mstatus____w____zero2;
	// \hdlname: core csrf mstatus__w__spp
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____spp;
	// \hdlname: core csrf mstatus__w__mpie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____mpie;
	// \hdlname: core csrf mstatus__w__zero1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____zero1;
	// \hdlname: core csrf mstatus__w__spie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____spie;
	// \hdlname: core csrf mstatus__w__upie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____upie;
	// \hdlname: core csrf mstatus__w__mie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____mie;
	// \hdlname: core csrf mstatus__w__zero0
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____zero0;
	// \hdlname: core csrf mstatus__w__sie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____sie;
	// \hdlname: core csrf mstatus__w__uie
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____w____uie;
	// \hdlname: core csrf mstatus__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	/*outline*/ value<1> p_core_2e_csrf_2e_mstatus____we;
	// \hdlname: core csrf rp__data
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:68
	/*outline*/ value<32> p_core_2e_csrf_2e_rp____data;
	// \hdlname: dmem wbus__ack$next
	// \src: tb.py:77
	/*outline*/ value<1> p_dmem_2e_wbus____ack_24_next;
	// \hdlname: dmem valid
	// \src: tb.py:87
	/*outline*/ value<1> p_dmem_2e_valid;
	// \hdlname: dmem adr_r$next
	// \src: tb.py:85
	/*outline*/ value<32> p_dmem_2e_adr__r_24_next;
	// \hdlname: dmem ram_we
	// \src: tb.py:96
	/*outline*/ value<1> p_dmem_2e_ram__we;
	// \hdlname: dmem waddr
	// \src: tb.py:100
	/*outline*/ value<32> p_dmem_2e_waddr;
	// \hdlname: dmem raddr
	// \src: tb.py:101
	/*outline*/ value<32> p_dmem_2e_raddr;
	// \hdlname: dmem we
	// \src: tb.py:108
	/*outline*/ value<4> p_dmem_2e_we;
	// \hdlname: dmem raddr2
	// \src: tb.py:112
	/*outline*/ value<3> p_dmem_2e_raddr2;
	// \hdlname: dmem waddr2
	// \src: tb.py:113
	/*outline*/ value<3> p_dmem_2e_waddr2;
	// \hdlname: imem wbus__dat_r$next
	// \src: tb.py:77
	/*outline*/ value<32> p_imem_2e_wbus____dat__r_24_next;
	// \hdlname: imem wbus__ack$next
	// \src: tb.py:77
	/*outline*/ value<1> p_imem_2e_wbus____ack_24_next;
	// \hdlname: imem valid
	// \src: tb.py:87
	/*outline*/ value<1> p_imem_2e_valid;
	// \hdlname: imem adr_r$next
	// \src: tb.py:85
	/*outline*/ value<32> p_imem_2e_adr__r_24_next;
	// \hdlname: imem waddr
	// \src: tb.py:100
	/*outline*/ value<32> p_imem_2e_waddr;
	// \hdlname: imem raddr
	// \src: tb.py:101
	/*outline*/ value<32> p_imem_2e_raddr;
	// \hdlname: imem raddr2
	// \src: tb.py:112
	/*outline*/ value<3> p_imem_2e_raddr2;
	// \hdlname: imem waddr2
	// \src: tb.py:113
	/*outline*/ value<3> p_imem_2e_waddr2;
	// \src: tb.py:161
	/*outline*/ value<1> p_dummy_24_next;
	// \src: tb.py:77
	/*outline*/ value<32> p_dmem__wbus____adr;
	// \src: tb.py:77
	/*outline*/ value<32> p_imem__wbus____adr;
	// \hdlname: core gprf mem _mem
	memory<32> memory_p_core_2e_gprf_2e_mem_2e___mem { 32u };

	p_top(interior) {}
	p_top() {
		reset();
	};

	void reset() override;
	bool eval() override;
	bool commit() override;

	void debug_eval();
	debug_outline debug_eval_outline { std::bind(&p_top::debug_eval, this) };

	void debug_info(debug_items &items, std::string path = "") override;
}; // struct p_top

void p_top::reset() {
	p_core_2e_m__payload____exception = wire<1>{0u};
	p_core_2e_csrf__rp____addr = wire<13>{0u};
	p_core_2e_payload____pc_24_24 = wire<33>{0xfffffffcu,0x1u};
	p_core_2e_payload____pc_24_26 = wire<32>{0u};
	p_core_2e_payload____instruction_24_27 = wire<32>{0u};
	p_core_2e_payload____fetch__error_24_28 = wire<1>{0u};
	p_core_2e_payload____fetch__badaddr_24_29 = wire<30>{0u};
	p_core_2e_payload____pc_24_31 = wire<32>{0u};
	p_core_2e_payload____instruction_24_33 = wire<32>{0u};
	p_core_2e_payload____fetch__error_24_35 = wire<1>{0u};
	p_core_2e_payload____fetch__badaddr_24_37 = wire<30>{0u};
	p_core_2e_payload____illegal_24_38 = wire<1>{0u};
	p_core_2e_payload____rd_24_39 = wire<5>{0u};
	p_core_2e_payload____rs1_24_40 = wire<5>{0u};
	p_core_2e_payload____rd__we_24_41 = wire<1>{0u};
	p_core_2e_payload____rs1__re_24_42 = wire<1>{0u};
	p_core_2e_payload____src1_24_43 = wire<32>{0u};
	p_core_2e_payload____src2_24_44 = wire<32>{0u};
	p_core_2e_payload____store__operand_24_45 = wire<32>{0u};
	p_core_2e_payload____bypass__x_24_46 = wire<1>{0u};
	p_core_2e_payload____bypass__m_24_47 = wire<1>{0u};
	p_core_2e_payload____funct3_24_48 = wire<3>{0u};
	p_core_2e_payload____load_24_49 = wire<1>{0u};
	p_core_2e_payload____store_24_50 = wire<1>{0u};
	p_core_2e_payload____adder__sub_24_51 = wire<1>{0u};
	p_core_2e_payload____logic_24_52 = wire<1>{0u};
	p_core_2e_payload____shift_24_55 = wire<1>{0u};
	p_core_2e_payload____direction_24_56 = wire<1>{0u};
	p_core_2e_payload____sext_24_57 = wire<1>{0u};
	p_core_2e_payload____jump_24_58 = wire<1>{0u};
	p_core_2e_payload____compare_24_59 = wire<1>{0u};
	p_core_2e_payload____branch_24_60 = wire<1>{0u};
	p_core_2e_payload____branch__target_24_61 = wire<32>{0u};
	p_core_2e_payload____branch__predict__taken_24_62 = wire<1>{0u};
	p_core_2e_payload____fence__i = wire<1>{0u};
	p_core_2e_payload____csr_24_63 = wire<1>{0u};
	p_core_2e_payload____csr__adr_24_64 = wire<12>{0u};
	p_core_2e_payload____csr__we_24_65 = wire<1>{0u};
	p_core_2e_payload____ecall_24_66 = wire<1>{0u};
	p_core_2e_payload____ebreak_24_67 = wire<1>{0u};
	p_core_2e_payload____mret_24_68 = wire<1>{0u};
	p_core_2e_payload____pc_24_70 = wire<32>{0u};
	p_core_2e_payload____instruction_24_72 = wire<32>{0u};
	p_core_2e_payload____fetch__error_24_74 = wire<1>{0u};
	p_core_2e_payload____fetch__badaddr_24_76 = wire<30>{0u};
	p_core_2e_payload____illegal_24_78 = wire<1>{0u};
	p_core_2e_payload____loadstore__misaligned_24_79 = wire<1>{0u};
	p_core_2e_payload____ecall_24_81 = wire<1>{0u};
	p_core_2e_payload____ebreak_24_83 = wire<1>{0u};
	p_core_2e_payload____rd_24_85 = wire<5>{0u};
	p_core_2e_payload____rd__we_24_87 = wire<1>{0u};
	p_core_2e_payload____bypass__m_24_89 = wire<1>{0u};
	p_core_2e_payload____funct3_24_91 = wire<3>{0u};
	p_core_2e_payload____result_24_92 = wire<32>{0u};
	p_core_2e_payload____shift_24_94 = wire<1>{0u};
	p_core_2e_payload____load_24_96 = wire<1>{0u};
	p_core_2e_payload____store_24_98 = wire<1>{0u};
	p_core_2e_payload____store__data_24_99 = wire<32>{0u};
	p_core_2e_payload____compare_24_101 = wire<1>{0u};
	p_core_2e_payload____condition__met_24_106 = wire<1>{0u};
	p_core_2e_payload____branch__target_24_108 = wire<32>{0u};
	p_core_2e_payload____branch__taken = wire<1>{0u};
	p_core_2e_payload____branch__predict__taken_24_109 = wire<1>{0u};
	p_core_2e_payload____csr_24_111 = wire<1>{0u};
	p_core_2e_payload____csr__adr_24_113 = wire<12>{0u};
	p_core_2e_payload____csr__we_24_115 = wire<1>{0u};
	p_core_2e_payload____csr__result_24_116 = wire<32>{0u};
	p_core_2e_payload____mret_24_117 = wire<1>{0u};
	p_core_2e_payload____pc_24_120 = wire<32>{0u};
	p_core_2e_payload____rd_24_122 = wire<5>{0u};
	p_core_2e_payload____rd__we_24_124 = wire<1>{0u};
	p_core_2e_payload____funct3_24_126 = wire<3>{0u};
	p_core_2e_payload____result_24_128 = wire<32>{0u};
	p_core_2e_payload____load_24_130 = wire<1>{0u};
	p_core_2e_payload____load__data_24_131 = wire<32>{0u};
	p_core_2e_a_2e_valid = wire<1>{0u};
	p_core_2e_f_2e_valid_24_1 = wire<1>{0u};
	p_core_2e_d_2e_valid_24_1 = wire<1>{0u};
	p_core_2e_x_2e_valid_24_1 = wire<1>{0u};
	p_core_2e_m_2e_valid_24_1 = wire<1>{0u};
	p_core_2e_adder_2e_x__sub = wire<1>{0u};
	p_core_2e_exception_2e_irq__pending____r____value = wire<32>{0u};
	p_core_2e_exception_2e_irq__mask____r____value = wire<32>{0u};
	p_core_2e_exception_2e_mip____r____zero3 = wire<20>{0u};
	p_core_2e_exception_2e_mip____r____meip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____zero2 = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____seip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____ueip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____mtip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____zero1 = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____stip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____utip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____msip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____zero0 = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____ssip = wire<1>{0u};
	p_core_2e_exception_2e_mip____r____usip = wire<1>{0u};
	p_core_2e_exception_2e_mtval____r____value = wire<32>{0u};
	p_core_2e_exception_2e_mcause____r____interrupt = wire<1>{0u};
	p_core_2e_exception_2e_mcause____r____ecode = wire<31>{0u};
	p_core_2e_exception_2e_mepc____r____zero = wire<2>{0u};
	p_core_2e_exception_2e_mscratch____r____value = wire<32>{0u};
	p_core_2e_exception_2e_mtvec____r____mode = wire<2>{0u};
	p_core_2e_exception_2e_mie____r____zero3 = wire<20>{0u};
	p_core_2e_exception_2e_mie____r____meie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____zero2 = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____seie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____ueie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____mtie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____zero1 = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____stie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____utie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____msie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____zero0 = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____ssie = wire<1>{0u};
	p_core_2e_exception_2e_mie____r____usie = wire<1>{0u};
	p_core_2e_exception_2e_misa____r____mxl = wire<2>{0u};
	p_core_2e_exception_2e_misa____r____zero = wire<4>{0u};
	p_core_2e_exception_2e_misa____r____extensions = wire<26>{0u};
	p_core_2e_exception_2e_mstatus____r____sd = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____zero3 = wire<8>{0u};
	p_core_2e_exception_2e_mstatus____r____tsr = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____tw = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____tvm = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____mxr = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____sum = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____mprv = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____xs = wire<2>{0u};
	p_core_2e_exception_2e_mstatus____r____fs = wire<2>{0u};
	p_core_2e_exception_2e_mstatus____r____mpp = wire<2>{0u};
	p_core_2e_exception_2e_mstatus____r____zero2 = wire<2>{0u};
	p_core_2e_exception_2e_mstatus____r____spp = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____mpie = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____zero1 = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____spie = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____upie = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____mie = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____zero0 = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____sie = wire<1>{0u};
	p_core_2e_exception_2e_mstatus____r____uie = wire<1>{0u};
	p_core_2e_exception_2e_mepc____r____base = wire<30>{0u};
	p_core_2e_exception_2e_mtvec____r____base = wire<30>{0u};
	p_core_2e_shifter_2e_m__result_24_9 = wire<32>{0u};
	p_core_2e_shifter_2e_m__direction = wire<1>{0u};
	p_core_2e_fetch_2e_ibus__rdata = wire<32>{0u};
	p_core_2e_fetch_2e_f__badaddr = wire<30>{0u};
	p_core_2e_fetch_2e_f__fetch__error = wire<1>{0u};
	p_core_2e_fetch_2e_ibus____stb = wire<1>{0u};
	p_core_2e_fetch_2e_ibus____cyc = wire<1>{0u};
	p_core_2e_fetch_2e_ibus____adr = wire<30>{0u};
	p_core_2e_loadstore_2e_m__load__data = wire<32>{0u};
	p_core_2e_loadstore_2e_dbus____we = wire<1>{0u};
	p_core_2e_loadstore_2e_dbus____stb = wire<1>{0u};
	p_core_2e_loadstore_2e_dbus____cyc = wire<1>{0u};
	p_core_2e_loadstore_2e_dbus____sel = wire<4>{0u};
	p_core_2e_loadstore_2e_dbus____dat__w = wire<32>{0u};
	p_core_2e_loadstore_2e_dbus____adr = wire<30>{0u};
	p_core_2e_loadstore_2e_m__badaddr = wire<30>{0u};
	p_core_2e_loadstore_2e_m__store__error = wire<1>{0u};
	p_core_2e_loadstore_2e_m__load__error = wire<1>{0u};
	p_core_2e_gprf_2e_mem_2e_fwd__wp__en = wire<1>{0u};
	p_core_2e_gprf_2e_mem_2e_fwd__wp__data = wire<32>{0u};
	p_core_2e_gprf_2e_mem_2e_collision = wire<2>{0u};
	p_dmem_2e_wbus____dat__r = wire<32>{0u};
	p_dmem_2e_wbus____ack = wire<1>{0u};
	p_dmem_2e_adr__r = wire<32>{0u};
	p_imem_2e_wbus____dat__r = wire<32>{0u};
	p_imem_2e_wbus____ack = wire<1>{0u};
	p_imem_2e_adr__r = wire<32>{0u};
	p_dummy = wire<1>{0u};
	static const value<32> mem_init_1[32] {
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
		value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u}, value<32>{0x00000000u},
	};
	std::copy(std::begin(mem_init_1), std::end(mem_init_1), &memory_p_core_2e_gprf_2e_mem_2e___mem.data[0]);
}

bool p_top::eval() {
	bool converged = true;
	bool posedge_p_clk = this->posedge_p_clk();
	value<1> i_procmux_24_809__Y;
	value<1> i_procmux_24_788__Y;
	value<30> i_procmux_24_652__Y;
	value<31> i_procmux_24_641__Y;
	value<1> i_procmux_24_630__Y;
	value<2> i_procmux_24_617__CMP;
	value<2> i_procmux_24_616__CMP;
	value<32> i_procmux_24_612__Y;
	value<32> i_procmux_24_462__Y;
	value<2> i_procmux_24_454__CMP;
	value<2> i_procmux_24_451__CMP;
	value<2> i_procmux_24_450__CMP;
	// \hdlname: core rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_rst;
	// \hdlname: core clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_clk;
	// \hdlname: core a_payload__fence_i
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_a__payload____fence__i;
	// \hdlname: core a_payload__branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_a__payload____branch__taken;
	// \hdlname: core a_payload__branch_predict_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_a__payload____branch__predict__taken;
	// \hdlname: core a_payload__mret
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_a__payload____mret;
	// \hdlname: core a_valid$3
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_a__valid_24_3;
	// \hdlname: core a_m_raise
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:48
	value<1> p_core_2e_a__m__raise;
	// \hdlname: core a_valid$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_a__valid_24_4;
	// \hdlname: core x_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_x__valid;
	// \hdlname: core m_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_m__valid;
	// \hdlname: core w_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_w__valid;
	// \hdlname: core data_sel_x_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:15
	value<2> p_core_2e_data__sel__x__offset;
	// \hdlname: core data_sel_x_store_operand
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:17
	value<32> p_core_2e_data__sel__x__store__operand;
	// \hdlname: core data_sel_w_load_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:20
	value<32> p_core_2e_data__sel__w__load__data;
	// \hdlname: core compare_zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:12
	value<1> p_core_2e_compare__zero;
	// \hdlname: core decoder_instruction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:26
	value<32> p_core_2e_decoder__instruction;
	// \hdlname: core decoder_rs1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:30
	value<5> p_core_2e_decoder__rs1;
	// \hdlname: core decoder_rs2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:32
	value<5> p_core_2e_decoder__rs2;
	// \hdlname: core decoder_csr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:53
	value<1> p_core_2e_decoder__csr;
	// \hdlname: core decoder_adder
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:40
	value<1> p_core_2e_decoder__adder;
	// \hdlname: core decoder_adder_sub
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:41
	value<1> p_core_2e_decoder__adder__sub;
	// \hdlname: core decoder_compare
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:52
	value<1> p_core_2e_decoder__compare;
	// \hdlname: core decoder_branch
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:51
	value<1> p_core_2e_decoder__branch;
	// \hdlname: core decoder_immediate
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:34
	value<32> p_core_2e_decoder__immediate;
	// \hdlname: core decoder_rs1_re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:31
	value<1> p_core_2e_decoder__rs1__re;
	// \hdlname: core decoder_rs2_re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:33
	value<1> p_core_2e_decoder__rs2__re;
	// \hdlname: core exception_m_pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:41
	value<32> p_core_2e_exception__m__pc;
	// \hdlname: core predict_d_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:11
	value<32> p_core_2e_predict__d__offset;
	// \hdlname: core shifter_x_direction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:9
	value<1> p_core_2e_shifter__x__direction;
	// \hdlname: core fetch_a_pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:68
	value<32> p_core_2e_fetch__a__pc;
	// \hdlname: core loadstore_x_store
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:82
	value<1> p_core_2e_loadstore__x__store;
	// \hdlname: core loadstore_x_store_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:83
	value<32> p_core_2e_loadstore__x__store__data;
	// \hdlname: core gprf_rp1__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:12
	value<5> p_core_2e_gprf__rp1____addr;
	// \hdlname: core gprf_rp2__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:13
	value<5> p_core_2e_gprf__rp2____addr;
	// \hdlname: core gprf_wp__en
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:14
	value<1> p_core_2e_gprf__wp____en;
	// \hdlname: core gprf_wp__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:14
	value<5> p_core_2e_gprf__wp____addr;
	// \hdlname: core gprf_wp__data
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:14
	value<32> p_core_2e_gprf__wp____data;
	// \hdlname: core csrf_wp__en
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:73
	value<1> p_core_2e_csrf__wp____en;
	// \hdlname: core csrf_wp__data
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:73
	value<32> p_core_2e_csrf__wp____data;
	// \hdlname: core payload__pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<33> p_core_2e_payload____pc;
	// \hdlname: core payload__pc$25
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____pc_24_25;
	// \hdlname: core payload__instruction
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____instruction;
	// \hdlname: core payload__pc$30
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____pc_24_30;
	// \hdlname: core payload__rd
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<5> p_core_2e_payload____rd;
	// \hdlname: core payload__rs1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<5> p_core_2e_payload____rs1;
	// \hdlname: core payload__rd_we
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____rd__we;
	// \hdlname: core payload__src1
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____src1;
	// \hdlname: core payload__src2
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____src2;
	// \hdlname: core payload__funct3
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<3> p_core_2e_payload____funct3;
	// \hdlname: core payload__load
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____load;
	// \hdlname: core payload__store
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____store;
	// \hdlname: core payload__jump
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____jump;
	// \hdlname: core payload__compare
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____compare;
	// \hdlname: core payload__csr
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____csr;
	// \hdlname: core payload__csr_adr
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<12> p_core_2e_payload____csr__adr;
	// \hdlname: core payload__csr_we
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____csr__we;
	// \hdlname: core payload__pc$69
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____pc_24_69;
	// \hdlname: core payload__loadstore_misaligned
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____loadstore__misaligned;
	// \hdlname: core payload__rd$84
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<5> p_core_2e_payload____rd_24_84;
	// \hdlname: core payload__rd_we$86
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____rd__we_24_86;
	// \hdlname: core payload__result
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____result;
	// \hdlname: core payload__load$95
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____load_24_95;
	// \hdlname: core payload__branch_target$107
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____branch__target_24_107;
	// \hdlname: core payload__csr_adr$112
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<12> p_core_2e_payload____csr__adr_24_112;
	// \hdlname: core payload__csr_we$114
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____csr__we_24_114;
	// \hdlname: core payload__rd$121
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<5> p_core_2e_payload____rd_24_121;
	// \hdlname: core payload__rd_we$123
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_payload____rd__we_24_123;
	// \hdlname: core payload__result$127
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<32> p_core_2e_payload____result_24_127;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:396
	value<3> i_flatten_5c_core_2e__24_149;
	// \hdlname: core d_raw_rs1_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:544
	value<1> p_core_2e_d__raw__rs1__x;
	// \hdlname: core d_raw_rs2_x
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:547
	value<1> p_core_2e_d__raw__rs2__x;
	// \hdlname: core d_raw_rs1_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:545
	value<1> p_core_2e_d__raw__rs1__m;
	// \hdlname: core d_raw_rs2_m
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:548
	value<1> p_core_2e_d__raw__rs2__m;
	// \hdlname: core x_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:601
	value<32> p_core_2e_x__result;
	// \hdlname: core m_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:602
	value<32> p_core_2e_m__result;
	// \hdlname: core w_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:603
	value<32> p_core_2e_w__result;
	// \hdlname: core d_src2
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:672
	value<32> p_core_2e_d__src2;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_a_2e__24_43;
	// \hdlname: core a kill$10
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	value<1> p_core_2e_a_2e_kill_24_10;
	// \hdlname: core a valid$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_a_2e_valid_24_4;
	// \hdlname: core a payload__branch_predict_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_a_2e_payload____branch__predict__taken;
	// \hdlname: core a payload__branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_a_2e_payload____branch__taken;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_f_2e__24_45;
	// \hdlname: core f kill$16
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	value<1> p_core_2e_f_2e_kill_24_16;
	// \hdlname: core f valid$7
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_f_2e_valid_24_7;
	// \hdlname: core f valid$5
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_f_2e_valid_24_5;
	// \hdlname: core f payload__branch_predict_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_f_2e_payload____branch__predict__taken;
	// \hdlname: core f payload__branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_f_2e_payload____branch__taken;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_d_2e__24_36;
	// \hdlname: core d kill$15
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:60
	value<1> p_core_2e_d_2e_kill_24_15;
	// \hdlname: core d valid$5
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_d_2e_valid_24_5;
	// \hdlname: core d valid$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_d_2e_valid_24_4;
	// \hdlname: core d stall$2
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	value<1> p_core_2e_d_2e_stall_24_2;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_x_2e__24_17;
	// \hdlname: core x stall$5
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	value<1> p_core_2e_x_2e_stall_24_5;
	// \hdlname: core x valid$4
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_x_2e_valid_24_4;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_m_2e__24_40;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_m_2e__24_38;
	// \hdlname: core m stall$8
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:61
	value<1> p_core_2e_m_2e_stall_24_8;
	// \hdlname: core m valid$6
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:62
	value<1> p_core_2e_m_2e_valid_24_6;
	// \hdlname: core pc_sel a_pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:30
	value<32> p_core_2e_pc__sel_2e_a__pc;
	// \hdlname: core pc_sel m_mret
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:25
	value<1> p_core_2e_pc__sel_2e_m__mret;
	// \hdlname: core pc_sel m_exception
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:24
	value<1> p_core_2e_pc__sel_2e_m__exception;
	// \hdlname: core pc_sel m_branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:22
	value<1> p_core_2e_pc__sel_2e_m__branch__taken;
	// \hdlname: core pc_sel m_branch_predict_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:21
	value<1> p_core_2e_pc__sel_2e_m__branch__predict__taken;
	// \hdlname: core data_sel w_half
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:53
	value<16> p_core_2e_data__sel_2e_w__half;
	// \hdlname: core data_sel w_byte
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:52
	value<8> p_core_2e_data__sel_2e_w__byte;
	// \hdlname: core data_sel w_load_data
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:20
	value<32> p_core_2e_data__sel_2e_w__load__data;
	// \hdlname: core data_sel w_funct3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:19
	value<3> p_core_2e_data__sel_2e_w__funct3;
	// \hdlname: core data_sel w_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:18
	value<2> p_core_2e_data__sel_2e_w__offset;
	// \hdlname: core data_sel x_store_operand
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:17
	value<32> p_core_2e_data__sel_2e_x__store__operand;
	// \hdlname: core data_sel x_funct3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:16
	value<3> p_core_2e_data__sel_2e_x__funct3;
	// \hdlname: core data_sel x_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:15
	value<2> p_core_2e_data__sel_2e_x__offset;
	// \hdlname: core adder x_sub_carry
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:36
	value<1> p_core_2e_adder_2e_x__sub__carry;
	// \hdlname: core adder x_sub_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:35
	value<32> p_core_2e_adder_2e_x__sub__result;
	// \hdlname: core adder x_add_carry
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:27
	value<1> p_core_2e_adder_2e_x__add__carry;
	// \hdlname: core adder x_add_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:26
	value<32> p_core_2e_adder_2e_x__add__result;
	// \hdlname: core adder x_result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:14
	value<32> p_core_2e_adder_2e_x__result;
	// \hdlname: core adder x_src2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:12
	value<32> p_core_2e_adder_2e_x__src2;
	// \hdlname: core adder x_src1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:11
	value<32> p_core_2e_adder_2e_x__src1;
	// \hdlname: core compare condition_met
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:17
	value<1> p_core_2e_compare_2e_condition__met;
	// \hdlname: core compare carry
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:15
	value<1> p_core_2e_compare_2e_carry;
	// \hdlname: core compare overflow
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:14
	value<1> p_core_2e_compare_2e_overflow;
	// \hdlname: core compare negative
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:13
	value<1> p_core_2e_compare_2e_negative;
	// \hdlname: core compare zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:12
	value<1> p_core_2e_compare_2e_zero;
	// \hdlname: core compare op
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/compare.py:11
	value<3> p_core_2e_compare_2e_op;
	// \hdlname: core decoder privileged
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:55
	value<1> p_core_2e_decoder_2e_privileged;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:141
	value<1> i_flatten_5c_core_2e__5c_decoder_2e__24_99;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:135
	value<1> i_flatten_5c_core_2e__5c_decoder_2e__24_49;
	// \hdlname: core decoder fmt
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:77
	value<3> p_core_2e_decoder_2e_fmt;
	// \hdlname: core decoder funct12
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:68
	value<12> p_core_2e_decoder_2e_funct12;
	// \hdlname: core decoder funct7
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:67
	value<7> p_core_2e_decoder_2e_funct7;
	// \hdlname: core decoder funct3$1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:66
	value<3> p_core_2e_decoder_2e_funct3_24_1;
	// \hdlname: core decoder opcode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:65
	value<5> p_core_2e_decoder_2e_opcode;
	// \hdlname: core decoder mret
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:58
	value<1> p_core_2e_decoder_2e_mret;
	// \hdlname: core decoder ebreak
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:57
	value<1> p_core_2e_decoder_2e_ebreak;
	// \hdlname: core decoder ecall
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:56
	value<1> p_core_2e_decoder_2e_ecall;
	// \hdlname: core decoder fence_i
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:39
	value<1> p_core_2e_decoder_2e_fence__i;
	// \hdlname: core decoder shift
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:45
	value<1> p_core_2e_decoder_2e_shift;
	// \hdlname: core decoder logic
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:42
	value<1> p_core_2e_decoder_2e_logic;
	// \hdlname: core decoder store
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:38
	value<1> p_core_2e_decoder_2e_store;
	// \hdlname: core decoder load
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:37
	value<1> p_core_2e_decoder_2e_load;
	// \hdlname: core decoder jump
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:50
	value<1> p_core_2e_decoder_2e_jump;
	// \hdlname: core decoder auipc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:49
	value<1> p_core_2e_decoder_2e_auipc;
	// \hdlname: core decoder lui
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:48
	value<1> p_core_2e_decoder_2e_lui;
	// \hdlname: core decoder rs2_re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:33
	value<1> p_core_2e_decoder_2e_rs2__re;
	// \hdlname: core decoder rs1_re
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:31
	value<1> p_core_2e_decoder_2e_rs1__re;
	// \hdlname: core decoder immediate
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:34
	value<32> p_core_2e_decoder_2e_immediate;
	// \hdlname: core decoder branch
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:51
	value<1> p_core_2e_decoder_2e_branch;
	// \hdlname: core decoder compare
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:52
	value<1> p_core_2e_decoder_2e_compare;
	// \hdlname: core decoder adder
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:40
	value<1> p_core_2e_decoder_2e_adder;
	// \hdlname: core decoder csr
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:53
	value<1> p_core_2e_decoder_2e_csr;
	// \hdlname: core decoder rs2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:32
	value<5> p_core_2e_decoder_2e_rs2;
	// \hdlname: core decoder rs1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:30
	value<5> p_core_2e_decoder_2e_rs1;
	// \hdlname: core exception interrupt_pe i
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:73
	value<16> p_core_2e_exception_2e_interrupt__pe_2e_i;
	// \hdlname: core exception trap_pe i
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:73
	value<16> p_core_2e_exception_2e_trap__pe_2e_i;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:82
	value<1> i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:86
	value<1> i_flatten_5c_core_2e__5c_exception_2e__24_11;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:86
	value<1> i_flatten_5c_core_2e__5c_exception_2e__24_3;
	// \hdlname: core exception interrupt_pe_i
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:73
	value<16> p_core_2e_exception_2e_interrupt__pe__i;
	// \hdlname: core exception trap_pe_o
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:74
	value<4> p_core_2e_exception_2e_trap__pe__o;
	// \hdlname: core exception trap_pe_i
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:73
	value<16> p_core_2e_exception_2e_trap__pe__i;
	// \hdlname: core exception mip__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	value<1> p_core_2e_exception_2e_mip____we;
	// \hdlname: core exception mcause__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	value<1> p_core_2e_exception_2e_mcause____we;
	// \hdlname: core exception mepc__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	value<1> p_core_2e_exception_2e_mepc____we;
	// \hdlname: core exception mtvec__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	value<1> p_core_2e_exception_2e_mtvec____we;
	// \hdlname: core exception mie__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	value<1> p_core_2e_exception_2e_mie____we;
	// \hdlname: core exception misa__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	value<1> p_core_2e_exception_2e_misa____we;
	// \hdlname: core exception mstatus__we
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	value<1> p_core_2e_exception_2e_mstatus____we;
	// \hdlname: core exception m_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:46
	value<1> p_core_2e_exception_2e_m__valid;
	// \hdlname: core exception m_stall
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:45
	value<1> p_core_2e_exception_2e_m__stall;
	// \hdlname: core exception m_raise
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:48
	value<1> p_core_2e_exception_2e_m__raise;
	// \hdlname: core exception clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_exception_2e_clk;
	// \hdlname: core exception rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_exception_2e_rst;
	// \hdlname: core logic result
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:15
	value<32> p_core_2e_logic_2e_result;
	// \hdlname: core logic src2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:13
	value<32> p_core_2e_logic_2e_src2;
	// \hdlname: core logic src1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:12
	value<32> p_core_2e_logic_2e_src1;
	// \hdlname: core logic op
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/logic.py:11
	value<3> p_core_2e_logic_2e_op;
	// \hdlname: core predict d_pc
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:12
	value<32> p_core_2e_predict_2e_d__pc;
	// \hdlname: core predict d_offset
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:11
	value<32> p_core_2e_predict_2e_d__offset;
	// \hdlname: core predict d_branch_target
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:16
	value<32> p_core_2e_predict_2e_d__branch__target;
	// \hdlname: core predict d_branch_taken
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/predict.py:15
	value<1> p_core_2e_predict_2e_d__branch__taken;
	// \hdlname: core shifter x_filler
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:21
	value<1> p_core_2e_shifter_2e_x__filler;
	// \hdlname: core shifter x_src1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:12
	value<32> p_core_2e_shifter_2e_x__src1;
	// \hdlname: core shifter x_direction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:9
	value<1> p_core_2e_shifter_2e_x__direction;
	// \hdlname: core shifter clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_shifter_2e_clk;
	// \hdlname: core shifter rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_shifter_2e_rst;
	// \hdlname: core fetch f_instruction
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:76
	value<32> p_core_2e_fetch_2e_f__instruction;
	// \hdlname: core fetch f_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:72
	value<1> p_core_2e_fetch_2e_f__valid;
	// \hdlname: core fetch clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_fetch_2e_clk;
	// \hdlname: core fetch rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_fetch_2e_rst;
	// \hdlname: core loadstore m_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:87
	value<1> p_core_2e_loadstore_2e_m__valid;
	// \hdlname: core loadstore x_valid
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:85
	value<1> p_core_2e_loadstore_2e_x__valid;
	// \hdlname: core loadstore x_stall
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:84
	value<1> p_core_2e_loadstore_2e_x__stall;
	// \hdlname: core loadstore x_store
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:82
	value<1> p_core_2e_loadstore_2e_x__store;
	// \hdlname: core loadstore x_load
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:81
	value<1> p_core_2e_loadstore_2e_x__load;
	// \hdlname: core loadstore clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_loadstore_2e_clk;
	// \hdlname: core loadstore rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_loadstore_2e_rst;
	// \hdlname: core gprf mem rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_gprf_2e_mem_2e_rst;
	// \hdlname: core gprf mem clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_core_2e_gprf_2e_mem_2e_clk;
	// \hdlname: core gprf mem wp__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/gpr.py:14
	value<5> p_core_2e_gprf_2e_mem_2e_wp____addr;
	// \hdlname: core gprf mem _mem_w_en
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:48
	value<1> p_core_2e_gprf_2e_mem_2e___mem__w__en;
	// \hdlname: core gprf mem collision$next
	// \src: /home/devector/Documents/riscv/minerva/minerva/mem.py:78
	value<2> p_core_2e_gprf_2e_mem_2e_collision_24_next;
	// \hdlname: core csrf irq_mask__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:22
	value<32> p_core_2e_csrf_2e_irq__mask____w____value;
	// \hdlname: core csrf mip__w__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:21
	value<20> p_core_2e_csrf_2e_mip____w____zero3;
	// \hdlname: core csrf mtval__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:20
	value<32> p_core_2e_csrf_2e_mtval____w____value;
	// \hdlname: core csrf mcause__w__ecode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:19
	value<31> p_core_2e_csrf_2e_mcause____w____ecode;
	// \hdlname: core csrf mepc__w__base
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	value<30> p_core_2e_csrf_2e_mepc____w____base;
	// \hdlname: core csrf mepc__w__zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:18
	value<2> p_core_2e_csrf_2e_mepc____w____zero;
	// \hdlname: core csrf mscratch__w__value
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:17
	value<32> p_core_2e_csrf_2e_mscratch____w____value;
	// \hdlname: core csrf mtvec__w__base
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	value<30> p_core_2e_csrf_2e_mtvec____w____base;
	// \hdlname: core csrf mtvec__w__mode
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:16
	value<2> p_core_2e_csrf_2e_mtvec____w____mode;
	// \hdlname: core csrf mie__w__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:15
	value<20> p_core_2e_csrf_2e_mie____w____zero3;
	// \hdlname: core csrf misa__w__mxl
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	value<2> p_core_2e_csrf_2e_misa____w____mxl;
	// \hdlname: core csrf misa__w__zero
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	value<4> p_core_2e_csrf_2e_misa____w____zero;
	// \hdlname: core csrf misa__w__extensions
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:14
	value<26> p_core_2e_csrf_2e_misa____w____extensions;
	// \hdlname: core csrf mstatus__w__zero3
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	value<8> p_core_2e_csrf_2e_mstatus____w____zero3;
	// \hdlname: core csrf mstatus__w__xs
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	value<2> p_core_2e_csrf_2e_mstatus____w____xs;
	// \hdlname: core csrf mstatus__w__fs
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	value<2> p_core_2e_csrf_2e_mstatus____w____fs;
	// \hdlname: core csrf mstatus__w__mpp
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	value<2> p_core_2e_csrf_2e_mstatus____w____mpp;
	// \hdlname: core csrf mstatus__w__zero2
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:13
	value<2> p_core_2e_csrf_2e_mstatus____w____zero2;
	// \hdlname: core csrf wp__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:73
	value<13> p_core_2e_csrf_2e_wp____addr;
	// \hdlname: core csrf rp__addr
	// \src: /home/devector/Documents/riscv/minerva/minerva/csr.py:68
	value<13> p_core_2e_csrf_2e_rp____addr;
	// \hdlname: dmem rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_dmem_2e_rst;
	// \hdlname: dmem clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_dmem_2e_clk;
	// \hdlname: imem rst
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_imem_2e_rst;
	// \hdlname: imem clk
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ir.py:527
	value<1> p_imem_2e_clk;
	// \hdlname: imem raddr2
	// \src: tb.py:112
	value<3> p_imem_2e_raddr2;
	// \src: tb.py:77
	value<32> p_imem__wbus____adr;
	// connection
	p_core_2e_payload____branch__target_24_107 = p_core_2e_payload____branch__target_24_108.curr;
	// connection
	p_core_2e_a__payload____branch__taken = p_core_2e_payload____branch__taken.curr;
	// connection
	p_core_2e_payload____load_24_95 = p_core_2e_payload____load_24_96.curr;
	// connection
	p_core_2e_payload____loadstore__misaligned = p_core_2e_payload____loadstore__misaligned_24_79.curr;
	// connection
	p_core_2e_exception_2e_interrupt__pe__i.slice<15,12>().concat(p_core_2e_exception_2e_interrupt__pe__i.slice<10,8>()).concat(p_core_2e_exception_2e_interrupt__pe__i.slice<6,4>()).concat(p_core_2e_exception_2e_interrupt__pe__i.slice<2,0>()) = value<13>{0u};
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:79
	// cell $flatten\core.\exception.$36
	p_core_2e_exception_2e_interrupt__pe__i.slice<3>() = and_uu<1>(p_core_2e_exception_2e_mip____r____msip.curr, p_core_2e_exception_2e_mie____r____msie.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:80
	// cell $flatten\core.\exception.$38
	p_core_2e_exception_2e_interrupt__pe__i.slice<7>() = and_uu<1>(p_core_2e_exception_2e_mip____r____mtip.curr, p_core_2e_exception_2e_mie____r____mtie.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:81
	// cell $flatten\core.\exception.$40
	p_core_2e_exception_2e_interrupt__pe__i.slice<11>() = and_uu<1>(p_core_2e_exception_2e_mip____r____meip.curr, p_core_2e_exception_2e_mie____r____meie.curr);
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<15,12>().concat(p_core_2e_exception_2e_trap__pe__i.slice<10,8>()) = value<7>{0u};
	// cells $flatten\core.$182 $flatten\core.$180
	p_core_2e_exception_2e_trap__pe__i.slice<0>() = and_uu<1>(p_core_2e_a__payload____branch__taken, reduce_bool<1>(p_core_2e_payload____branch__target_24_107.slice<1,0>().val()));
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<1>() = p_core_2e_payload____fetch__error_24_74.curr;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<2>() = p_core_2e_payload____illegal_24_78.curr;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<3>() = p_core_2e_payload____ebreak_24_83.curr;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:461
	// cell $flatten\core.$184
	p_core_2e_exception_2e_trap__pe__i.slice<4>() = and_uu<1>(p_core_2e_payload____load_24_95, p_core_2e_payload____loadstore__misaligned);
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<5>() = p_core_2e_loadstore_2e_m__load__error.curr;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:464
	// cell $flatten\core.$186
	p_core_2e_exception_2e_trap__pe__i.slice<6>() = and_uu<1>(p_core_2e_payload____store_24_98.curr, p_core_2e_payload____loadstore__misaligned);
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<7>() = p_core_2e_loadstore_2e_m__store__error.curr;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<11>() = p_core_2e_payload____ecall_24_81.curr;
	// connection
	p_core_2e_exception_2e_interrupt__pe_2e_i = p_core_2e_exception_2e_interrupt__pe__i;
	// connection
	p_core_2e_exception_2e_trap__pe_2e_i = p_core_2e_exception_2e_trap__pe__i;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:82
	// cell $flatten\core.\exception.\trap_pe.$2
	i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 = logic_not<1>(p_core_2e_exception_2e_trap__pe_2e_i);
	// connection
	p_core_2e_a__payload____branch__predict__taken = p_core_2e_payload____branch__predict__taken_24_109.curr;
	// cells $flatten\core.\exception.$48 $flatten\core.\exception.$46 $flatten\core.\exception.$44 $flatten\core.\exception.\interrupt_pe.$2 $flatten\core.\exception.$42
	p_core_2e_exception_2e_m__raise = or_uu<1>(not_u<1>(i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1), and_uu<1>(not_u<1>(logic_not<1>(p_core_2e_exception_2e_interrupt__pe_2e_i)), p_core_2e_exception_2e_mstatus____r____mie.curr));
	// connection
	p_core_2e_m_2e_valid_24_6 = p_core_2e_x_2e_valid_24_1.curr;
	// connection
	p_core_2e_a__payload____mret = p_core_2e_payload____mret_24_117.curr;
	// connection
	p_core_2e_a__m__raise = p_core_2e_exception_2e_m__raise;
	// connection
	p_core_2e_a__valid_24_4 = p_core_2e_m_2e_valid_24_6;
	// connection
	p_core_2e_d_2e_valid_24_5 = p_core_2e_a__valid_24_4;
	// cells $flatten\core.\d.$31 $flatten\core.\d.$29 $flatten\core.\d.$27 $flatten\core.\d.$23 $flatten\core.\d.$21 $flatten\core.\d.$19
	p_core_2e_d_2e_kill_24_15 = or_uu<1>(and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_a__payload____branch__predict__taken), p_core_2e_a__payload____branch__taken), p_core_2e_d_2e_valid_24_5), and_uu<1>(or_uu<1>(p_core_2e_a__m__raise, p_core_2e_a__payload____mret), p_core_2e_d_2e_valid_24_5));
	// connection
	p_core_2e_payload____instruction = p_core_2e_payload____instruction_24_27.curr;
	// connection
	p_core_2e_x__valid = p_core_2e_d_2e_valid_24_1.curr;
	// connection
	p_core_2e_decoder__instruction = p_core_2e_payload____instruction;
	// connection
	p_core_2e_decoder_2e_opcode = p_core_2e_decoder__instruction.slice<6,2>().val();
	// connection
	p_core_2e_decoder_2e_funct3_24_1 = p_core_2e_decoder__instruction.slice<14,12>().val();
	// cells $flatten\core.\x.$9 $flatten\core.\x.$7
	p_core_2e_x_2e_valid_24_4 = and_uu<1>(p_core_2e_x__valid, not_u<1>(p_core_2e_d_2e_kill_24_15));
	// connection
	p_core_2e_f_2e_payload____branch__taken = p_core_2e_a__payload____branch__taken;
	// connection
	p_core_2e_a__payload____fence__i = p_core_2e_payload____fence__i.curr;
	// connection
	p_core_2e_a__valid_24_3 = p_core_2e_x_2e_valid_24_4;
	// cells $procmux$481 $procmux$482_CMP0 $procmux$483_CMP0 $procmux$484_CMP0 $procmux$485_CMP0 $procmux$486_CMP0 $procmux$487_CMP0 $procmux$488_CMP0 $procmux$489_CMP0 $procmux$490_CMP0 $procmux$491_CMP0
	p_core_2e_decoder_2e_fmt = (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x3u}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x4u}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x8u}) ? value<3>{0x2u} : (logic_not<1>(p_core_2e_decoder_2e_opcode) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}) ? value<3>{0x3u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x19u}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1bu}) ? value<3>{0x5u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x5u}) ? value<3>{0x4u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0xdu}) ? value<3>{0x4u} : value<3>{0u}))))))))));
	// connection
	p_core_2e_f_2e_payload____branch__predict__taken = p_core_2e_a__payload____branch__predict__taken;
	// connection
	p_core_2e_f_2e_valid_24_5 = p_core_2e_a__valid_24_4;
	// cells $procmux$475 $procmux$476_CMP0 $procmux$477_CMP0 $procmux$478_CMP0 $procmux$479_CMP0 $procmux$480_CMP0 $flatten\core.\decoder.$12 $flatten\core.\decoder.$7 $flatten\core.\decoder.$5 $flatten\core.\decoder.$3
	p_core_2e_decoder_2e_immediate = (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x5u}) ? pos_s<32>(p_core_2e_decoder__instruction.slice<31>().concat(p_core_2e_decoder__instruction.slice<19,12>()).concat(p_core_2e_decoder__instruction.slice<20>()).concat(p_core_2e_decoder__instruction.slice<30,21>()).concat(value<1>{0u}).val()) : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x4u}) ? p_core_2e_payload____instruction_24_27.curr.slice<31,12>().concat(value<12>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x3u}) ? pos_s<32>(p_core_2e_decoder__instruction.slice<31>().concat(p_core_2e_decoder__instruction.slice<7>()).concat(p_core_2e_decoder__instruction.slice<30,25>()).concat(p_core_2e_decoder__instruction.slice<11,8>()).concat(value<1>{0u}).val()) : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x2u}) ? pos_s<32>(p_core_2e_decoder__instruction.slice<31,25>().concat(p_core_2e_decoder__instruction.slice<11,7>()).val()) : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x1u}) ? pos_s<32>(p_core_2e_decoder__instruction.slice<31,20>().val()) : value<32>{0u})))));
	// connection
	p_core_2e_payload____pc_24_25 = p_core_2e_payload____pc_24_26.curr;
	// cells $flatten\core.\decoder.$40 $flatten\core.\decoder.$38 $flatten\core.\decoder.$36 $flatten\core.\decoder.$34 $flatten\core.\decoder.$32 $flatten\core.\decoder.$30 $flatten\core.\decoder.$28
	p_core_2e_decoder_2e_rs1__re = or_uu<1>(or_uu<1>(or_uu<1>(logic_not<1>(p_core_2e_decoder_2e_fmt), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<1>{0x1u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x2u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x3u}));
	// connection
	p_core_2e_predict__d__offset = p_core_2e_decoder_2e_immediate;
	// cells $flatten\core.\decoder.$398 $flatten\core.\decoder.$392 $flatten\core.\decoder.$390 $flatten\core.\decoder.$388 $flatten\core.\decoder.$380
	p_core_2e_decoder_2e_jump = or_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1bu}), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x19u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)));
	// cells $flatten\core.\decoder.$170 $flatten\core.\decoder.$164 $flatten\core.\decoder.$162 $flatten\core.\decoder.$160 $flatten\core.\decoder.$158 $flatten\core.\decoder.$152 $flatten\core.\decoder.$150 $flatten\core.\decoder.$148 $flatten\core.\decoder.$146 $flatten\core.\decoder.$140 $flatten\core.\decoder.$138 $flatten\core.\decoder.$136 $flatten\core.\decoder.$134 $flatten\core.\decoder.$128 $flatten\core.\decoder.$126 $flatten\core.\decoder.$124 $flatten\core.\decoder.$122 $flatten\core.\decoder.$116 $flatten\core.\decoder.$114 $flatten\core.\decoder.$112 $flatten\core.\decoder.$106 $flatten\core.\decoder.$104 $flatten\core.\decoder.$102
	p_core_2e_decoder_2e_branch = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u})));
	// connection
	p_core_2e_predict_2e_d__offset = p_core_2e_predict__d__offset;
	// connection
	p_core_2e_predict_2e_d__pc = p_core_2e_payload____pc_24_25;
	// cells $flatten\core.\f.$44 $flatten\core.\f.$42 $flatten\core.\f.$40 $flatten\core.\f.$38 $flatten\core.\f.$36 $flatten\core.\f.$34 $flatten\core.\f.$32 $flatten\core.\f.$30 $flatten\core.\f.$28 $flatten\core.\f.$26 $flatten\core.\f.$24 $flatten\core.\f.$20
	p_core_2e_f_2e_kill_24_16 = or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_a__payload____fence__i, p_core_2e_a__valid_24_3), and_uu<1>(and_uu<1>(p_core_2e_f_2e_payload____branch__predict__taken, not_u<1>(p_core_2e_f_2e_payload____branch__taken)), p_core_2e_f_2e_valid_24_5)), and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_f_2e_payload____branch__predict__taken), p_core_2e_f_2e_payload____branch__taken), p_core_2e_f_2e_valid_24_5)), and_uu<1>(or_uu<1>(p_core_2e_a__m__raise, p_core_2e_a__payload____mret), p_core_2e_f_2e_valid_24_5));
	// cells $procmux$842 $flatten\core.\predict.$6 $flatten\core.\predict.$4 $flatten\core.\predict.$2 $procmux$840 $flatten\core.\predict.$17 $flatten\core.\predict.$15
	p_core_2e_predict_2e_d__branch__taken = (or_uu<1>(reduce_bool<1>(p_core_2e_predict_2e_d__pc.slice<1,0>().val()), reduce_bool<1>(p_core_2e_predict_2e_d__offset.slice<1,0>().val())) ? value<1>{0u} : (p_core_2e_decoder_2e_branch ? p_core_2e_predict__d__offset.slice<31>().val() : and_uu<1>(p_core_2e_decoder_2e_jump, not_u<1>(p_core_2e_decoder_2e_rs1__re))));
	// cells $flatten\core.\d.$10 $flatten\core.\d.$8
	p_core_2e_d_2e_valid_24_4 = and_uu<1>(p_core_2e_f_2e_valid_24_1.curr, not_u<1>(p_core_2e_f_2e_kill_24_16));
	// connection
	p_core_2e_a_2e_payload____branch__taken = p_core_2e_a__payload____branch__taken;
	// connection
	p_core_2e_a_2e_payload____branch__predict__taken = p_core_2e_a__payload____branch__predict__taken;
	// connection
	p_core_2e_a_2e_valid_24_4 = p_core_2e_a__valid_24_4;
	// cells $flatten\core.\a.$42 $flatten\core.\a.$40 $flatten\core.\a.$38 $flatten\core.\a.$36 $flatten\core.\a.$34 $flatten\core.\a.$32 $flatten\core.\a.$30 $flatten\core.\a.$28 $flatten\core.\a.$26 $flatten\core.\a.$24 $flatten\core.\a.$22 $flatten\core.\a.$20 $flatten\core.\a.$18 $flatten\core.\a.$14
	p_core_2e_a_2e_kill_24_10 = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_a__payload____fence__i, p_core_2e_a__valid_24_3), and_uu<1>(p_core_2e_predict_2e_d__branch__taken, p_core_2e_d_2e_valid_24_4)), and_uu<1>(and_uu<1>(p_core_2e_a_2e_payload____branch__predict__taken, not_u<1>(p_core_2e_a_2e_payload____branch__taken)), p_core_2e_a_2e_valid_24_4)), and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_a_2e_payload____branch__predict__taken), p_core_2e_a_2e_payload____branch__taken), p_core_2e_a_2e_valid_24_4)), and_uu<1>(or_uu<1>(p_core_2e_a__m__raise, p_core_2e_a__payload____mret), p_core_2e_a_2e_valid_24_4));
	// connection
	p_core_2e_payload____rd_24_84 = p_core_2e_payload____rd_24_85.curr;
	// connection
	p_core_2e_payload____rd = p_core_2e_payload____rd_24_39.curr;
	// connection
	p_core_2e_decoder_2e_rs2 = p_core_2e_decoder__instruction.slice<24,20>().val();
	// connection
	p_core_2e_payload____rd__we_24_86 = p_core_2e_payload____rd__we_24_87.curr;
	// connection
	p_core_2e_decoder_2e_rs1 = p_core_2e_decoder__instruction.slice<19,15>().val();
	// connection
	p_core_2e_payload____rd__we = p_core_2e_payload____rd__we_24_41.curr;
	// connection
	p_core_2e_payload____csr__adr_24_112 = p_core_2e_payload____csr__adr_24_113.curr;
	// connection
	p_core_2e_decoder__rs2 = p_core_2e_decoder_2e_rs2;
	// connection
	p_core_2e_decoder__rs1 = p_core_2e_decoder_2e_rs1;
	// connection
	p_core_2e_payload____csr__adr = p_core_2e_payload____csr__adr_24_64.curr;
	// connection
	p_core_2e_decoder_2e_funct7 = p_core_2e_decoder__instruction.slice<31,25>().val();
	// connection
	p_core_2e_decoder__immediate = p_core_2e_decoder_2e_immediate;
	// connection
	p_core_2e_payload____csr__we_24_114 = p_core_2e_payload____csr__we_24_115.curr;
	// cells $flatten\core.\decoder.$50 $flatten\core.\decoder.$48 $flatten\core.\decoder.$46 $flatten\core.\decoder.$44 $flatten\core.\decoder.$42
	i_flatten_5c_core_2e__5c_decoder_2e__24_49 = or_uu<1>(or_uu<1>(logic_not<1>(p_core_2e_decoder_2e_fmt), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x2u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x3u}));
	// connection
	p_core_2e_payload____csr__we = p_core_2e_payload____csr__we_24_65.curr;
	// cells $flatten\core.\f.$11 $flatten\core.\f.$9
	p_core_2e_f_2e_valid_24_7 = and_uu<1>(p_core_2e_a_2e_valid.curr, not_u<1>(p_core_2e_a_2e_kill_24_10));
	// connection
	p_core_2e_decoder_2e_rs2__re = i_flatten_5c_core_2e__5c_decoder_2e__24_49;
	// cells $flatten\core.\decoder.$570 $flatten\core.\decoder.$564 $flatten\core.\decoder.$562 $flatten\core.\decoder.$560 $flatten\core.\decoder.$558 $flatten\core.\decoder.$552 $flatten\core.\decoder.$550 $flatten\core.\decoder.$548 $flatten\core.\decoder.$546 $flatten\core.\decoder.$540 $flatten\core.\decoder.$538 $flatten\core.\decoder.$536 $flatten\core.\decoder.$534 $flatten\core.\decoder.$528 $flatten\core.\decoder.$526 $flatten\core.\decoder.$524 $flatten\core.\decoder.$522 $flatten\core.\decoder.$516 $flatten\core.\decoder.$514 $flatten\core.\decoder.$512 $flatten\core.\decoder.$506 $flatten\core.\decoder.$504 $flatten\core.\decoder.$502
	p_core_2e_decoder_2e_csr = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u})), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x3u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u})));
	// cells $procmux$20 $flatten\core.$210 $flatten\core.$208 $flatten\core.$212
	p_core_2e_d__raw__rs2__m = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_84), p_core_2e_payload____rd__we_24_86) ? eq_uu<1>(p_core_2e_payload____rd_24_84, p_core_2e_decoder__rs2) : value<1>{0u});
	// connection
	p_core_2e_decoder__rs2__re = p_core_2e_decoder_2e_rs2__re;
	// cells $procmux$18 $flatten\core.$204 $flatten\core.$202 $flatten\core.$206
	p_core_2e_d__raw__rs1__m = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_84), p_core_2e_payload____rd__we_24_86) ? eq_uu<1>(p_core_2e_payload____rd_24_84, p_core_2e_decoder__rs1) : value<1>{0u});
	// connection
	p_core_2e_decoder__rs1__re = p_core_2e_decoder_2e_rs1__re;
	// cells $procmux$16 $flatten\core.$198 $flatten\core.$196 $flatten\core.$200
	p_core_2e_d__raw__rs2__x = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd), p_core_2e_payload____rd__we) ? eq_uu<1>(p_core_2e_payload____rd, p_core_2e_decoder__rs2) : value<1>{0u});
	// cells $procmux$14 $flatten\core.$192 $flatten\core.$190 $flatten\core.$194
	p_core_2e_d__raw__rs1__x = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd), p_core_2e_payload____rd__we) ? eq_uu<1>(p_core_2e_payload____rd, p_core_2e_decoder__rs1) : value<1>{0u});
	// connection
	p_core_2e_decoder__csr = p_core_2e_decoder_2e_csr;
	// connection
	p_core_2e_payload____src1 = p_core_2e_payload____src1_24_43.curr;
	// connection
	p_core_2e_payload____src2 = p_core_2e_payload____src2_24_44.curr;
	// connection
	p_core_2e_payload____rs1 = p_core_2e_payload____rs1_24_40.curr;
	// cells $flatten\core.\decoder.$100 $flatten\core.\decoder.$96 $flatten\core.\decoder.$94 $flatten\core.\decoder.$92 $flatten\core.\decoder.$90 $flatten\core.\decoder.$88 $flatten\core.\decoder.$86 $flatten\core.\decoder.$82 $flatten\core.\decoder.$80 $flatten\core.\decoder.$78 $flatten\core.\decoder.$76 $flatten\core.\decoder.$74 $flatten\core.\decoder.$72 $flatten\core.\decoder.$66 $flatten\core.\decoder.$64 $flatten\core.\decoder.$62 $flatten\core.\decoder.$56 $flatten\core.\decoder.$54 $flatten\core.\decoder.$52
	i_flatten_5c_core_2e__5c_decoder_2e__24_99 = or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x3u}))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x3u})), logic_not<1>(p_core_2e_decoder_2e_funct7)));
	// connection
	p_core_2e_payload____result_24_127 = p_core_2e_payload____result_24_128.curr;
	// connection
	p_core_2e_payload____funct3 = p_core_2e_payload____funct3_24_48.curr;
	// connection
	p_core_2e_decoder_2e_compare = i_flatten_5c_core_2e__5c_decoder_2e__24_99;
	// connection
	p_core_2e_adder_2e_x__src1 = p_core_2e_payload____src1;
	// connection
	p_core_2e_adder_2e_x__src2 = p_core_2e_payload____src2;
	// cells $flatten\core.\decoder.$208 $flatten\core.\decoder.$204 $flatten\core.\decoder.$202 $flatten\core.\decoder.$200 $flatten\core.\decoder.$198 $flatten\core.\decoder.$196 $flatten\core.\decoder.$194 $flatten\core.\decoder.$190 $flatten\core.\decoder.$188 $flatten\core.\decoder.$186 $flatten\core.\decoder.$184 $flatten\core.\decoder.$182 $flatten\core.\decoder.$176 $flatten\core.\decoder.$174 $flatten\core.\decoder.$172
	p_core_2e_decoder_2e_adder = or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u})));
	// cells $flatten\core.\m.$39 $flatten\core.\m.$37 $procmux$897 $flatten\core.\loadstore.$90 $flatten\core.\m.$35 $flatten\core.\m.$33 $flatten\core.\m.$31 $flatten\core.\m.$29 $procmux$856
	i_flatten_5c_core_2e__5c_m_2e__24_38 = or_uu<1>(or_uu<1>(or_uu<1>(p_core_2e_fetch_2e_ibus____cyc.curr, and_uu<1>((p_core_2e_fetch_2e_f__fetch__error.curr ? value<1>{0u} : p_core_2e_fetch_2e_ibus____cyc.curr), p_core_2e_f_2e_valid_24_7)), and_uu<1>(p_core_2e_loadstore_2e_dbus____cyc.curr, p_core_2e_a__valid_24_3)), and_uu<1>((or_uu<1>(p_core_2e_loadstore_2e_m__load__error.curr, p_core_2e_loadstore_2e_m__store__error.curr) ? value<1>{0u} : p_core_2e_loadstore_2e_dbus____cyc.curr), p_core_2e_m_2e_valid_24_6));
	// connection
	p_core_2e_data__sel_2e_w__offset = p_core_2e_payload____result_24_127.slice<1,0>().val();
	// connection
	p_core_2e_data__sel__w__load__data = p_core_2e_payload____load__data_24_131.curr;
	// cells $flatten\core.\decoder.$288 $flatten\core.\decoder.$284 $flatten\core.\decoder.$282 $flatten\core.\decoder.$280 $flatten\core.\decoder.$278 $flatten\core.\decoder.$276 $flatten\core.\decoder.$274 $flatten\core.\decoder.$270 $flatten\core.\decoder.$268 $flatten\core.\decoder.$266 $flatten\core.\decoder.$264 $flatten\core.\decoder.$262 $flatten\core.\decoder.$260 $flatten\core.\decoder.$256 $flatten\core.\decoder.$254 $flatten\core.\decoder.$252 $flatten\core.\decoder.$250 $flatten\core.\decoder.$248 $flatten\core.\decoder.$246 $flatten\core.\decoder.$240 $flatten\core.\decoder.$238 $flatten\core.\decoder.$236 $flatten\core.\decoder.$234 $flatten\core.\decoder.$228 $flatten\core.\decoder.$226 $flatten\core.\decoder.$224 $flatten\core.\decoder.$218 $flatten\core.\decoder.$216 $flatten\core.\decoder.$214
	p_core_2e_decoder_2e_logic = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u})), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u}))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u})), logic_not<1>(p_core_2e_decoder_2e_funct7)));
	// connection
	p_core_2e_pc__sel_2e_m__branch__predict__taken = p_core_2e_a__payload____branch__predict__taken;
	// connection
	i_flatten_5c_core_2e__5c_m_2e__24_40 = i_flatten_5c_core_2e__5c_m_2e__24_38;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:40
	// cell $flatten\core.\adder.$12
	p_core_2e_adder_2e_x__sub__carry.concat(p_core_2e_adder_2e_x__sub__result) = sub_uu<33>(p_core_2e_adder_2e_x__src1, p_core_2e_adder_2e_x__src2);
	// connection
	p_core_2e_payload____rd_24_121 = p_core_2e_payload____rd_24_122.curr;
	// connection
	p_core_2e_data__sel_2e_w__load__data = p_core_2e_data__sel__w__load__data;
	// connection
	p_core_2e_payload____csr = p_core_2e_payload____csr_24_63.curr;
	// connection
	i_flatten_5c_core_2e__24_149.slice<2>() = value<1>{0x1u};
	// connection
	i_flatten_5c_core_2e__24_149.slice<1,0>() = p_core_2e_payload____funct3_24_48.curr.slice<1,0>().val();
	// connection
	p_core_2e_pc__sel_2e_m__branch__taken = p_core_2e_a__payload____branch__taken;
	// connection
	p_core_2e_m_2e_stall_24_8 = i_flatten_5c_core_2e__5c_m_2e__24_40;
	// connection
	i_flatten_5c_core_2e__5c_x_2e__24_17 = i_flatten_5c_core_2e__5c_m_2e__24_38;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:31
	// cell $flatten\core.\adder.$4
	p_core_2e_adder_2e_x__add__carry.concat(p_core_2e_adder_2e_x__add__result) = add_uu<33>(p_core_2e_adder_2e_x__src1, p_core_2e_adder_2e_x__src2);
	// connection
	p_core_2e_payload____rd__we_24_123 = p_core_2e_payload____rd__we_24_124.curr;
	// cells $flatten\core.\decoder.$370 $flatten\core.\decoder.$366 $flatten\core.\decoder.$364 $flatten\core.\decoder.$362 $flatten\core.\decoder.$360 $flatten\core.\decoder.$358 $flatten\core.\decoder.$356 $flatten\core.\decoder.$352 $flatten\core.\decoder.$350 $flatten\core.\decoder.$348 $flatten\core.\decoder.$346 $flatten\core.\decoder.$344 $flatten\core.\decoder.$342 $flatten\core.\decoder.$338 $flatten\core.\decoder.$336 $flatten\core.\decoder.$334 $flatten\core.\decoder.$332 $flatten\core.\decoder.$330 $flatten\core.\decoder.$328 $flatten\core.\decoder.$324 $flatten\core.\decoder.$322 $flatten\core.\decoder.$320 $flatten\core.\decoder.$318 $flatten\core.\decoder.$316 $flatten\core.\decoder.$314 $flatten\core.\decoder.$310 $flatten\core.\decoder.$308 $flatten\core.\decoder.$306 $flatten\core.\decoder.$304 $flatten\core.\decoder.$302 $flatten\core.\decoder.$298 $flatten\core.\decoder.$296 $flatten\core.\decoder.$294 $flatten\core.\decoder.$292 $flatten\core.\decoder.$290
	p_core_2e_decoder_2e_shift = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u})), logic_not<1>(p_core_2e_decoder_2e_funct7)), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u}))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u})));
	// connection
	p_core_2e_x_2e_stall_24_5 = i_flatten_5c_core_2e__5c_x_2e__24_17;
	// cells $flatten\core.\data_sel.$21 $flatten\core.\data_sel.$20
	p_core_2e_data__sel_2e_w__byte = shift_uu<8>(p_core_2e_data__sel_2e_w__load__data, mul_uu<6>(p_core_2e_data__sel_2e_w__offset, value<4>{0x8u}));
	// cells $flatten\core.\data_sel.$25 $flatten\core.\data_sel.$24
	p_core_2e_data__sel_2e_w__half = shift_uu<16>(p_core_2e_data__sel_2e_w__load__data, mul_uu<6>(p_core_2e_data__sel_2e_w__offset.slice<1>().val(), value<5>{0x10u}));
	// connection
	p_core_2e_data__sel_2e_w__funct3 = p_core_2e_payload____funct3_24_126.curr;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:211
	// cell $flatten\core.\decoder.$376
	p_core_2e_decoder_2e_lui = eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xdu});
	// cells $flatten\core.$168 $flatten\core.$166 $flatten\core.$165 $flatten\core.$158 $flatten\core.$157 $flatten\core.$155 $flatten\core.$162 $flatten\core.$160
	p_core_2e_logic_2e_src1 = (p_core_2e_payload____csr ? (and_uu<1>(p_core_2e_payload____funct3.slice<1>().val(), p_core_2e_payload____funct3.slice<0>().val()) ? not_u<32>((p_core_2e_payload____funct3.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1) : p_core_2e_payload____src1)) : (p_core_2e_payload____funct3.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1) : p_core_2e_payload____src1)) : p_core_2e_payload____src1);
	// connection
	p_core_2e_logic_2e_src2 = p_core_2e_payload____src2;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:399
	// cell $flatten\core.$152
	p_core_2e_logic_2e_op = (p_core_2e_payload____csr ? i_flatten_5c_core_2e__24_149 : p_core_2e_payload____funct3);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:212
	// cell $flatten\core.\decoder.$378
	p_core_2e_decoder_2e_auipc = eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x5u});
	// connection
	p_core_2e_pc__sel_2e_m__mret = p_core_2e_a__payload____mret;
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:44
	// cell $procmux$462
	i_procmux_24_462__Y = (p_core_2e_adder_2e_x__sub.curr ? p_core_2e_adder_2e_x__sub__result : p_core_2e_adder_2e_x__add__result);
	// connection
	p_core_2e_payload____compare = p_core_2e_payload____compare_24_59.curr;
	// connection
	p_core_2e_payload____pc = p_core_2e_payload____pc_24_24.curr;
	// connection
	p_core_2e_payload____pc_24_30 = p_core_2e_payload____pc_24_31.curr;
	// connection
	p_core_2e_pc__sel_2e_m__exception = p_core_2e_exception_2e_m__raise;
	// connection
	p_core_2e_d_2e_stall_24_2 = p_core_2e_x_2e_stall_24_5;
	// connection
	p_core_2e_adder_2e_x__result = i_procmux_24_462__Y;
	// connection
	p_core_2e_w__valid = p_core_2e_m_2e_valid_24_1.curr;
	// connection
	p_core_2e_payload____result = p_core_2e_payload____result_24_92.curr;
	// cells $flatten\core.\decoder.$456 $flatten\core.\decoder.$450 $flatten\core.\decoder.$448 $flatten\core.\decoder.$446 $flatten\core.\decoder.$444 $flatten\core.\decoder.$438 $flatten\core.\decoder.$436 $flatten\core.\decoder.$434 $flatten\core.\decoder.$432 $flatten\core.\decoder.$426 $flatten\core.\decoder.$424 $flatten\core.\decoder.$422 $flatten\core.\decoder.$420 $flatten\core.\decoder.$414 $flatten\core.\decoder.$412 $flatten\core.\decoder.$410 $flatten\core.\decoder.$404 $flatten\core.\decoder.$402 $flatten\core.\decoder.$400
	p_core_2e_decoder_2e_load = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u}))), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}))), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u}))), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})));
	// connection
	p_core_2e_decoder_2e_funct12 = p_core_2e_decoder__instruction.slice<31,20>().val();
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// cell $flatten\core.$293
	p_core_2e_csrf_2e_wp____addr = pos_u<13>(p_core_2e_payload____csr__adr_24_112);
	// cells $flatten\core.\d.$37 $flatten\core.\d.$33 $flatten\core.$262 $flatten\core.$260 $procmux$32 $flatten\core.$256 $flatten\core.$254 $procmux$28 $flatten\core.$232 $flatten\core.$230 $flatten\core.$252 $flatten\core.$250 $flatten\core.$248 $flatten\core.$258 $procmux$30 $flatten\core.$244 $flatten\core.$242 $procmux$26 $flatten\core.$228 $flatten\core.$226 $flatten\core.$240 $flatten\core.$238 $flatten\core.$236
	i_flatten_5c_core_2e__5c_d_2e__24_36 = or_uu<1>(and_uu<1>(or_uu<1>(and_uu<1>((p_core_2e_payload____bypass__x_24_46.curr ? value<1>{0u} : or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder__rs1__re, p_core_2e_d__raw__rs1__x), and_uu<1>(p_core_2e_decoder__rs2__re, p_core_2e_d__raw__rs2__x)), and_uu<1>(p_core_2e_decoder__csr, (p_core_2e_payload____csr__we ? eq_ss<1>(pos_u<32>(p_core_2e_payload____csr__adr), p_core_2e_decoder__immediate) : value<1>{0u})))), p_core_2e_a__valid_24_3), and_uu<1>((p_core_2e_payload____bypass__m_24_89.curr ? value<1>{0u} : or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder__rs1__re, p_core_2e_d__raw__rs1__m), and_uu<1>(p_core_2e_decoder__rs2__re, p_core_2e_d__raw__rs2__m)), and_uu<1>(p_core_2e_decoder__csr, (p_core_2e_payload____csr__we_24_114 ? eq_ss<1>(pos_u<32>(p_core_2e_payload____csr__adr_24_112), p_core_2e_decoder__immediate) : value<1>{0u})))), p_core_2e_a__valid_24_4)), p_core_2e_d_2e_valid_24_4), p_core_2e_d_2e_stall_24_2);
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:447
	// cell $flatten\core.$178
	p_core_2e_compare__zero = eq_uu<1>(p_core_2e_payload____src1, p_core_2e_payload____src2);
	// connection
	p_core_2e_m__valid = p_core_2e_x_2e_valid_24_1.curr;
	// cells $procmux$835 $procmux$836_CMP0 $procmux$837_CMP0 $procmux$838_CMP0 $flatten\core.\logic.$6 $flatten\core.\logic.$4 $flatten\core.\logic.$2
	p_core_2e_logic_2e_result = (eq_uu<1>(p_core_2e_logic_2e_op, value<3>{0x7u}) ? and_uu<32>(p_core_2e_logic_2e_src1, p_core_2e_logic_2e_src2) : (eq_uu<1>(p_core_2e_logic_2e_op, value<3>{0x6u}) ? or_uu<32>(p_core_2e_logic_2e_src1, p_core_2e_logic_2e_src2) : (eq_uu<1>(p_core_2e_logic_2e_op, value<3>{0x4u}) ? xor_uu<32>(p_core_2e_logic_2e_src1, p_core_2e_logic_2e_src2) : value<32>{0u})));
	// connection
	p_core_2e_payload____jump = p_core_2e_payload____jump_24_58.curr;
	// cells $flatten\core.\decoder.$490 $flatten\core.\decoder.$484 $flatten\core.\decoder.$482 $flatten\core.\decoder.$480 $flatten\core.\decoder.$478 $flatten\core.\decoder.$472 $flatten\core.\decoder.$470 $flatten\core.\decoder.$468 $flatten\core.\decoder.$462 $flatten\core.\decoder.$460 $flatten\core.\decoder.$458
	p_core_2e_decoder_2e_store = or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0x8u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0x8u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0x8u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})));
	// cells $flatten\core.\decoder.$582 $flatten\core.\decoder.$580 $flatten\core.\decoder.$578
	p_core_2e_decoder_2e_privileged = and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1));
	// cells $flatten\core.\predict.$13 $flatten\core.\predict.$11 $flatten\core.\predict.$9
	p_core_2e_predict_2e_d__branch__target = add_ss<34>(pos_u<33>(p_core_2e_predict_2e_d__pc), pos_s<33>(p_core_2e_predict_2e_d__offset)).slice<31,0>().val();
	// cells $procmux$52 $flatten\core.$287 $flatten\core.$285 $flatten\core.$283 $flatten\core.$291 $flatten\core.$289
	p_core_2e_csrf__wp____en = (and_uu<1>(not_u<1>(p_core_2e_a__m__raise), not_u<1>(p_core_2e_m_2e_stall_24_8)) ? and_uu<1>(and_uu<1>(p_core_2e_payload____csr_24_111.curr, p_core_2e_payload____csr__we_24_114), p_core_2e_a__valid_24_4) : value<1>{0u});
	// connection
	i_flatten_5c_core_2e__5c_f_2e__24_45 = i_flatten_5c_core_2e__5c_d_2e__24_36;
	// connection
	p_core_2e_compare_2e_zero = p_core_2e_compare__zero;
	// connection
	p_core_2e_compare_2e_negative = p_core_2e_adder_2e_x__result.slice<31>().val();
	// cells $procmux$456 $flatten\core.\adder.$18 $flatten\core.\adder.$16 $flatten\core.\adder.$14 $flatten\core.\adder.$10 $flatten\core.\adder.$8 $flatten\core.\adder.$6
	p_core_2e_compare_2e_overflow = (p_core_2e_adder_2e_x__sub.curr ? and_uu<1>(ne_uu<1>(p_core_2e_adder_2e_x__src1.slice<31>().val(), p_core_2e_adder_2e_x__src2.slice<31>().val()), eq_uu<1>(p_core_2e_adder_2e_x__sub__result.slice<31>().val(), p_core_2e_adder_2e_x__src2.slice<31>().val())) : and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_adder_2e_x__src1.slice<31>().val()), p_core_2e_adder_2e_x__src2.slice<31>().val()), p_core_2e_adder_2e_x__add__result.slice<31>().val()));
	// cells $procmux$47 $procmux$438 $procmux$439_CMP0 $procmux$440_CMP0 $procmux$441_CMP0 $procmux$442_CMP0 $procmux$443_CMP0 $flatten\core.\data_sel.$33 $flatten\core.\data_sel.$31 $flatten\core.\data_sel.$29 $flatten\core.\data_sel.$27
	p_core_2e_w__result = (p_core_2e_payload____load_24_130.curr ? (eq_uu<1>(p_core_2e_data__sel_2e_w__funct3, value<3>{0x2u}) ? p_core_2e_data__sel__w__load__data : (eq_uu<1>(p_core_2e_data__sel_2e_w__funct3, value<3>{0x5u}) ? pos_u<32>(value<1>{0u}.concat(p_core_2e_data__sel_2e_w__half).val()) : (eq_uu<1>(p_core_2e_data__sel_2e_w__funct3, value<3>{0x1u}) ? pos_s<32>(p_core_2e_data__sel_2e_w__half) : (eq_uu<1>(p_core_2e_data__sel_2e_w__funct3, value<3>{0x4u}) ? pos_u<32>(value<1>{0u}.concat(p_core_2e_data__sel_2e_w__byte).val()) : (logic_not<1>(p_core_2e_data__sel_2e_w__funct3) ? pos_s<32>(p_core_2e_data__sel_2e_w__byte) : value<32>{0u}))))) : p_core_2e_payload____result_24_127);
	// connection
	p_core_2e_payload____load = p_core_2e_payload____load_24_49.curr;
	// connection
	p_core_2e_payload____store = p_core_2e_payload____store_24_50.curr;
	// connection
	p_core_2e_data__sel__x__offset = p_core_2e_adder_2e_x__result.slice<1,0>().val();
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:44
	// cell $procmux$459
	p_core_2e_compare_2e_carry = (p_core_2e_adder_2e_x__sub.curr ? p_core_2e_adder_2e_x__sub__carry : p_core_2e_adder_2e_x__add__carry);
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:441
	// cell $procmux$12
	p_core_2e_compare_2e_op = (p_core_2e_payload____compare ? p_core_2e_payload____funct3_24_48.curr.slice<1,0>().concat(value<1>{0u}).val() : p_core_2e_payload____funct3);
	// cells $procmux$44 $flatten\core.$267 $procmux$42 $flatten\core.\shifter.$16
	p_core_2e_m__result = (p_core_2e_payload____compare_24_101.curr ? pos_u<32>(p_core_2e_payload____condition__met_24_106.curr) : (p_core_2e_payload____shift_24_94.curr ? (p_core_2e_shifter_2e_m__direction.curr ? p_core_2e_shifter_2e_m__result_24_9.curr : p_core_2e_shifter_2e_m__result_24_9.curr.slice<0>().concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<1>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<2>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<3>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<4>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<5>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<6>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<7>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<8>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<9>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<10>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<11>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<12>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<13>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<14>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<15>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<16>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<17>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<18>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<19>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<20>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<21>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<22>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<23>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<24>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<25>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<26>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<27>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<28>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<29>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<30>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<31>()).val()) : p_core_2e_payload____result));
	// cells $flatten\core.\decoder.$586 $flatten\core.\decoder.$584
	p_core_2e_decoder_2e_ecall = and_uu<1>(p_core_2e_decoder_2e_privileged, logic_not<1>(p_core_2e_decoder_2e_funct12));
	// connection
	p_core_2e_loadstore__x__store = p_core_2e_payload____store;
	// connection
	p_core_2e_data__sel_2e_x__funct3 = p_core_2e_payload____funct3;
	// connection
	p_core_2e_data__sel_2e_x__offset = p_core_2e_data__sel__x__offset;
	// connection
	p_core_2e_data__sel__x__store__operand = p_core_2e_payload____store__operand_24_45.curr;
	// cells $procmux$39 $flatten\core.$265 $procmux$37 $procmux$35
	p_core_2e_x__result = (p_core_2e_payload____jump ? add_uu<33>(p_core_2e_payload____pc_24_30, value<3>{0x4u}).slice<31,0>().val() : (p_core_2e_payload____logic_24_52.curr ? p_core_2e_logic_2e_result : (p_core_2e_payload____csr ? p_core_2e_payload____src2 : p_core_2e_adder_2e_x__result)));
	// connection
	p_core_2e_csrf_2e_rp____addr = p_core_2e_csrf__rp____addr.curr;
	// cells $flatten\core.\decoder.$590 $flatten\core.\decoder.$588
	p_core_2e_decoder_2e_ebreak = and_uu<1>(p_core_2e_decoder_2e_privileged, eq_uu<1>(p_core_2e_decoder_2e_funct12, value<1>{0x1u}));
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:163
	// cell $2
	p_imem__wbus____adr = pos_u<32>(p_core_2e_fetch_2e_ibus____adr.curr);
	// connection
	p_core_2e_loadstore_2e_x__load = p_core_2e_payload____load;
	// connection
	p_core_2e_loadstore_2e_x__store = p_core_2e_loadstore__x__store;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$450_CMP0
	i_procmux_24_450__CMP.slice<0>() = eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x1u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$450_CMP1
	i_procmux_24_450__CMP.slice<1>() = eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x5u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$451_CMP0
	i_procmux_24_451__CMP.slice<0>() = logic_not<1>(p_core_2e_data__sel_2e_x__funct3);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$451_CMP1
	i_procmux_24_451__CMP.slice<1>() = eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x4u});
	// connection
	p_core_2e_data__sel_2e_x__store__operand = p_core_2e_data__sel__x__store__operand;
	// connection
	p_core_2e_shifter__x__direction = p_core_2e_payload____direction_24_56.curr;
	// connection
	p_core_2e_csrf__wp____data = p_core_2e_payload____csr__result_24_116.curr;
	// cells $procmux$554 $procmux$552 $procmux$550 $procmux$548 $procmux$546 $procmux$544 $procmux$542 $procmux$540 $procmux$532
	p_core_2e_exception_2e_trap__pe__o = (p_core_2e_exception_2e_trap__pe_2e_i.slice<0>().val() ? value<4>{0u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<1>().val() ? value<4>{0x1u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<2>().val() ? value<4>{0x2u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<3>().val() ? value<4>{0x3u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<4>().val() ? value<4>{0x4u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<5>().val() ? value<4>{0x5u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<6>().val() ? value<4>{0x6u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<7>().val() ? value<4>{0x7u} : (p_core_2e_exception_2e_trap__pe_2e_i.slice<11>().val() ? value<4>{0xbu} : value<4>{0u})))))))));
	// cells $flatten\core.\decoder.$594 $flatten\core.\decoder.$592
	p_core_2e_decoder_2e_mret = and_uu<1>(p_core_2e_decoder_2e_privileged, eq_uu<1>(p_core_2e_decoder_2e_funct12, value<10>{0x302u}));
	// connection
	p_core_2e_loadstore_2e_x__valid = p_core_2e_x_2e_valid_24_4;
	// connection
	p_core_2e_loadstore_2e_x__stall = p_core_2e_x_2e_stall_24_5;
	// connection
	p_core_2e_loadstore_2e_m__valid = p_core_2e_m_2e_valid_24_6;
	// connection
	p_core_2e_fetch_2e_f__valid = p_core_2e_f_2e_valid_24_7;
	// connection
	p_core_2e_shifter_2e_x__direction = p_core_2e_shifter__x__direction;
	// cells $procmux$1699 $procmux$1700_CMP0
	p_core_2e_exception_2e_mstatus____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$616_CMP0
	i_procmux_24_616__CMP.slice<0>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x5u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$616_CMP1
	i_procmux_24_616__CMP.slice<1>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x7u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$617_CMP0
	i_procmux_24_617__CMP.slice<0>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x4u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$617_CMP1
	i_procmux_24_617__CMP.slice<1>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x6u});
	// connection
	p_core_2e_payload____pc_24_69 = p_core_2e_payload____pc_24_70.curr;
	// connection
	p_core_2e_decoder__adder = p_core_2e_decoder_2e_adder;
	// cells $flatten\core.\decoder.$212 $flatten\core.\decoder.$210
	p_core_2e_decoder__adder__sub = and_uu<1>(p_core_2e_decoder_2e_rs2__re, eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u}));
	// cells $procmux$468 $procmux$469_CMP0 $procmux$470_CMP0 $procmux$471_CMP0 $procmux$472_CMP0 $procmux$473_CMP0 $procmux$474_CMP0 $flatten\core.\compare.$16 $flatten\core.\compare.$14 $flatten\core.\compare.$12 $flatten\core.\compare.$10 $flatten\core.\compare.$8 $flatten\core.\compare.$6 $flatten\core.\compare.$4 $flatten\core.\compare.$2
	p_core_2e_compare_2e_condition__met = (eq_uu<1>(p_core_2e_compare_2e_op, value<3>{0x7u}) ? not_u<1>(p_core_2e_compare_2e_carry) : (eq_uu<1>(p_core_2e_compare_2e_op, value<3>{0x6u}) ? and_uu<1>(not_u<1>(p_core_2e_compare_2e_zero), p_core_2e_compare_2e_carry) : (eq_uu<1>(p_core_2e_compare_2e_op, value<3>{0x5u}) ? eq_uu<1>(p_core_2e_compare_2e_negative, p_core_2e_compare_2e_overflow) : (eq_uu<1>(p_core_2e_compare_2e_op, value<3>{0x4u}) ? and_uu<1>(not_u<1>(p_core_2e_compare_2e_zero), ne_uu<1>(p_core_2e_compare_2e_negative, p_core_2e_compare_2e_overflow)) : (eq_uu<1>(p_core_2e_compare_2e_op, value<3>{0x1u}) ? not_u<1>(p_core_2e_compare_2e_zero) : (logic_not<1>(p_core_2e_compare_2e_op) ? p_core_2e_compare__zero : value<1>{0u}))))));
	// cells $flatten\core.\decoder.$496 $flatten\core.\decoder.$494 $flatten\core.\decoder.$492
	p_core_2e_decoder_2e_fence__i = and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<2>{0x3u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}));
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:111
	// cell $procmux$853
	p_core_2e_fetch_2e_f__instruction = (p_core_2e_fetch_2e_f__fetch__error.curr ? value<32>{0x13u} : p_core_2e_fetch_2e_ibus__rdata.curr);
	// connection
	p_core_2e_shifter_2e_x__src1 = p_core_2e_payload____src1;
	// connection
	p_core_2e_exception_2e_m__stall = p_core_2e_m_2e_stall_24_8;
	// cells $procmux$1369 $procmux$1370_CMP0
	p_core_2e_exception_2e_mepc____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1303 $procmux$1304_CMP0
	p_core_2e_exception_2e_mcause____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1235 $procmux$1236_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<0>().val() : value<1>{0u});
	// cells $procmux$1233 $procmux$1234_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<1>().val() : value<1>{0u});
	// cells $procmux$1231 $procmux$1232_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1229 $procmux$1230_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1227 $procmux$1228_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1225 $procmux$1226_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1223 $procmux$1224_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1221 $procmux$1222_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1219 $procmux$1220_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1217 $procmux$1218_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1215 $procmux$1216_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1213 $procmux$1214_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1211 $procmux$1212_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1209 $procmux$1210_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1207 $procmux$1208_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1205 $procmux$1206_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1203 $procmux$1204_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1201 $procmux$1202_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1199 $procmux$1200_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1197 $procmux$1198_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1195 $procmux$1196_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1193 $procmux$1194_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1191 $procmux$1192_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1189 $procmux$1190_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1187 $procmux$1188_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1185 $procmux$1186_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1183 $procmux$1184_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<26>().val() : value<1>{0u});
	// cells $procmux$1181 $procmux$1182_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<27>().val() : value<1>{0u});
	// cells $procmux$1179 $procmux$1180_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<28>().val() : value<1>{0u});
	// cells $procmux$1177 $procmux$1178_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<29>().val() : value<1>{0u});
	// cells $procmux$1175 $procmux$1176_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$1173 $procmux$1174_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u});
	// connection
	p_core_2e_exception__m__pc = p_core_2e_payload____pc_24_69;
	// connection
	p_core_2e_decoder__compare = p_core_2e_decoder_2e_compare;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:30
	// cell $procmux$454_CMP0
	i_procmux_24_454__CMP.slice<0>() = eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x1u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:30
	// cell $procmux$454_CMP1
	i_procmux_24_454__CMP.slice<1>() = eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x5u});
	// connection
	p_core_2e_rst = p_rst;
	// connection
	p_core_2e_pc__sel_2e_a__pc.slice<1,0>() = value<2>{0u};
	// cells $procmux$419 $flatten\core.\pc_sel.$18 $procmux$428 $procmux$426 $procmux$424 $flatten\core.\pc_sel.$12 $flatten\core.\pc_sel.$10 $procmux$422 $flatten\core.\pc_sel.$16 $flatten\core.\pc_sel.$14 $procmux$436 $procmux$434 $procmux$432 $flatten\core.\pc_sel.$4 $flatten\core.\pc_sel.$2 $procmux$430 $flatten\core.\pc_sel.$8 $flatten\core.\pc_sel.$6 $procmux$417 $flatten\core.\pc_sel.$20 $procmux$415 $flatten\core.\pc_sel.$22 $flatten\core.\pc_sel.$25
	p_core_2e_pc__sel_2e_a__pc.slice<31,2>() = (and_uu<1>((p_core_2e_pc__sel_2e_m__exception ? value<1>{0x1u} : (p_core_2e_pc__sel_2e_m__mret ? value<1>{0x1u} : (and_uu<1>(p_core_2e_pc__sel_2e_m__branch__predict__taken, not_u<1>(p_core_2e_pc__sel_2e_m__branch__taken)) ? value<1>{0x1u} : (and_uu<1>(not_u<1>(p_core_2e_pc__sel_2e_m__branch__predict__taken), p_core_2e_pc__sel_2e_m__branch__taken) ? value<1>{0x1u} : value<1>{0u})))), p_core_2e_m_2e_valid_24_6) ? (p_core_2e_pc__sel_2e_m__exception ? p_core_2e_exception_2e_mtvec____r____base.curr : (p_core_2e_pc__sel_2e_m__mret ? p_core_2e_exception_2e_mepc____r____base.curr : (and_uu<1>(p_core_2e_pc__sel_2e_m__branch__predict__taken, not_u<1>(p_core_2e_pc__sel_2e_m__branch__taken)) ? p_core_2e_payload____pc_24_30.slice<31,2>().val() : (and_uu<1>(not_u<1>(p_core_2e_pc__sel_2e_m__branch__predict__taken), p_core_2e_pc__sel_2e_m__branch__taken) ? p_core_2e_payload____branch__target_24_107.slice<31,2>().val() : value<30>{0u})))) : (and_uu<1>(p_core_2e_a__payload____fence__i, p_core_2e_x_2e_valid_24_4) ? p_core_2e_payload____pc_24_25.slice<31,2>().val() : (and_uu<1>(p_core_2e_predict_2e_d__branch__taken, p_core_2e_d_2e_valid_24_4) ? p_core_2e_predict_2e_d__branch__target.slice<31,2>().val() : add_uu<31>(p_core_2e_payload____pc.slice<31,2>().val(), value<1>{0x1u}).slice<29,0>().val())));
	// cells $procmux$809 $procmux$1691 $procmux$1692_CMP0
	i_procmux_24_809__Y = (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____mie.curr);
	// connection
	p_core_2e_exception_2e_m__valid = p_core_2e_m_2e_valid_24_6;
	// cells $procmux$1363 $procmux$1364_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1361 $procmux$1362_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1359 $procmux$1360_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1357 $procmux$1358_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1355 $procmux$1356_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1353 $procmux$1354_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1351 $procmux$1352_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1349 $procmux$1350_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1347 $procmux$1348_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1345 $procmux$1346_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1343 $procmux$1344_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1341 $procmux$1342_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1339 $procmux$1340_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1337 $procmux$1338_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1335 $procmux$1336_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1333 $procmux$1334_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1331 $procmux$1332_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1329 $procmux$1330_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1327 $procmux$1328_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1325 $procmux$1326_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1323 $procmux$1324_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1321 $procmux$1322_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1319 $procmux$1320_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1317 $procmux$1318_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1315 $procmux$1316_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<26>().val() : value<1>{0u});
	// cells $procmux$1313 $procmux$1314_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<27>().val() : value<1>{0u});
	// cells $procmux$1311 $procmux$1312_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<26>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<28>().val() : value<1>{0u});
	// cells $procmux$1309 $procmux$1310_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<27>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<29>().val() : value<1>{0u});
	// cells $procmux$1307 $procmux$1308_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<28>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$1305 $procmux$1306_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<29>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u});
	// cells $procmux$1299 $procmux$1300_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<0>().val() : value<1>{0u});
	// cells $procmux$1297 $procmux$1298_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<1>().val() : value<1>{0u});
	// cells $procmux$1295 $procmux$1296_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1293 $procmux$1294_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1291 $procmux$1292_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1289 $procmux$1290_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1287 $procmux$1288_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1285 $procmux$1286_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1283 $procmux$1284_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1281 $procmux$1282_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1279 $procmux$1280_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1277 $procmux$1278_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1275 $procmux$1276_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1273 $procmux$1274_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1271 $procmux$1272_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1269 $procmux$1270_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1267 $procmux$1268_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1265 $procmux$1266_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1263 $procmux$1264_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1261 $procmux$1262_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1259 $procmux$1260_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1257 $procmux$1258_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1255 $procmux$1256_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1253 $procmux$1254_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1251 $procmux$1252_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1249 $procmux$1250_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1247 $procmux$1248_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<26>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<26>().val() : value<1>{0u});
	// cells $procmux$1245 $procmux$1246_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<27>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<27>().val() : value<1>{0u});
	// cells $procmux$1243 $procmux$1244_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<28>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<28>().val() : value<1>{0u});
	// cells $procmux$1241 $procmux$1242_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<29>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<29>().val() : value<1>{0u});
	// cells $procmux$1239 $procmux$1240_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<30>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$612 $procmux$1237 $procmux$1238_CMP0
	i_procmux_24_612__Y = ((eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____en : value<1>{0u}) ? p_core_2e_csrf_2e_mtval____w____value : p_core_2e_exception_2e_mtval____r____value.curr);
	// connection
	p_core_2e_decoder__branch = p_core_2e_decoder_2e_branch;
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:376
	// cell $procmux$2
	p_core_2e_gprf__rp1____addr = (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_decoder_2e_rs1 : p_core_2e_fetch_2e_f__instruction.slice<19,15>().val());
	// connection
	p_core_2e_gprf__wp____addr = p_core_2e_payload____rd_24_121;
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:381
	// cell $procmux$5
	p_core_2e_gprf__rp2____addr = (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_decoder_2e_rs2 : p_core_2e_fetch_2e_f__instruction.slice<24,20>().val());
	// connection
	i_flatten_5c_core_2e__5c_a_2e__24_43 = i_flatten_5c_core_2e__5c_d_2e__24_36;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ast.py:280
	// cell $flatten\imem.$14
	p_imem_2e_raddr2 = pos_u<32>(p_imem__wbus____adr.slice<31,2>().val()).slice<2,0>().val();
	// cells $procmux$444 $procmux$445_CMP0 $procmux$446_CMP0 $procmux$447_CMP0 $flatten\core.\data_sel.$17 $flatten\core.\data_sel.$15 $flatten\core.\data_sel.$12 $flatten\core.\data_sel.$10
	p_core_2e_loadstore__x__store__data = (eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x2u}) ? p_core_2e_data__sel__x__store__operand : (eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x1u}) ? sshl_uu<79>(p_core_2e_data__sel_2e_x__store__operand.slice<15,0>().val(), mul_uu<6>(p_core_2e_data__sel_2e_x__offset.slice<1>().val(), value<5>{0x10u})).slice<31,0>().val() : (logic_not<1>(p_core_2e_data__sel_2e_x__funct3) ? sshl_uu<71>(p_core_2e_data__sel_2e_x__store__operand.slice<7,0>().val(), mul_uu<6>(p_core_2e_data__sel_2e_x__offset, value<4>{0x8u})).slice<31,0>().val() : value<32>{0u})));
	// connection
	p_core_2e_fetch__a__pc = p_core_2e_pc__sel_2e_a__pc;
	// cells $flatten\core.\shifter.$6 $flatten\core.\shifter.$5
	p_core_2e_shifter_2e_x__filler = (and_uu<1>(p_core_2e_shifter_2e_x__direction, p_core_2e_payload____sext_24_57.curr) ? p_core_2e_shifter_2e_x__src1.slice<31>().val() : value<1>{0u});
	// cells $flatten\core.\exception.$4 $flatten\core.\exception.$2
	i_flatten_5c_core_2e__5c_exception_2e__24_3 = and_uu<1>(p_core_2e_exception_2e_m__valid, not_u<1>(p_core_2e_exception_2e_m__stall));
	// cells $procmux$788 $procmux$1683 $procmux$1684_CMP0
	i_procmux_24_788__Y = (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____mpie.curr);
	// cells $procmux$1633 $procmux$1634_CMP0
	p_core_2e_exception_2e_misa____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1567 $procmux$1568_CMP0
	p_core_2e_exception_2e_mie____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1501 $procmux$1502_CMP0
	p_core_2e_exception_2e_mtvec____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:54
	// cell $procmux$652
	i_procmux_24_652__Y = (p_core_2e_exception_2e_mepc____we ? p_core_2e_csrf_2e_mepc____w____base : p_core_2e_exception_2e_mepc____r____base.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:54
	// cell $procmux$641
	i_procmux_24_641__Y = (p_core_2e_exception_2e_mcause____we ? p_core_2e_csrf_2e_mcause____w____ecode : p_core_2e_exception_2e_mcause____r____ecode.curr);
	// cells $flatten\core.\exception.$12 $flatten\core.\exception.$10
	i_flatten_5c_core_2e__5c_exception_2e__24_11 = and_uu<1>(p_core_2e_exception_2e_m__valid, not_u<1>(p_core_2e_exception_2e_m__stall));
	// cells $procmux$630 $procmux$1301 $procmux$1302_CMP0
	i_procmux_24_630__Y = (p_core_2e_exception_2e_mcause____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u}) : p_core_2e_exception_2e_mcause____r____interrupt.curr);
	// cells $procmux$1171 $procmux$1172_CMP0
	p_core_2e_exception_2e_mip____we = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$80 $procmux$1721 $procmux$1722_CMP0 $procmux$1723_CMP0 $procmux$1724_CMP0 $procmux$1725_CMP0 $procmux$1726_CMP0 $procmux$1727_CMP0 $procmux$1728_CMP0 $procmux$1729_CMP0 $procmux$1730_CMP0 $procmux$1731_CMP0 $procmux$1732_CMP0 $procmux$78 $procmux$76 $flatten\core.$315 $procmux$74 $flatten\core.$317 $procmux$72 $flatten\core.$319 $procmux$70 $flatten\core.$321 $procmux$24 $flatten\core.$222 $flatten\core.$220 $flatten\core.$224 $procmux$973 $flatten\core.\gprf.\mem.$12
	p_core_2e_d__src2 = (p_core_2e_decoder__csr ? (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x360u}) ? p_core_2e_exception_2e_irq__pending____r____value.curr : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x330u}) ? p_core_2e_exception_2e_irq__mask____r____value.curr : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.concat(p_core_2e_exception_2e_mip____r____meip.curr).concat(p_core_2e_exception_2e_mip____r____zero2.curr).concat(p_core_2e_exception_2e_mip____r____seip.curr).concat(p_core_2e_exception_2e_mip____r____ueip.curr).concat(p_core_2e_exception_2e_mip____r____mtip.curr).concat(p_core_2e_exception_2e_mip____r____zero1.curr).concat(p_core_2e_exception_2e_mip____r____stip.curr).concat(p_core_2e_exception_2e_mip____r____utip.curr).concat(p_core_2e_exception_2e_mip____r____msip.curr).concat(p_core_2e_exception_2e_mip____r____zero0.curr).concat(p_core_2e_exception_2e_mip____r____ssip.curr).concat(p_core_2e_exception_2e_mip____r____usip.curr).val() : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x343u}) ? p_core_2e_exception_2e_mtval____r____value.curr : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x342u}) ? p_core_2e_exception_2e_mcause____r____interrupt.curr.concat(p_core_2e_exception_2e_mcause____r____ecode.curr).val() : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x341u}) ? p_core_2e_exception_2e_mepc____r____base.curr.concat(p_core_2e_exception_2e_mepc____r____zero.curr).val() : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x340u}) ? p_core_2e_exception_2e_mscratch____r____value.curr : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x305u}) ? p_core_2e_exception_2e_mtvec____r____base.curr.concat(p_core_2e_exception_2e_mtvec____r____mode.curr).val() : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.concat(p_core_2e_exception_2e_mie____r____meie.curr).concat(p_core_2e_exception_2e_mie____r____zero2.curr).concat(p_core_2e_exception_2e_mie____r____seie.curr).concat(p_core_2e_exception_2e_mie____r____ueie.curr).concat(p_core_2e_exception_2e_mie____r____mtie.curr).concat(p_core_2e_exception_2e_mie____r____zero1.curr).concat(p_core_2e_exception_2e_mie____r____stie.curr).concat(p_core_2e_exception_2e_mie____r____utie.curr).concat(p_core_2e_exception_2e_mie____r____msie.curr).concat(p_core_2e_exception_2e_mie____r____zero0.curr).concat(p_core_2e_exception_2e_mie____r____ssie.curr).concat(p_core_2e_exception_2e_mie____r____usie.curr).val() : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____mxl.curr.concat(p_core_2e_exception_2e_misa____r____zero.curr).concat(p_core_2e_exception_2e_misa____r____extensions.curr).val() : (eq_uu<1>(p_core_2e_csrf_2e_rp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sd.curr.concat(p_core_2e_exception_2e_mstatus____r____zero3.curr).concat(p_core_2e_exception_2e_mstatus____r____tsr.curr).concat(p_core_2e_exception_2e_mstatus____r____tw.curr).concat(p_core_2e_exception_2e_mstatus____r____tvm.curr).concat(p_core_2e_exception_2e_mstatus____r____mxr.curr).concat(p_core_2e_exception_2e_mstatus____r____sum.curr).concat(p_core_2e_exception_2e_mstatus____r____mprv.curr).concat(p_core_2e_exception_2e_mstatus____r____xs.curr).concat(p_core_2e_exception_2e_mstatus____r____fs.curr).concat(p_core_2e_exception_2e_mstatus____r____mpp.curr).concat(p_core_2e_exception_2e_mstatus____r____zero2.curr).concat(p_core_2e_exception_2e_mstatus____r____spp.curr).concat(p_core_2e_exception_2e_mstatus____r____mpie.curr).concat(p_core_2e_exception_2e_mstatus____r____zero1.curr).concat(p_core_2e_exception_2e_mstatus____r____spie.curr).concat(p_core_2e_exception_2e_mstatus____r____upie.curr).concat(p_core_2e_exception_2e_mstatus____r____mie.curr).concat(p_core_2e_exception_2e_mstatus____r____zero0.curr).concat(p_core_2e_exception_2e_mstatus____r____sie.curr).concat(p_core_2e_exception_2e_mstatus____r____uie.curr).val() : value<32>{0u}))))))))))) : (i_flatten_5c_core_2e__5c_decoder_2e__24_49 ? (logic_not<1>(p_core_2e_decoder__rs2) ? value<32>{0u} : (and_uu<1>(p_core_2e_d__raw__rs2__x, p_core_2e_x__valid) ? p_core_2e_x__result : (and_uu<1>(p_core_2e_d__raw__rs2__m, p_core_2e_m__valid) ? p_core_2e_m__result : (and_uu<1>((and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_121), p_core_2e_payload____rd__we_24_123) ? eq_uu<1>(p_core_2e_payload____rd_24_121, p_core_2e_decoder__rs2) : value<1>{0u}), p_core_2e_w__valid) ? p_core_2e_w__result : (and_uu<1>(p_core_2e_gprf_2e_mem_2e_collision.curr.slice<1>().val(), p_core_2e_gprf_2e_mem_2e_fwd__wp__en.curr) ? p_core_2e_gprf_2e_mem_2e_fwd__wp__data.curr : p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4.curr))))) : p_core_2e_decoder_2e_immediate));
	// connection
	p_imem_2e_rst = p_rst;
	// connection
	p_dmem_2e_rst = p_rst;
	// connection
	p_core_2e_gprf_2e_mem_2e_rst = p_core_2e_rst;
	// connection
	p_core_2e_loadstore_2e_rst = p_core_2e_rst;
	// connection
	p_core_2e_fetch_2e_rst = p_core_2e_rst;
	// connection
	p_core_2e_shifter_2e_rst = p_core_2e_rst;
	// connection
	p_core_2e_exception_2e_rst = p_core_2e_rst;
	// cells $procmux$1677 $procmux$1678_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero2.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero2.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1657 $procmux$1658_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero2.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero2.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1675 $procmux$1676_CMP0
	p_core_2e_csrf_2e_mstatus____w____mpp.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1655 $procmux$1656_CMP0
	p_core_2e_csrf_2e_mstatus____w____mpp.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1673 $procmux$1674_CMP0
	p_core_2e_csrf_2e_mstatus____w____fs.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____fs.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1653 $procmux$1654_CMP0
	p_core_2e_csrf_2e_mstatus____w____fs.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____fs.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1659 $procmux$1660_CMP0
	p_core_2e_csrf_2e_mstatus____w____xs.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____xs.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1651 $procmux$1652_CMP0
	p_core_2e_csrf_2e_mstatus____w____xs.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____xs.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1649 $procmux$1650_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1647 $procmux$1648_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1645 $procmux$1646_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1643 $procmux$1644_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1641 $procmux$1642_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1639 $procmux$1640_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1637 $procmux$1638_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1635 $procmux$1636_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1629 $procmux$1630_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1627 $procmux$1628_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<0>().val() : value<1>{0u});
	// cells $procmux$1625 $procmux$1626_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<1>().val() : value<1>{0u});
	// cells $procmux$1623 $procmux$1624_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1621 $procmux$1622_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1619 $procmux$1620_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1617 $procmux$1618_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1615 $procmux$1616_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1613 $procmux$1614_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1611 $procmux$1612_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1609 $procmux$1610_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1607 $procmux$1608_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1605 $procmux$1606_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1603 $procmux$1604_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1601 $procmux$1602_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1599 $procmux$1600_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1597 $procmux$1598_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1595 $procmux$1596_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1593 $procmux$1594_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1591 $procmux$1592_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1589 $procmux$1590_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1587 $procmux$1588_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1585 $procmux$1586_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1583 $procmux$1584_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1581 $procmux$1582_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1579 $procmux$1580_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1631 $procmux$1632_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1577 $procmux$1578_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1575 $procmux$1576_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1573 $procmux$1574_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1571 $procmux$1572_CMP0
	p_core_2e_csrf_2e_misa____w____mxl.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$1569 $procmux$1570_CMP0
	p_core_2e_csrf_2e_misa____w____mxl.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u});
	// cells $procmux$1541 $procmux$1542_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1539 $procmux$1540_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1537 $procmux$1538_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1535 $procmux$1536_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1533 $procmux$1534_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1531 $procmux$1532_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1529 $procmux$1530_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1527 $procmux$1528_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1525 $procmux$1526_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1523 $procmux$1524_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1521 $procmux$1522_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1519 $procmux$1520_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1517 $procmux$1518_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1515 $procmux$1516_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1513 $procmux$1514_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1511 $procmux$1512_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1509 $procmux$1510_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1507 $procmux$1508_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1505 $procmux$1506_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1503 $procmux$1504_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1499 $procmux$1500_CMP0
	p_core_2e_csrf_2e_mtvec____w____mode.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<1>().val() : value<1>{0u});
	// cells $procmux$1497 $procmux$1498_CMP0
	p_core_2e_csrf_2e_mtvec____w____mode.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<0>().val() : value<1>{0u});
	// cells $procmux$1495 $procmux$1496_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1493 $procmux$1494_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1491 $procmux$1492_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1489 $procmux$1490_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1487 $procmux$1488_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1485 $procmux$1486_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1483 $procmux$1484_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1481 $procmux$1482_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1479 $procmux$1480_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1477 $procmux$1478_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1475 $procmux$1476_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1473 $procmux$1474_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1471 $procmux$1472_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1469 $procmux$1470_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1467 $procmux$1468_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1465 $procmux$1466_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1463 $procmux$1464_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1461 $procmux$1462_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1459 $procmux$1460_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1457 $procmux$1458_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1455 $procmux$1456_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1453 $procmux$1454_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1451 $procmux$1452_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1449 $procmux$1450_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1447 $procmux$1448_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<26>().val() : value<1>{0u});
	// cells $procmux$1445 $procmux$1446_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<27>().val() : value<1>{0u});
	// cells $procmux$1443 $procmux$1444_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<26>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<28>().val() : value<1>{0u});
	// cells $procmux$1441 $procmux$1442_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<27>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<29>().val() : value<1>{0u});
	// cells $procmux$1439 $procmux$1440_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<28>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$1437 $procmux$1438_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<29>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u});
	// cells $procmux$1433 $procmux$1434_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<0>().val() : value<1>{0u});
	// cells $procmux$1431 $procmux$1432_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<1>().val() : value<1>{0u});
	// cells $procmux$1429 $procmux$1430_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1427 $procmux$1428_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1425 $procmux$1426_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1423 $procmux$1424_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1421 $procmux$1422_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1419 $procmux$1420_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1417 $procmux$1418_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1415 $procmux$1416_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1413 $procmux$1414_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1411 $procmux$1412_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1409 $procmux$1410_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1407 $procmux$1408_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1405 $procmux$1406_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1403 $procmux$1404_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1401 $procmux$1402_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1399 $procmux$1400_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1397 $procmux$1398_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1395 $procmux$1396_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1393 $procmux$1394_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1391 $procmux$1392_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1389 $procmux$1390_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1387 $procmux$1388_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1385 $procmux$1386_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1383 $procmux$1384_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1381 $procmux$1382_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<26>().val() : value<1>{0u});
	// cells $procmux$1379 $procmux$1380_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<27>().val() : value<1>{0u});
	// cells $procmux$1377 $procmux$1378_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<28>().val() : value<1>{0u});
	// cells $procmux$1375 $procmux$1376_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<29>().val() : value<1>{0u});
	// cells $procmux$1373 $procmux$1374_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$1371 $procmux$1372_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u});
	// cells $procmux$1367 $procmux$1368_CMP0
	p_core_2e_csrf_2e_mepc____w____zero.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_exception_2e_mepc____r____zero.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1365 $procmux$1366_CMP0
	p_core_2e_csrf_2e_mepc____w____zero.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x341u}) ? p_core_2e_exception_2e_mepc____r____zero.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1145 $procmux$1146_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1143 $procmux$1144_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1141 $procmux$1142_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1139 $procmux$1140_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1137 $procmux$1138_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1135 $procmux$1136_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1133 $procmux$1134_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1131 $procmux$1132_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1129 $procmux$1130_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1127 $procmux$1128_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1125 $procmux$1126_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1123 $procmux$1124_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1121 $procmux$1122_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1119 $procmux$1120_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1117 $procmux$1118_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1115 $procmux$1116_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1113 $procmux$1114_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1111 $procmux$1112_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1109 $procmux$1110_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1107 $procmux$1108_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1103 $procmux$1104_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<0>().val() : value<1>{0u});
	// cells $procmux$1101 $procmux$1102_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<1>().val() : value<1>{0u});
	// cells $procmux$1099 $procmux$1100_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<2>().val() : value<1>{0u});
	// cells $procmux$1097 $procmux$1098_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u});
	// cells $procmux$1095 $procmux$1096_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<4>().val() : value<1>{0u});
	// cells $procmux$1093 $procmux$1094_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<5>().val() : value<1>{0u});
	// cells $procmux$1091 $procmux$1092_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<6>().val() : value<1>{0u});
	// cells $procmux$1089 $procmux$1090_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u});
	// cells $procmux$1087 $procmux$1088_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<8>().val() : value<1>{0u});
	// cells $procmux$1085 $procmux$1086_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<9>().val() : value<1>{0u});
	// cells $procmux$1083 $procmux$1084_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<10>().val() : value<1>{0u});
	// cells $procmux$1081 $procmux$1082_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u});
	// cells $procmux$1079 $procmux$1080_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<12>().val() : value<1>{0u});
	// cells $procmux$1077 $procmux$1078_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<13>().val() : value<1>{0u});
	// cells $procmux$1075 $procmux$1076_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<14>().val() : value<1>{0u});
	// cells $procmux$1073 $procmux$1074_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<15>().val() : value<1>{0u});
	// cells $procmux$1071 $procmux$1072_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<16>().val() : value<1>{0u});
	// cells $procmux$1069 $procmux$1070_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<17>().val() : value<1>{0u});
	// cells $procmux$1067 $procmux$1068_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<18>().val() : value<1>{0u});
	// cells $procmux$1065 $procmux$1066_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<19>().val() : value<1>{0u});
	// cells $procmux$1063 $procmux$1064_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<20>().val() : value<1>{0u});
	// cells $procmux$1061 $procmux$1062_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<21>().val() : value<1>{0u});
	// cells $procmux$1059 $procmux$1060_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<22>().val() : value<1>{0u});
	// cells $procmux$1057 $procmux$1058_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<23>().val() : value<1>{0u});
	// cells $procmux$1055 $procmux$1056_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<24>().val() : value<1>{0u});
	// cells $procmux$1053 $procmux$1054_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<25>().val() : value<1>{0u});
	// cells $procmux$1051 $procmux$1052_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<26>().val() : value<1>{0u});
	// cells $procmux$1049 $procmux$1050_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<27>().val() : value<1>{0u});
	// cells $procmux$1047 $procmux$1048_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<28>().val() : value<1>{0u});
	// cells $procmux$1045 $procmux$1046_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<29>().val() : value<1>{0u});
	// cells $procmux$1043 $procmux$1044_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<30>().val() : value<1>{0u});
	// cells $procmux$1041 $procmux$1042_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____data.slice<31>().val() : value<1>{0u});
	// connection
	p_core_2e_gprf_2e_mem_2e_wp____addr = p_core_2e_gprf__wp____addr;
	// connection
	p_core_2e_clk = p_clk;
	// connection
	p_core_2e_gprf__wp____data = p_core_2e_w__result;
	// cells $procmux$54 $flatten\core.$299 $flatten\core.$297 $flatten\core.$295 $flatten\core.$301 $flatten\core.\w.$5 $flatten\core.\w.$3 $flatten\core.\m.$21
	p_core_2e_gprf__wp____en = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_121), not_u<1>(p_core_2e_m__payload____exception.curr)) ? and_uu<1>(p_core_2e_payload____rd__we_24_123, and_uu<1>(p_core_2e_w__valid, not_u<1>(and_uu<1>(p_core_2e_m__payload____exception.curr, p_core_2e_m_2e_valid_24_1.curr)))) : value<1>{0u});
	// connection
	p_core_2e_gprf_2e_mem_2e___mem__w__en = p_core_2e_gprf__wp____en;
	// connection
	p_core_2e_gprf_2e_mem_2e_clk = p_core_2e_clk;
	// connection
	p_imem_2e_clk = p_clk;
	// connection
	p_dmem_2e_clk = p_clk;
	// connection
	p_core_2e_loadstore_2e_clk = p_core_2e_clk;
	// connection
	p_core_2e_fetch_2e_clk = p_core_2e_clk;
	// connection
	p_core_2e_shifter_2e_clk = p_core_2e_clk;
	// connection
	p_core_2e_exception_2e_clk = p_core_2e_clk;
	// cells $procmux$967 $flatten\core.\gprf.\mem.$6
	p_core_2e_gprf_2e_mem_2e_collision_24_next.slice<0>() = (p_core_2e_gprf_2e_mem_2e_rst ? value<1>{0u} : eq_uu<1>(p_core_2e_gprf_2e_mem_2e_wp____addr, p_core_2e_gprf__rp1____addr));
	// cells $procmux$965 $flatten\core.\gprf.\mem.$8
	p_core_2e_gprf_2e_mem_2e_collision_24_next.slice<1>() = (p_core_2e_gprf_2e_mem_2e_rst ? value<1>{0u} : eq_uu<1>(p_core_2e_gprf_2e_mem_2e_wp____addr, p_core_2e_gprf__rp2____addr));
	// \hdlname: core gprf mem mem_wp
	// memory \core.gprf.mem._mem write port 0
	if (posedge_p_clk) {
		auto tmp_0 = memory_index(p_core_2e_gprf__wp____addr, 0, 32);
		CXXRTL_ASSERT(tmp_0.valid && "out of bounds write");
		if (tmp_0.valid) {
			memory_p_core_2e_gprf_2e_mem_2e___mem.update(tmp_0.index, p_core_2e_gprf__wp____data, p_core_2e_gprf_2e_mem_2e___mem__w__en.repeat<32>().val(), 0);
		}
	}
	// \hdlname: core gprf mem mem_rp1
	// memory \core.gprf.mem._mem read port 1
	if (posedge_p_clk) {
		auto tmp_1 = memory_index(p_core_2e_gprf__rp1____addr, 0, 32);
		CXXRTL_ASSERT(tmp_1.valid && "out of bounds read");
		if(tmp_1.valid) {
			value<32> tmp_2 = memory_p_core_2e_gprf_2e_mem_2e___mem[tmp_1.index];
			p_core_2e_gprf_2e_mem_2e___mem__r__data.next = tmp_2;
		} else {
			p_core_2e_gprf_2e_mem_2e___mem__r__data.next = value<32> {};
		}
	}
	// \hdlname: core gprf mem mem_rp2
	// memory \core.gprf.mem._mem read port 0
	if (posedge_p_clk) {
		auto tmp_3 = memory_index(p_core_2e_gprf__rp2____addr, 0, 32);
		CXXRTL_ASSERT(tmp_3.valid && "out of bounds read");
		if(tmp_3.valid) {
			value<32> tmp_4 = memory_p_core_2e_gprf_2e_mem_2e___mem[tmp_3.index];
			p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4.next = tmp_4;
		} else {
			p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4.next = value<32> {};
		}
	}
	// cells $9 $procmux$1765
	if (posedge_p_clk) {
		p_dummy.next = (p_rst ? value<1>{0u} : value<1>{0x1u});
	}
	// cells $flatten\imem.$26 $procmux$1763 $procmux$1759 $procmux$1760_CMP0 $procmux$1761_CMP0 $procmux$1762_CMP0
	if (posedge_p_clk) {
		p_imem_2e_wbus____dat__r.next = (p_imem_2e_rst ? value<32>{0u} : (eq_uu<1>(p_imem_2e_raddr2, value<3>{0x2u}) ? value<32>{0x13u} : (eq_uu<1>(p_imem_2e_raddr2, value<3>{0x1u}) ? value<32>{0x13u} : (logic_not<1>(p_imem_2e_raddr2) ? value<32>{0x13u} : value<32>{0u}))));
	}
	// cells $flatten\imem.$25 $procmux$1751 $flatten\imem.$6 $flatten\imem.$4 $flatten\imem.$2
	if (posedge_p_clk) {
		p_imem_2e_wbus____ack.next = (p_imem_2e_rst ? value<1>{0u} : and_uu<1>(and_uu<1>(p_core_2e_fetch_2e_ibus____cyc.curr, p_core_2e_fetch_2e_ibus____stb.curr), not_u<1>(p_imem_2e_wbus____ack.curr)));
	}
	// cells $flatten\imem.$24 $procmux$1749
	if (posedge_p_clk) {
		p_imem_2e_adr__r.next = (p_imem_2e_rst ? value<32>{0u} : p_imem__wbus____adr);
	}
	// cell $flatten\dmem.$26
	if (posedge_p_clk) {
		p_dmem_2e_wbus____dat__r.next = value<32>{0u};
	}
	// cells $flatten\dmem.$25 $procmux$1737 $flatten\dmem.$6 $flatten\dmem.$4 $flatten\dmem.$2
	if (posedge_p_clk) {
		p_dmem_2e_wbus____ack.next = (p_dmem_2e_rst ? value<1>{0u} : and_uu<1>(and_uu<1>(p_core_2e_loadstore_2e_dbus____cyc.curr, p_core_2e_loadstore_2e_dbus____stb.curr), not_u<1>(p_dmem_2e_wbus____ack.curr)));
	}
	// cells $flatten\dmem.$24 $procmux$1735 $4
	if (posedge_p_clk) {
		p_dmem_2e_adr__r.next = (p_dmem_2e_rst ? value<32>{0u} : pos_u<32>(p_core_2e_loadstore_2e_dbus____adr.curr));
	}
	// cells $flatten\core.\gprf.\mem.$14 $procmux$963
	if (posedge_p_clk) {
		p_core_2e_gprf_2e_mem_2e_fwd__wp__data.next = (p_core_2e_gprf_2e_mem_2e_rst ? value<32>{0u} : p_core_2e_gprf__wp____data);
	}
	// cells $flatten\core.\gprf.\mem.$13 $procmux$961
	if (posedge_p_clk) {
		p_core_2e_gprf_2e_mem_2e_fwd__wp__en.next = (p_core_2e_gprf_2e_mem_2e_rst ? value<1>{0u} : p_core_2e_gprf__wp____en);
	}
	// cells $flatten\core.\loadstore.$91 $procmux$959 $procmux$957 $procmux$955 $flatten\core.\loadstore.$14 $flatten\core.\loadstore.$12 $procmux$953 $flatten\core.\loadstore.$8 $flatten\core.\loadstore.$6 $flatten\core.\loadstore.$4 $flatten\core.\loadstore.$2
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_dbus____cyc.next = (p_core_2e_loadstore_2e_rst ? value<1>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? (or_uu<1>(p_dmem_2e_wbus____ack.curr, not_u<1>(p_core_2e_loadstore_2e_m__valid)) ? value<1>{0u} : p_core_2e_loadstore_2e_dbus____cyc.curr) : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_loadstore_2e_x__load, p_core_2e_loadstore_2e_x__store), p_core_2e_loadstore_2e_x__valid), not_u<1>(p_core_2e_loadstore_2e_x__stall)) ? value<1>{0x1u} : p_core_2e_loadstore_2e_dbus____cyc.curr)));
	}
	// cells $flatten\core.\loadstore.$92 $procmux$951 $procmux$949 $procmux$947 $flatten\core.\loadstore.$28 $flatten\core.\loadstore.$26 $procmux$945 $flatten\core.\loadstore.$22 $flatten\core.\loadstore.$20 $flatten\core.\loadstore.$18 $flatten\core.\loadstore.$16
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_dbus____stb.next = (p_core_2e_loadstore_2e_rst ? value<1>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? (or_uu<1>(p_dmem_2e_wbus____ack.curr, not_u<1>(p_core_2e_loadstore_2e_m__valid)) ? value<1>{0u} : p_core_2e_loadstore_2e_dbus____stb.curr) : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_loadstore_2e_x__load, p_core_2e_loadstore_2e_x__store), p_core_2e_loadstore_2e_x__valid), not_u<1>(p_core_2e_loadstore_2e_x__stall)) ? value<1>{0x1u} : p_core_2e_loadstore_2e_dbus____stb.curr)));
	}
	// cells $flatten\core.\loadstore.$93 $procmux$943 $procmux$941 $procmux$939 $flatten\core.\loadstore.$42 $flatten\core.\loadstore.$40
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_m__load__data.next = (p_core_2e_loadstore_2e_rst ? value<32>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? (or_uu<1>(p_dmem_2e_wbus____ack.curr, not_u<1>(p_core_2e_loadstore_2e_m__valid)) ? p_dmem_2e_wbus____dat__r.curr : p_core_2e_loadstore_2e_m__load__data.curr) : p_core_2e_loadstore_2e_m__load__data.curr));
	}
	// cells $flatten\core.\loadstore.$94 $procmux$937 $procmux$935 $procmux$933 $flatten\core.\loadstore.$50 $flatten\core.\loadstore.$48 $flatten\core.\loadstore.$46 $flatten\core.\loadstore.$44
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_dbus____adr.next = (p_core_2e_loadstore_2e_rst ? value<30>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____adr.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_loadstore_2e_x__load, p_core_2e_loadstore_2e_x__store), p_core_2e_loadstore_2e_x__valid), not_u<1>(p_core_2e_loadstore_2e_x__stall)) ? p_core_2e_adder_2e_x__result.slice<31,2>().val() : p_core_2e_loadstore_2e_dbus____adr.curr)));
	}
	// cells $flatten\core.\loadstore.$95 $procmux$931 $procmux$929 $procmux$927 $flatten\core.\loadstore.$58 $flatten\core.\loadstore.$56 $flatten\core.\loadstore.$54 $flatten\core.\loadstore.$52 $procmux$448 $procmux$449_CMP0 $procmux$450_ANY $procmux$451_ANY $flatten\core.\data_sel.$7 $flatten\core.\data_sel.$4
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_dbus____sel.next = (p_core_2e_loadstore_2e_rst ? value<4>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____sel.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_loadstore_2e_x__load, p_core_2e_loadstore_2e_x__store), p_core_2e_loadstore_2e_x__valid), not_u<1>(p_core_2e_loadstore_2e_x__stall)) ? (eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x2u}) ? value<4>{0xfu} : (reduce_or<1>(i_procmux_24_450__CMP) ? sshl_uu<5>(value<2>{0x3u}, p_core_2e_data__sel_2e_x__offset).slice<3,0>().val() : (reduce_or<1>(i_procmux_24_451__CMP) ? sshl_uu<4>(value<1>{0x1u}, p_core_2e_data__sel_2e_x__offset) : value<4>{0u}))) : p_core_2e_loadstore_2e_dbus____sel.curr)));
	}
	// cells $flatten\core.\loadstore.$96 $procmux$925 $procmux$923 $procmux$921 $flatten\core.\loadstore.$66 $flatten\core.\loadstore.$64 $flatten\core.\loadstore.$62 $flatten\core.\loadstore.$60
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_dbus____we.next = (p_core_2e_loadstore_2e_rst ? value<1>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____we.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_loadstore_2e_x__load, p_core_2e_loadstore_2e_x__store), p_core_2e_loadstore_2e_x__valid), not_u<1>(p_core_2e_loadstore_2e_x__stall)) ? p_core_2e_loadstore__x__store : p_core_2e_loadstore_2e_dbus____we.curr)));
	}
	// cells $flatten\core.\loadstore.$97 $procmux$919 $procmux$917 $procmux$915 $flatten\core.\loadstore.$74 $flatten\core.\loadstore.$72 $flatten\core.\loadstore.$70 $flatten\core.\loadstore.$68
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_dbus____dat__w.next = (p_core_2e_loadstore_2e_rst ? value<32>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____dat__w.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_loadstore_2e_x__load, p_core_2e_loadstore_2e_x__store), p_core_2e_loadstore_2e_x__valid), not_u<1>(p_core_2e_loadstore_2e_x__stall)) ? p_core_2e_loadstore__x__store__data : p_core_2e_loadstore_2e_dbus____dat__w.curr)));
	}
	// cells $flatten\core.\loadstore.$98 $procmux$913 $procmux$909
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_m__load__error.next = (p_core_2e_loadstore_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_loadstore_2e_m__load__error.curr : value<1>{0u}));
	}
	// cells $flatten\core.\loadstore.$99 $procmux$907 $procmux$903
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_m__store__error.next = (p_core_2e_loadstore_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_loadstore_2e_m__store__error.curr : value<1>{0u}));
	}
	// cells $flatten\core.\loadstore.$100 $procmux$901
	if (posedge_p_clk) {
		p_core_2e_loadstore_2e_m__badaddr.next = (p_core_2e_loadstore_2e_rst ? value<30>{0u} : p_core_2e_loadstore_2e_m__badaddr.curr);
	}
	// cells $flatten\core.\fetch.$43 $procmux$894 $procmux$892 $procmux$890 $flatten\core.\fetch.$10 $flatten\core.\fetch.$8 $procmux$888
	if (posedge_p_clk) {
		p_core_2e_fetch_2e_ibus____cyc.next = (p_core_2e_fetch_2e_rst ? value<1>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? (or_uu<1>(p_imem_2e_wbus____ack.curr, not_u<1>(p_core_2e_fetch_2e_f__valid)) ? value<1>{0u} : p_core_2e_fetch_2e_ibus____cyc.curr) : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_fetch_2e_ibus____cyc.curr : value<1>{0x1u})));
	}
	// cells $flatten\core.\fetch.$44 $procmux$886 $procmux$884 $procmux$882 $flatten\core.\fetch.$20 $flatten\core.\fetch.$18 $procmux$880
	if (posedge_p_clk) {
		p_core_2e_fetch_2e_ibus____stb.next = (p_core_2e_fetch_2e_rst ? value<1>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? (or_uu<1>(p_imem_2e_wbus____ack.curr, not_u<1>(p_core_2e_fetch_2e_f__valid)) ? value<1>{0u} : p_core_2e_fetch_2e_ibus____stb.curr) : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_fetch_2e_ibus____stb.curr : value<1>{0x1u})));
	}
	// cells $flatten\core.\fetch.$45 $procmux$878 $procmux$876 $procmux$874 $flatten\core.\fetch.$30 $flatten\core.\fetch.$28
	if (posedge_p_clk) {
		p_core_2e_fetch_2e_ibus__rdata.next = (p_core_2e_fetch_2e_rst ? value<32>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? (or_uu<1>(p_imem_2e_wbus____ack.curr, not_u<1>(p_core_2e_fetch_2e_f__valid)) ? p_imem_2e_wbus____dat__r.curr : p_core_2e_fetch_2e_ibus__rdata.curr) : p_core_2e_fetch_2e_ibus__rdata.curr));
	}
	// cells $flatten\core.\fetch.$46 $procmux$872 $procmux$870 $procmux$868
	if (posedge_p_clk) {
		p_core_2e_fetch_2e_ibus____adr.next = (p_core_2e_fetch_2e_rst ? value<30>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? p_core_2e_fetch_2e_ibus____adr.curr : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_fetch_2e_ibus____adr.curr : p_core_2e_fetch__a__pc.slice<31,2>().val())));
	}
	// cells $flatten\core.\fetch.$47 $procmux$866 $procmux$862
	if (posedge_p_clk) {
		p_core_2e_fetch_2e_f__fetch__error.next = (p_core_2e_fetch_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_fetch_2e_f__fetch__error.curr : value<1>{0u}));
	}
	// cells $flatten\core.\fetch.$48 $procmux$860
	if (posedge_p_clk) {
		p_core_2e_fetch_2e_f__badaddr.next = (p_core_2e_fetch_2e_rst ? value<30>{0u} : p_core_2e_fetch_2e_f__badaddr.curr);
	}
	// cells $flatten\core.\shifter.$17 $procmux$850 $procmux$848
	if (posedge_p_clk) {
		p_core_2e_shifter_2e_m__direction.next = (p_core_2e_shifter_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_shifter_2e_m__direction.curr : p_core_2e_shifter__x__direction));
	}
	// cells $flatten\core.\shifter.$18 $procmux$846 $procmux$844 $flatten\core.\shifter.$14 $flatten\core.\shifter.$2
	if (posedge_p_clk) {
		p_core_2e_shifter_2e_m__result_24_9.next = (p_core_2e_shifter_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_shifter_2e_m__result_24_9.curr : sshr_uu<64>(p_core_2e_shifter_2e_x__filler.repeat<32>().concat((p_core_2e_shifter_2e_x__direction ? p_core_2e_shifter_2e_x__src1 : p_core_2e_shifter_2e_x__src1.slice<0>().concat(p_core_2e_shifter_2e_x__src1.slice<1>()).concat(p_core_2e_shifter_2e_x__src1.slice<2>()).concat(p_core_2e_shifter_2e_x__src1.slice<3>()).concat(p_core_2e_shifter_2e_x__src1.slice<4>()).concat(p_core_2e_shifter_2e_x__src1.slice<5>()).concat(p_core_2e_shifter_2e_x__src1.slice<6>()).concat(p_core_2e_shifter_2e_x__src1.slice<7>()).concat(p_core_2e_shifter_2e_x__src1.slice<8>()).concat(p_core_2e_shifter_2e_x__src1.slice<9>()).concat(p_core_2e_shifter_2e_x__src1.slice<10>()).concat(p_core_2e_shifter_2e_x__src1.slice<11>()).concat(p_core_2e_shifter_2e_x__src1.slice<12>()).concat(p_core_2e_shifter_2e_x__src1.slice<13>()).concat(p_core_2e_shifter_2e_x__src1.slice<14>()).concat(p_core_2e_shifter_2e_x__src1.slice<15>()).concat(p_core_2e_shifter_2e_x__src1.slice<16>()).concat(p_core_2e_shifter_2e_x__src1.slice<17>()).concat(p_core_2e_shifter_2e_x__src1.slice<18>()).concat(p_core_2e_shifter_2e_x__src1.slice<19>()).concat(p_core_2e_shifter_2e_x__src1.slice<20>()).concat(p_core_2e_shifter_2e_x__src1.slice<21>()).concat(p_core_2e_shifter_2e_x__src1.slice<22>()).concat(p_core_2e_shifter_2e_x__src1.slice<23>()).concat(p_core_2e_shifter_2e_x__src1.slice<24>()).concat(p_core_2e_shifter_2e_x__src1.slice<25>()).concat(p_core_2e_shifter_2e_x__src1.slice<26>()).concat(p_core_2e_shifter_2e_x__src1.slice<27>()).concat(p_core_2e_shifter_2e_x__src1.slice<28>()).concat(p_core_2e_shifter_2e_x__src1.slice<29>()).concat(p_core_2e_shifter_2e_x__src1.slice<30>()).concat(p_core_2e_shifter_2e_x__src1.slice<31>()).val())).val(), p_core_2e_payload____src2.slice<4,0>().val()).slice<31,0>().val()));
	}
	// cells $flatten\core.\exception.$49 $procmux$829 $procmux$827 $procmux$1697 $procmux$1698_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____uie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____uie.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____uie.curr));
	}
	// cells $flatten\core.\exception.$50 $procmux$825 $procmux$823 $procmux$1695 $procmux$1696_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____sie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sie.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____sie.curr));
	}
	// cells $flatten\core.\exception.$51 $procmux$821 $procmux$819 $procmux$1693 $procmux$1694_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____zero0.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero0.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____zero0.curr));
	}
	// cells $flatten\core.\exception.$52 $procmux$817 $procmux$815 $procmux$813 $procmux$811
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____mie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_3 ? (p_core_2e_exception_2e_m__raise ? value<1>{0u} : (p_core_2e_a__payload____mret ? p_core_2e_exception_2e_mstatus____r____mpie.curr : i_procmux_24_809__Y)) : i_procmux_24_809__Y));
	}
	// cells $flatten\core.\exception.$53 $procmux$807 $procmux$805 $procmux$1689 $procmux$1690_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____upie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____upie.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____upie.curr));
	}
	// cells $flatten\core.\exception.$54 $procmux$803 $procmux$801 $procmux$1687 $procmux$1688_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____spie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____spie.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____spie.curr));
	}
	// cells $flatten\core.\exception.$55 $procmux$799 $procmux$797 $procmux$1685 $procmux$1686_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____zero1.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero1.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____zero1.curr));
	}
	// cells $flatten\core.\exception.$56 $procmux$795 $procmux$793 $procmux$791
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____mpie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_3 ? (p_core_2e_exception_2e_m__raise ? p_core_2e_exception_2e_mstatus____r____mie.curr : i_procmux_24_788__Y) : i_procmux_24_788__Y));
	}
	// cells $flatten\core.\exception.$57 $procmux$786 $procmux$784 $procmux$1681 $procmux$1682_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____spp.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____spp.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____spp.curr));
	}
	// cells $flatten\core.\exception.$58 $procmux$782 $procmux$780
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____zero2.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____zero2 : p_core_2e_exception_2e_mstatus____r____zero2.curr));
	}
	// cells $flatten\core.\exception.$59 $procmux$778 $procmux$776
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____mpp.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____mpp : p_core_2e_exception_2e_mstatus____r____mpp.curr));
	}
	// cells $flatten\core.\exception.$60 $procmux$774 $procmux$772
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____fs.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____fs : p_core_2e_exception_2e_mstatus____r____fs.curr));
	}
	// cells $flatten\core.\exception.$61 $procmux$770 $procmux$768
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____xs.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____xs : p_core_2e_exception_2e_mstatus____r____xs.curr));
	}
	// cells $flatten\core.\exception.$62 $procmux$766 $procmux$764 $procmux$1671 $procmux$1672_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____mprv.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____mprv.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____mprv.curr));
	}
	// cells $flatten\core.\exception.$63 $procmux$762 $procmux$760 $procmux$1669 $procmux$1670_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____sum.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sum.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____sum.curr));
	}
	// cells $flatten\core.\exception.$64 $procmux$758 $procmux$756 $procmux$1667 $procmux$1668_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____mxr.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____mxr.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____mxr.curr));
	}
	// cells $flatten\core.\exception.$65 $procmux$754 $procmux$752 $procmux$1665 $procmux$1666_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____tvm.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____tvm.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____tvm.curr));
	}
	// cells $flatten\core.\exception.$66 $procmux$750 $procmux$748 $procmux$1663 $procmux$1664_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____tw.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____tw.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____tw.curr));
	}
	// cells $flatten\core.\exception.$67 $procmux$746 $procmux$744 $procmux$1661 $procmux$1662_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____tsr.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____tsr.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____tsr.curr));
	}
	// cells $flatten\core.\exception.$68 $procmux$833 $procmux$831
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____zero3.next = (p_core_2e_exception_2e_rst ? value<8>{0u} : (p_core_2e_exception_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____zero3 : p_core_2e_exception_2e_mstatus____r____zero3.curr));
	}
	// cells $flatten\core.\exception.$69 $procmux$742 $procmux$740 $procmux$1679 $procmux$1680_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mstatus____r____sd.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mstatus____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sd.curr : value<1>{0u}) : p_core_2e_exception_2e_mstatus____r____sd.curr));
	}
	// cells $flatten\core.\exception.$70 $procmux$734 $procmux$732
	if (posedge_p_clk) {
		p_core_2e_exception_2e_misa____r____extensions.next = (p_core_2e_exception_2e_rst ? value<26>{0u} : (p_core_2e_exception_2e_misa____we ? p_core_2e_csrf_2e_misa____w____extensions : p_core_2e_exception_2e_misa____r____extensions.curr));
	}
	// cells $flatten\core.\exception.$71 $procmux$738 $procmux$736
	if (posedge_p_clk) {
		p_core_2e_exception_2e_misa____r____zero.next = (p_core_2e_exception_2e_rst ? value<4>{0u} : (p_core_2e_exception_2e_misa____we ? p_core_2e_csrf_2e_misa____w____zero : p_core_2e_exception_2e_misa____r____zero.curr));
	}
	// cells $flatten\core.\exception.$72 $procmux$730 $procmux$728
	if (posedge_p_clk) {
		p_core_2e_exception_2e_misa____r____mxl.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_misa____we ? p_core_2e_csrf_2e_misa____w____mxl : p_core_2e_exception_2e_misa____r____mxl.curr));
	}
	// cells $flatten\core.\exception.$73 $procmux$722 $procmux$720 $procmux$1565 $procmux$1566_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____usie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____usie.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____usie.curr));
	}
	// cells $flatten\core.\exception.$74 $procmux$718 $procmux$716 $procmux$1563 $procmux$1564_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____ssie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____ssie.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____ssie.curr));
	}
	// cells $flatten\core.\exception.$75 $procmux$714 $procmux$712 $procmux$1561 $procmux$1562_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____zero0.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero0.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____zero0.curr));
	}
	// cells $flatten\core.\exception.$76 $procmux$710 $procmux$708 $procmux$1559 $procmux$1560_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____msie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_csrf__wp____data.slice<3>().val() : value<1>{0u}) : p_core_2e_exception_2e_mie____r____msie.curr));
	}
	// cells $flatten\core.\exception.$77 $procmux$706 $procmux$704 $procmux$1557 $procmux$1558_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____utie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____utie.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____utie.curr));
	}
	// cells $flatten\core.\exception.$78 $procmux$702 $procmux$700 $procmux$1555 $procmux$1556_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____stie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____stie.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____stie.curr));
	}
	// cells $flatten\core.\exception.$79 $procmux$698 $procmux$696 $procmux$1553 $procmux$1554_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____zero1.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero1.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____zero1.curr));
	}
	// cells $flatten\core.\exception.$80 $procmux$694 $procmux$692 $procmux$1551 $procmux$1552_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____mtie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_csrf__wp____data.slice<7>().val() : value<1>{0u}) : p_core_2e_exception_2e_mie____r____mtie.curr));
	}
	// cells $flatten\core.\exception.$81 $procmux$690 $procmux$688 $procmux$1549 $procmux$1550_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____ueie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____ueie.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____ueie.curr));
	}
	// cells $flatten\core.\exception.$82 $procmux$686 $procmux$684 $procmux$1547 $procmux$1548_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____seie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____seie.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____seie.curr));
	}
	// cells $flatten\core.\exception.$83 $procmux$682 $procmux$680 $procmux$1545 $procmux$1546_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____zero2.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero2.curr : value<1>{0u}) : p_core_2e_exception_2e_mie____r____zero2.curr));
	}
	// cells $flatten\core.\exception.$84 $procmux$726 $procmux$724 $procmux$1543 $procmux$1544_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____meie.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mie____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x304u}) ? p_core_2e_csrf__wp____data.slice<11>().val() : value<1>{0u}) : p_core_2e_exception_2e_mie____r____meie.curr));
	}
	// cells $flatten\core.\exception.$85 $procmux$678 $procmux$676
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mie____r____zero3.next = (p_core_2e_exception_2e_rst ? value<20>{0u} : (p_core_2e_exception_2e_mie____we ? p_core_2e_csrf_2e_mie____w____zero3 : p_core_2e_exception_2e_mie____r____zero3.curr));
	}
	// cells $flatten\core.\exception.$86 $procmux$674 $procmux$672
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mtvec____r____mode.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_mtvec____we ? p_core_2e_csrf_2e_mtvec____w____mode : p_core_2e_exception_2e_mtvec____r____mode.curr));
	}
	// cells $flatten\core.\exception.$87 $procmux$670 $procmux$668
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mtvec____r____base.next = (p_core_2e_exception_2e_rst ? value<30>{0u} : (p_core_2e_exception_2e_mtvec____we ? p_core_2e_csrf_2e_mtvec____w____base : p_core_2e_exception_2e_mtvec____r____base.curr));
	}
	// cells $flatten\core.\exception.$88 $procmux$666 $procmux$664 $procmux$1435 $procmux$1436_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mscratch____r____value.next = (p_core_2e_exception_2e_rst ? value<32>{0u} : ((eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____en : value<1>{0u}) ? p_core_2e_csrf_2e_mscratch____w____value : p_core_2e_exception_2e_mscratch____r____value.curr));
	}
	// cells $flatten\core.\exception.$89 $procmux$662 $procmux$660
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mepc____r____zero.next = (p_core_2e_exception_2e_rst ? value<2>{0u} : (p_core_2e_exception_2e_mepc____we ? p_core_2e_csrf_2e_mepc____w____zero : p_core_2e_exception_2e_mepc____r____zero.curr));
	}
	// cells $flatten\core.\exception.$90 $procmux$658 $procmux$656 $flatten\core.\exception.$8 $flatten\core.\exception.$6 $procmux$654
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mepc____r____base.next = (p_core_2e_exception_2e_rst ? value<30>{0u} : (and_uu<1>(p_core_2e_exception_2e_m__valid, not_u<1>(p_core_2e_exception_2e_m__stall)) ? (p_core_2e_exception_2e_m__raise ? p_core_2e_exception__m__pc.slice<31,2>().val() : i_procmux_24_652__Y) : i_procmux_24_652__Y));
	}
	// cells $flatten\core.\exception.$91 $procmux$650 $procmux$648 $procmux$646 $procmux$644 $flatten\core.\exception.$18 $procmux$516 $procmux$508 $procmux$500 $flatten\core.\exception.$16
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mcause____r____ecode.next = (p_core_2e_exception_2e_rst ? value<31>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_11 ? (p_core_2e_exception_2e_m__raise ? (i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 ? pos_u<31>((p_core_2e_exception_2e_interrupt__pe_2e_i.slice<3>().val() ? value<4>{0x3u} : (p_core_2e_exception_2e_interrupt__pe_2e_i.slice<7>().val() ? value<4>{0x7u} : (p_core_2e_exception_2e_interrupt__pe_2e_i.slice<11>().val() ? value<4>{0xbu} : value<4>{0u})))) : pos_u<31>(p_core_2e_exception_2e_trap__pe__o)) : i_procmux_24_641__Y) : i_procmux_24_641__Y));
	}
	// cells $flatten\core.\exception.$92 $procmux$639 $procmux$637 $procmux$635 $procmux$633
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mcause____r____interrupt.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_11 ? (p_core_2e_exception_2e_m__raise ? (i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 ? value<1>{0x1u} : value<1>{0u}) : i_procmux_24_630__Y) : i_procmux_24_630__Y));
	}
	// cells $flatten\core.\exception.$93 $procmux$628 $procmux$626 $flatten\core.\exception.$22 $flatten\core.\exception.$20 $procmux$624 $procmux$622 $procmux$615 $procmux$616_ANY $procmux$617_ANY $procmux$618_CMP0 $procmux$619_CMP0 $procmux$620_CMP0 $procmux$621_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mtval____r____value.next = (p_core_2e_exception_2e_rst ? value<32>{0u} : (and_uu<1>(p_core_2e_exception_2e_m__valid, not_u<1>(p_core_2e_exception_2e_m__stall)) ? (p_core_2e_exception_2e_m__raise ? (i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 ? i_procmux_24_612__Y : (reduce_or<1>(i_procmux_24_616__CMP) ? p_core_2e_loadstore_2e_m__badaddr.curr.concat(value<2>{0u}).val() : (reduce_or<1>(i_procmux_24_617__CMP) ? p_core_2e_payload____result : (eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x3u}) ? p_core_2e_exception__m__pc : (eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x2u}) ? p_core_2e_payload____instruction_24_72.curr : (eq_uu<1>(p_core_2e_exception_2e_trap__pe__o, value<4>{0x1u}) ? p_core_2e_payload____fetch__badaddr_24_76.curr.concat(value<2>{0u}).val() : (logic_not<1>(p_core_2e_exception_2e_trap__pe__o) ? p_core_2e_payload____branch__target_24_107 : value<32>{0u}))))))) : i_procmux_24_612__Y) : i_procmux_24_612__Y));
	}
	// cells $flatten\core.\exception.$94 $procmux$606 $procmux$604 $procmux$1169 $procmux$1170_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____usip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____usip.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____usip.curr));
	}
	// cells $flatten\core.\exception.$95 $procmux$602 $procmux$600 $procmux$1167 $procmux$1168_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____ssip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____ssip.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____ssip.curr));
	}
	// cells $flatten\core.\exception.$96 $procmux$598 $procmux$596 $procmux$1165 $procmux$1166_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____zero0.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero0.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____zero0.curr));
	}
	// cell $flatten\core.\exception.$97
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____msip.next = value<1>{0u};
	}
	// cells $flatten\core.\exception.$98 $procmux$594 $procmux$592 $procmux$1161 $procmux$1162_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____utip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____utip.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____utip.curr));
	}
	// cells $flatten\core.\exception.$99 $procmux$590 $procmux$588 $procmux$1159 $procmux$1160_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____stip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____stip.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____stip.curr));
	}
	// cells $flatten\core.\exception.$100 $procmux$586 $procmux$584 $procmux$1157 $procmux$1158_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____zero1.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero1.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____zero1.curr));
	}
	// cell $flatten\core.\exception.$101
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____mtip.next = value<1>{0u};
	}
	// cells $flatten\core.\exception.$102 $procmux$582 $procmux$580 $procmux$1153 $procmux$1154_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____ueip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____ueip.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____ueip.curr));
	}
	// cells $flatten\core.\exception.$103 $procmux$578 $procmux$576 $procmux$1151 $procmux$1152_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____seip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____seip.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____seip.curr));
	}
	// cells $flatten\core.\exception.$104 $procmux$610 $procmux$608 $procmux$1149 $procmux$1150_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____zero2.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : (p_core_2e_exception_2e_mip____we ? (eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero2.curr : value<1>{0u}) : p_core_2e_exception_2e_mip____r____zero2.curr));
	}
	// cells $flatten\core.\exception.$105 $procmux$564 $flatten\core.\exception.$32
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____meip.next = (p_core_2e_exception_2e_rst ? value<1>{0u} : reduce_bool<1>(p_core_2e_exception_2e_irq__pending____r____value.curr));
	}
	// cells $flatten\core.\exception.$106 $procmux$574 $procmux$572
	if (posedge_p_clk) {
		p_core_2e_exception_2e_mip____r____zero3.next = (p_core_2e_exception_2e_rst ? value<20>{0u} : (p_core_2e_exception_2e_mip____we ? p_core_2e_csrf_2e_mip____w____zero3 : p_core_2e_exception_2e_mip____r____zero3.curr));
	}
	// cells $flatten\core.\exception.$107 $procmux$561 $procmux$559 $procmux$1105 $procmux$1106_CMP0
	if (posedge_p_clk) {
		p_core_2e_exception_2e_irq__mask____r____value.next = (p_core_2e_exception_2e_rst ? value<32>{0u} : ((eq_uu<1>(p_core_2e_csrf_2e_wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____en : value<1>{0u}) ? p_core_2e_csrf_2e_irq__mask____w____value : p_core_2e_exception_2e_irq__mask____r____value.curr));
	}
	// cell $flatten\core.\exception.$108
	if (posedge_p_clk) {
		p_core_2e_exception_2e_irq__pending____r____value.next = value<32>{0u};
	}
	// cells $flatten\core.\adder.$19 $procmux$466 $procmux$464 $flatten\core.$174 $flatten\core.$172 $flatten\core.$170
	if (posedge_p_clk) {
		p_core_2e_adder_2e_x__sub.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_adder_2e_x__sub.curr : or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder__adder, p_core_2e_decoder__adder__sub), p_core_2e_decoder__compare), p_core_2e_decoder__branch)));
	}
	// cells $flatten\core.\m.$42 $procmux$412 $procmux$410
	if (posedge_p_clk) {
		p_core_2e_m_2e_valid_24_1.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? value<1>{0u} : p_core_2e_m_2e_valid_24_6));
	}
	// cells $flatten\core.\x.$19 $procmux$406 $procmux$404 $procmux$402
	if (posedge_p_clk) {
		p_core_2e_x_2e_valid_24_1.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_x_2e_valid_24_1.curr : value<1>{0u}) : p_core_2e_x_2e_valid_24_4));
	}
	// cells $flatten\core.\d.$38 $procmux$400 $procmux$398 $procmux$396 $flatten\core.\d.$17 $flatten\core.\d.$14
	if (posedge_p_clk) {
		p_core_2e_d_2e_valid_24_1.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? (or_uu<1>(not_u<1>(p_core_2e_d_2e_stall_24_2), p_core_2e_d_2e_kill_24_15) ? value<1>{0u} : p_core_2e_d_2e_valid_24_1.curr) : p_core_2e_d_2e_valid_24_4));
	}
	// cells $flatten\core.\f.$47 $procmux$394 $procmux$392 $procmux$390 $flatten\core.\f.$18 $flatten\core.\f.$15
	if (posedge_p_clk) {
		p_core_2e_f_2e_valid_24_1.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? (or_uu<1>(not_u<1>(i_flatten_5c_core_2e__5c_d_2e__24_36), p_core_2e_f_2e_kill_24_16) ? value<1>{0u} : p_core_2e_f_2e_valid_24_1.curr) : p_core_2e_f_2e_valid_24_7));
	}
	// cells $flatten\core.\a.$45 $procmux$388 $procmux$386 $procmux$384 $flatten\core.\a.$12 $flatten\core.\a.$9
	if (posedge_p_clk) {
		p_core_2e_a_2e_valid.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? (or_uu<1>(not_u<1>(i_flatten_5c_core_2e__5c_f_2e__24_45), p_core_2e_a_2e_kill_24_10) ? value<1>{0u} : p_core_2e_a_2e_valid.curr) : value<1>{0x1u}));
	}
	// cells $flatten\core.$562 $procmux$382 $procmux$380
	if (posedge_p_clk) {
		p_core_2e_m__payload____exception.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_m__payload____exception.curr : p_core_2e_exception_2e_m__raise));
	}
	// cells $flatten\core.$561 $procmux$378 $procmux$376
	if (posedge_p_clk) {
		p_core_2e_payload____result_24_128.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____result_24_128.curr : p_core_2e_m__result));
	}
	// cells $flatten\core.$560 $procmux$374 $procmux$372
	if (posedge_p_clk) {
		p_core_2e_payload____rd__we_24_124.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____rd__we_24_124.curr : p_core_2e_payload____rd__we_24_86));
	}
	// cells $flatten\core.$559 $procmux$370 $procmux$368
	if (posedge_p_clk) {
		p_core_2e_payload____load__data_24_131.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____load__data_24_131.curr : p_core_2e_loadstore_2e_m__load__data.curr));
	}
	// cells $flatten\core.$558 $procmux$366 $procmux$364
	if (posedge_p_clk) {
		p_core_2e_payload____funct3_24_126.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____funct3_24_126.curr : p_core_2e_payload____funct3_24_91.curr));
	}
	// cells $flatten\core.$557 $procmux$362 $procmux$360
	if (posedge_p_clk) {
		p_core_2e_payload____load_24_130.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____load_24_130.curr : p_core_2e_payload____load_24_95));
	}
	// cells $flatten\core.$556 $procmux$358 $procmux$356
	if (posedge_p_clk) {
		p_core_2e_payload____rd_24_122.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____rd_24_122.curr : p_core_2e_payload____rd_24_84));
	}
	// cells $flatten\core.$555 $procmux$354 $procmux$352
	if (posedge_p_clk) {
		p_core_2e_payload____pc_24_120.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____pc_24_120.curr : p_core_2e_payload____pc_24_69));
	}
	// cells $flatten\core.$554 $procmux$350 $procmux$348
	if (posedge_p_clk) {
		p_core_2e_payload____result_24_92.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____result_24_92.curr : p_core_2e_x__result));
	}
	// cells $flatten\core.$553 $procmux$346 $procmux$344 $procmux$50 $flatten\core.$281 $flatten\core.$280 $flatten\core.$273 $flatten\core.$272 $flatten\core.$270 $flatten\core.$277 $flatten\core.$275
	if (posedge_p_clk) {
		p_core_2e_payload____csr__result_24_116.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr__result_24_116.curr : (p_core_2e_payload____funct3.slice<1>().val() ? p_core_2e_logic_2e_result : (and_uu<1>(p_core_2e_payload____funct3.slice<1>().val(), p_core_2e_payload____funct3.slice<0>().val()) ? not_u<32>((p_core_2e_payload____funct3.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1) : p_core_2e_payload____src1)) : (p_core_2e_payload____funct3.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1) : p_core_2e_payload____src1)))));
	}
	// cells $flatten\core.$552 $procmux$342 $procmux$340
	if (posedge_p_clk) {
		p_core_2e_payload____csr__we_24_115.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr__we_24_115.curr : p_core_2e_payload____csr__we));
	}
	// cells $flatten\core.$551 $procmux$338 $procmux$336
	if (posedge_p_clk) {
		p_core_2e_payload____csr__adr_24_113.next = (p_core_2e_rst ? value<12>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr__adr_24_113.curr : p_core_2e_payload____csr__adr));
	}
	// cells $flatten\core.$550 $procmux$334 $procmux$332
	if (posedge_p_clk) {
		p_core_2e_payload____csr_24_111.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr_24_111.curr : p_core_2e_payload____csr));
	}
	// cells $flatten\core.$549 $procmux$330 $procmux$328
	if (posedge_p_clk) {
		p_core_2e_payload____branch__predict__taken_24_109.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____branch__predict__taken_24_109.curr : p_core_2e_payload____branch__predict__taken_24_62.curr));
	}
	// cells $flatten\core.$548 $procmux$326 $procmux$324 $procmux$242 $flatten\core.$415
	if (posedge_p_clk) {
		p_core_2e_payload____branch__target_24_108.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____branch__target_24_108.curr : (and_uu<1>(p_core_2e_payload____jump, p_core_2e_payload____rs1__re_24_42.curr) ? i_procmux_24_462__Y.slice<31,1>().concat(value<1>{0u}).val() : p_core_2e_payload____branch__target_24_61.curr)));
	}
	// cells $flatten\core.$547 $procmux$322 $procmux$320 $flatten\core.$413 $flatten\core.$411
	if (posedge_p_clk) {
		p_core_2e_payload____branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____branch__taken.curr : or_uu<1>(p_core_2e_payload____jump, and_uu<1>(p_core_2e_payload____branch_24_60.curr, p_core_2e_compare_2e_condition__met))));
	}
	// cells $flatten\core.$546 $procmux$318 $procmux$316
	if (posedge_p_clk) {
		p_core_2e_payload____condition__met_24_106.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____condition__met_24_106.curr : p_core_2e_compare_2e_condition__met));
	}
	// cells $flatten\core.$545 $procmux$314 $procmux$312
	if (posedge_p_clk) {
		p_core_2e_payload____mret_24_117.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____mret_24_117.curr : p_core_2e_payload____mret_24_68.curr));
	}
	// cells $flatten\core.$544 $procmux$310 $procmux$308
	if (posedge_p_clk) {
		p_core_2e_payload____shift_24_94.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____shift_24_94.curr : p_core_2e_payload____shift_24_55.curr));
	}
	// cells $flatten\core.$543 $procmux$306 $procmux$304
	if (posedge_p_clk) {
		p_core_2e_payload____compare_24_101.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____compare_24_101.curr : p_core_2e_payload____compare));
	}
	// cells $flatten\core.$542 $procmux$302 $procmux$300
	if (posedge_p_clk) {
		p_core_2e_payload____store__data_24_99.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____store__data_24_99.curr : p_core_2e_loadstore__x__store__data));
	}
	// cells $flatten\core.$541 $procmux$298 $procmux$296
	if (posedge_p_clk) {
		p_core_2e_payload____store_24_98.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____store_24_98.curr : p_core_2e_payload____store));
	}
	// cells $flatten\core.$540 $procmux$294 $procmux$292
	if (posedge_p_clk) {
		p_core_2e_payload____load_24_96.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____load_24_96.curr : p_core_2e_payload____load));
	}
	// cells $flatten\core.$539 $procmux$290 $procmux$288
	if (posedge_p_clk) {
		p_core_2e_payload____funct3_24_91.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____funct3_24_91.curr : p_core_2e_payload____funct3));
	}
	// cells $flatten\core.$538 $procmux$286 $procmux$284 $flatten\core.$409
	if (posedge_p_clk) {
		p_core_2e_payload____bypass__m_24_89.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____bypass__m_24_89.curr : or_uu<1>(p_core_2e_payload____bypass__m_24_47.curr, p_core_2e_payload____bypass__x_24_46.curr)));
	}
	// cells $flatten\core.$537 $procmux$282 $procmux$280
	if (posedge_p_clk) {
		p_core_2e_payload____rd__we_24_87.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____rd__we_24_87.curr : p_core_2e_payload____rd__we));
	}
	// cells $flatten\core.$536 $procmux$278 $procmux$276
	if (posedge_p_clk) {
		p_core_2e_payload____rd_24_85.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____rd_24_85.curr : p_core_2e_payload____rd));
	}
	// cells $flatten\core.$535 $procmux$274 $procmux$272
	if (posedge_p_clk) {
		p_core_2e_payload____ebreak_24_83.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____ebreak_24_83.curr : p_core_2e_payload____ebreak_24_67.curr));
	}
	// cells $flatten\core.$534 $procmux$270 $procmux$268
	if (posedge_p_clk) {
		p_core_2e_payload____ecall_24_81.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____ecall_24_81.curr : p_core_2e_payload____ecall_24_66.curr));
	}
	// cells $flatten\core.$533 $procmux$266 $procmux$264 $procmux$452 $procmux$453_CMP0 $procmux$454_ANY $flatten\core.\data_sel.$2
	if (posedge_p_clk) {
		p_core_2e_payload____loadstore__misaligned_24_79.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____loadstore__misaligned_24_79.curr : (eq_uu<1>(p_core_2e_data__sel_2e_x__funct3, value<3>{0x2u}) ? reduce_bool<1>(p_core_2e_data__sel_2e_x__offset) : (reduce_or<1>(i_procmux_24_454__CMP) ? p_core_2e_data__sel__x__offset.slice<0>().val() : value<1>{0u}))));
	}
	// cells $flatten\core.$532 $procmux$262 $procmux$260
	if (posedge_p_clk) {
		p_core_2e_payload____illegal_24_78.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____illegal_24_78.curr : p_core_2e_payload____illegal_24_38.curr));
	}
	// cells $flatten\core.$531 $procmux$258 $procmux$256
	if (posedge_p_clk) {
		p_core_2e_payload____fetch__badaddr_24_76.next = (p_core_2e_rst ? value<30>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____fetch__badaddr_24_76.curr : p_core_2e_payload____fetch__badaddr_24_37.curr));
	}
	// cells $flatten\core.$530 $procmux$254 $procmux$252
	if (posedge_p_clk) {
		p_core_2e_payload____fetch__error_24_74.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____fetch__error_24_74.curr : p_core_2e_payload____fetch__error_24_35.curr));
	}
	// cells $flatten\core.$529 $procmux$250 $procmux$248
	if (posedge_p_clk) {
		p_core_2e_payload____instruction_24_72.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____instruction_24_72.curr : p_core_2e_payload____instruction_24_33.curr));
	}
	// cells $flatten\core.$528 $procmux$246 $procmux$244
	if (posedge_p_clk) {
		p_core_2e_payload____pc_24_70.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____pc_24_70.curr : p_core_2e_payload____pc_24_30));
	}
	// cells $flatten\core.$527 $procmux$239 $procmux$237 $procmux$235
	if (posedge_p_clk) {
		p_core_2e_payload____src2_24_44.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____src2_24_44.curr : (p_core_2e_decoder_2e_store ? p_core_2e_decoder_2e_immediate : p_core_2e_d__src2)));
	}
	// cells $flatten\core.$526 $procmux$232 $procmux$230
	if (posedge_p_clk) {
		p_core_2e_payload____branch__target_24_61.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____branch__target_24_61.curr : p_core_2e_predict_2e_d__branch__target));
	}
	// cells $flatten\core.$525 $procmux$228 $procmux$226
	if (posedge_p_clk) {
		p_core_2e_payload____branch__predict__taken_24_62.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____branch__predict__taken_24_62.curr : p_core_2e_predict_2e_d__branch__taken));
	}
	// cells $flatten\core.$524 $procmux$224 $procmux$222
	if (posedge_p_clk) {
		p_core_2e_payload____store__operand_24_45.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____store__operand_24_45.curr : p_core_2e_d__src2));
	}
	// cells $flatten\core.$523 $procmux$220 $procmux$218 $procmux$67 $procmux$65 $procmux$63 $flatten\core.$305 $flatten\core.$303 $procmux$61 $flatten\core.$307 $procmux$59 $flatten\core.$309 $procmux$57 $flatten\core.$311 $procmux$22 $flatten\core.$216 $flatten\core.$214 $flatten\core.$218 $procmux$970 $flatten\core.\gprf.\mem.$10
	if (posedge_p_clk) {
		p_core_2e_payload____src1_24_43.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____src1_24_43.curr : (p_core_2e_decoder_2e_lui ? value<32>{0u} : (p_core_2e_decoder_2e_auipc ? p_core_2e_payload____pc_24_25 : (and_uu<1>(p_core_2e_decoder__rs1__re, logic_not<1>(p_core_2e_decoder__rs1)) ? value<32>{0u} : (and_uu<1>(p_core_2e_d__raw__rs1__x, p_core_2e_x__valid) ? p_core_2e_x__result : (and_uu<1>(p_core_2e_d__raw__rs1__m, p_core_2e_m__valid) ? p_core_2e_m__result : (and_uu<1>((and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_121), p_core_2e_payload____rd__we_24_123) ? eq_uu<1>(p_core_2e_payload____rd_24_121, p_core_2e_decoder__rs1) : value<1>{0u}), p_core_2e_w__valid) ? p_core_2e_w__result : (and_uu<1>(p_core_2e_gprf_2e_mem_2e_collision.curr.slice<0>().val(), p_core_2e_gprf_2e_mem_2e_fwd__wp__en.curr) ? p_core_2e_gprf_2e_mem_2e_fwd__wp__data.curr : p_core_2e_gprf_2e_mem_2e___mem__r__data.curr)))))))));
	}
	// cells $flatten\core.$522 $procmux$216 $procmux$214
	if (posedge_p_clk) {
		p_core_2e_payload____mret_24_68.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____mret_24_68.curr : p_core_2e_decoder_2e_mret));
	}
	// cells $flatten\core.$521 $procmux$212 $procmux$210
	if (posedge_p_clk) {
		p_core_2e_payload____ebreak_24_67.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____ebreak_24_67.curr : p_core_2e_decoder_2e_ebreak));
	}
	// cells $flatten\core.$520 $procmux$208 $procmux$206
	if (posedge_p_clk) {
		p_core_2e_payload____ecall_24_66.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____ecall_24_66.curr : p_core_2e_decoder_2e_ecall));
	}
	// cells $flatten\core.$519 $procmux$204 $procmux$202 $flatten\core.\decoder.$576 $flatten\core.\decoder.$574 $flatten\core.\decoder.$572
	if (posedge_p_clk) {
		p_core_2e_payload____csr__we_24_65.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____csr__we_24_65.curr : or_uu<1>(not_u<1>(p_core_2e_decoder_2e_funct3_24_1.slice<1>().val()), reduce_bool<1>(p_core_2e_decoder_2e_rs1))));
	}
	// cells $flatten\core.$518 $procmux$200 $procmux$198
	if (posedge_p_clk) {
		p_core_2e_payload____csr__adr_24_64.next = (p_core_2e_rst ? value<12>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____csr__adr_24_64.curr : p_core_2e_decoder_2e_immediate.slice<11,0>().val()));
	}
	// cells $flatten\core.$517 $procmux$196 $procmux$194
	if (posedge_p_clk) {
		p_core_2e_payload____csr_24_63.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____csr_24_63.curr : p_core_2e_decoder_2e_csr));
	}
	// cells $flatten\core.$516 $procmux$192 $procmux$190
	if (posedge_p_clk) {
		p_core_2e_payload____fence__i.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____fence__i.curr : p_core_2e_decoder_2e_fence__i));
	}
	// cells $flatten\core.$515 $procmux$188 $procmux$186
	if (posedge_p_clk) {
		p_core_2e_payload____branch_24_60.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____branch_24_60.curr : p_core_2e_decoder_2e_branch));
	}
	// cells $flatten\core.$514 $procmux$184 $procmux$182
	if (posedge_p_clk) {
		p_core_2e_payload____jump_24_58.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____jump_24_58.curr : p_core_2e_decoder_2e_jump));
	}
	// cells $flatten\core.$513 $procmux$180 $procmux$178 $flatten\core.\decoder.$374
	if (posedge_p_clk) {
		p_core_2e_payload____sext_24_57.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____sext_24_57.curr : eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u})));
	}
	// cells $flatten\core.$512 $procmux$176 $procmux$174 $flatten\core.\decoder.$372
	if (posedge_p_clk) {
		p_core_2e_payload____direction_24_56.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____direction_24_56.curr : eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})));
	}
	// cells $flatten\core.$511 $procmux$172 $procmux$170
	if (posedge_p_clk) {
		p_core_2e_payload____shift_24_55.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____shift_24_55.curr : p_core_2e_decoder_2e_shift));
	}
	// cells $flatten\core.$510 $procmux$168 $procmux$166
	if (posedge_p_clk) {
		p_core_2e_payload____logic_24_52.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____logic_24_52.curr : p_core_2e_decoder_2e_logic));
	}
	// cells $flatten\core.$509 $procmux$164 $procmux$162
	if (posedge_p_clk) {
		p_core_2e_payload____compare_24_59.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____compare_24_59.curr : p_core_2e_decoder_2e_compare));
	}
	// cells $flatten\core.$508 $procmux$160 $procmux$158 $flatten\core.$339 $flatten\core.$337 $flatten\core.$335
	if (posedge_p_clk) {
		p_core_2e_payload____adder__sub_24_51.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____adder__sub_24_51.curr : or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder__adder, p_core_2e_decoder__adder__sub), p_core_2e_decoder__compare), p_core_2e_decoder__branch)));
	}
	// cells $flatten\core.$507 $procmux$156 $procmux$154
	if (posedge_p_clk) {
		p_core_2e_payload____store_24_50.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____store_24_50.curr : p_core_2e_decoder_2e_store));
	}
	// cells $flatten\core.$506 $procmux$152 $procmux$150
	if (posedge_p_clk) {
		p_core_2e_payload____load_24_49.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____load_24_49.curr : p_core_2e_decoder_2e_load));
	}
	// cells $flatten\core.$505 $procmux$148 $procmux$146
	if (posedge_p_clk) {
		p_core_2e_payload____funct3_24_48.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____funct3_24_48.curr : p_core_2e_decoder_2e_funct3_24_1));
	}
	// cells $flatten\core.$504 $procmux$144 $procmux$142 $flatten\core.\decoder.$606
	if (posedge_p_clk) {
		p_core_2e_payload____bypass__m_24_47.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____bypass__m_24_47.curr : or_uu<1>(i_flatten_5c_core_2e__5c_decoder_2e__24_99, p_core_2e_decoder_2e_shift)));
	}
	// cells $flatten\core.$503 $procmux$140 $procmux$138 $flatten\core.\decoder.$602 $flatten\core.\decoder.$600 $flatten\core.\decoder.$598 $flatten\core.\decoder.$596
	if (posedge_p_clk) {
		p_core_2e_payload____bypass__x_24_46.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____bypass__x_24_46.curr : or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(p_core_2e_decoder_2e_adder, p_core_2e_decoder_2e_logic), p_core_2e_decoder_2e_lui), p_core_2e_decoder_2e_auipc), p_core_2e_decoder_2e_csr)));
	}
	// cells $flatten\core.$502 $procmux$136 $procmux$134
	if (posedge_p_clk) {
		p_core_2e_payload____rs1__re_24_42.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rs1__re_24_42.curr : p_core_2e_decoder_2e_rs1__re));
	}
	// cells $flatten\core.$501 $procmux$132 $procmux$130 $flatten\core.\decoder.$26 $flatten\core.\decoder.$24 $flatten\core.\decoder.$22 $flatten\core.\decoder.$20 $flatten\core.\decoder.$18 $flatten\core.\decoder.$16 $flatten\core.\decoder.$14
	if (posedge_p_clk) {
		p_core_2e_payload____rd__we_24_41.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rd__we_24_41.curr : or_uu<1>(or_uu<1>(or_uu<1>(logic_not<1>(p_core_2e_decoder_2e_fmt), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<1>{0x1u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x4u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x5u}))));
	}
	// cells $flatten\core.$500 $procmux$128 $procmux$126
	if (posedge_p_clk) {
		p_core_2e_payload____rs1_24_40.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rs1_24_40.curr : p_core_2e_decoder_2e_rs1));
	}
	// cells $flatten\core.$499 $procmux$124 $procmux$122
	if (posedge_p_clk) {
		p_core_2e_payload____rd_24_39.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rd_24_39.curr : p_core_2e_decoder__instruction.slice<11,7>().val()));
	}
	// cells $flatten\core.$498 $procmux$120 $procmux$118 $flatten\core.\decoder.$644 $flatten\core.\decoder.$642 $flatten\core.\decoder.$641 $flatten\core.\decoder.$639 $flatten\core.\decoder.$637 $flatten\core.\decoder.$635 $flatten\core.\decoder.$633 $flatten\core.\decoder.$631 $flatten\core.\decoder.$629 $flatten\core.\decoder.$627 $flatten\core.\decoder.$625 $flatten\core.\decoder.$623 $flatten\core.\decoder.$621 $flatten\core.\decoder.$615 $flatten\core.\decoder.$613 $flatten\core.\decoder.$611 $flatten\core.\decoder.$608
	if (posedge_p_clk) {
		p_core_2e_payload____illegal_24_38.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____illegal_24_38.curr : or_uu<1>(ne_uu<1>(p_core_2e_decoder__instruction.slice<1,0>().val(), value<2>{0x3u}), not_u<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(p_core_2e_decoder_2e_compare, p_core_2e_decoder_2e_branch), p_core_2e_decoder_2e_adder), p_core_2e_decoder_2e_logic), p_core_2e_decoder_2e_shift), p_core_2e_decoder_2e_lui), p_core_2e_decoder_2e_auipc), p_core_2e_decoder_2e_jump), p_core_2e_decoder_2e_load), p_core_2e_decoder_2e_store), p_core_2e_decoder_2e_csr), p_core_2e_decoder_2e_ecall), p_core_2e_decoder_2e_ebreak), p_core_2e_decoder_2e_mret), p_core_2e_decoder_2e_fence__i)))));
	}
	// cells $flatten\core.$497 $procmux$116 $procmux$114
	if (posedge_p_clk) {
		p_core_2e_payload____fetch__badaddr_24_37.next = (p_core_2e_rst ? value<30>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____fetch__badaddr_24_37.curr : p_core_2e_payload____fetch__badaddr_24_29.curr));
	}
	// cells $flatten\core.$496 $procmux$112 $procmux$110
	if (posedge_p_clk) {
		p_core_2e_payload____fetch__error_24_35.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____fetch__error_24_35.curr : p_core_2e_payload____fetch__error_24_28.curr));
	}
	// cells $flatten\core.$495 $procmux$108 $procmux$106
	if (posedge_p_clk) {
		p_core_2e_payload____instruction_24_33.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____instruction_24_33.curr : p_core_2e_payload____instruction));
	}
	// cells $flatten\core.$494 $procmux$104 $procmux$102
	if (posedge_p_clk) {
		p_core_2e_payload____pc_24_31.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____pc_24_31.curr : p_core_2e_payload____pc_24_25));
	}
	// cells $flatten\core.$493 $procmux$100 $procmux$98
	if (posedge_p_clk) {
		p_core_2e_payload____fetch__badaddr_24_29.next = (p_core_2e_rst ? value<30>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____fetch__badaddr_24_29.curr : p_core_2e_fetch_2e_f__badaddr.curr));
	}
	// cells $flatten\core.$492 $procmux$96 $procmux$94
	if (posedge_p_clk) {
		p_core_2e_payload____fetch__error_24_28.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____fetch__error_24_28.curr : p_core_2e_fetch_2e_f__fetch__error.curr));
	}
	// cells $flatten\core.$491 $procmux$92 $procmux$90
	if (posedge_p_clk) {
		p_core_2e_payload____instruction_24_27.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____instruction_24_27.curr : p_core_2e_fetch_2e_f__instruction));
	}
	// cells $flatten\core.$490 $procmux$88 $procmux$86
	if (posedge_p_clk) {
		p_core_2e_payload____pc_24_26.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____pc_24_26.curr : p_core_2e_payload____pc.slice<31,0>().val()));
	}
	// cells $flatten\core.$489 $procmux$84 $procmux$82 $flatten\core.$325
	if (posedge_p_clk) {
		p_core_2e_payload____pc_24_24.next = (p_core_2e_rst ? value<33>{0xfffffffcu,0x1u} : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_payload____pc_24_24.curr : pos_u<33>(p_core_2e_fetch__a__pc)));
	}
	// cells $flatten\core.$488 $procmux$9 $procmux$7 $flatten\core.$146
	if (posedge_p_clk) {
		p_core_2e_csrf__rp____addr.next = (p_core_2e_rst ? value<13>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_csrf__rp____addr.curr : pos_u<13>(p_core_2e_fetch_2e_f__instruction.slice<31,20>().val())));
	}
	// cell $flatten\core.\gprf.\mem.$15
	if (posedge_p_clk) {
		p_core_2e_gprf_2e_mem_2e_collision.next = p_core_2e_gprf_2e_mem_2e_collision_24_next;
	}
	return converged;
}

bool p_top::commit() {
	bool changed = false;
	if (p_core_2e_m__payload____exception.commit()) changed = true;
	if (p_core_2e_csrf__rp____addr.commit()) changed = true;
	if (p_core_2e_payload____pc_24_24.commit()) changed = true;
	if (p_core_2e_payload____pc_24_26.commit()) changed = true;
	if (p_core_2e_payload____instruction_24_27.commit()) changed = true;
	if (p_core_2e_payload____fetch__error_24_28.commit()) changed = true;
	if (p_core_2e_payload____fetch__badaddr_24_29.commit()) changed = true;
	if (p_core_2e_payload____pc_24_31.commit()) changed = true;
	if (p_core_2e_payload____instruction_24_33.commit()) changed = true;
	if (p_core_2e_payload____fetch__error_24_35.commit()) changed = true;
	if (p_core_2e_payload____fetch__badaddr_24_37.commit()) changed = true;
	if (p_core_2e_payload____illegal_24_38.commit()) changed = true;
	if (p_core_2e_payload____rd_24_39.commit()) changed = true;
	if (p_core_2e_payload____rs1_24_40.commit()) changed = true;
	if (p_core_2e_payload____rd__we_24_41.commit()) changed = true;
	if (p_core_2e_payload____rs1__re_24_42.commit()) changed = true;
	if (p_core_2e_payload____src1_24_43.commit()) changed = true;
	if (p_core_2e_payload____src2_24_44.commit()) changed = true;
	if (p_core_2e_payload____store__operand_24_45.commit()) changed = true;
	if (p_core_2e_payload____bypass__x_24_46.commit()) changed = true;
	if (p_core_2e_payload____bypass__m_24_47.commit()) changed = true;
	if (p_core_2e_payload____funct3_24_48.commit()) changed = true;
	if (p_core_2e_payload____load_24_49.commit()) changed = true;
	if (p_core_2e_payload____store_24_50.commit()) changed = true;
	if (p_core_2e_payload____adder__sub_24_51.commit()) changed = true;
	if (p_core_2e_payload____logic_24_52.commit()) changed = true;
	if (p_core_2e_payload____shift_24_55.commit()) changed = true;
	if (p_core_2e_payload____direction_24_56.commit()) changed = true;
	if (p_core_2e_payload____sext_24_57.commit()) changed = true;
	if (p_core_2e_payload____jump_24_58.commit()) changed = true;
	if (p_core_2e_payload____compare_24_59.commit()) changed = true;
	if (p_core_2e_payload____branch_24_60.commit()) changed = true;
	if (p_core_2e_payload____branch__target_24_61.commit()) changed = true;
	if (p_core_2e_payload____branch__predict__taken_24_62.commit()) changed = true;
	if (p_core_2e_payload____fence__i.commit()) changed = true;
	if (p_core_2e_payload____csr_24_63.commit()) changed = true;
	if (p_core_2e_payload____csr__adr_24_64.commit()) changed = true;
	if (p_core_2e_payload____csr__we_24_65.commit()) changed = true;
	if (p_core_2e_payload____ecall_24_66.commit()) changed = true;
	if (p_core_2e_payload____ebreak_24_67.commit()) changed = true;
	if (p_core_2e_payload____mret_24_68.commit()) changed = true;
	if (p_core_2e_payload____pc_24_70.commit()) changed = true;
	if (p_core_2e_payload____instruction_24_72.commit()) changed = true;
	if (p_core_2e_payload____fetch__error_24_74.commit()) changed = true;
	if (p_core_2e_payload____fetch__badaddr_24_76.commit()) changed = true;
	if (p_core_2e_payload____illegal_24_78.commit()) changed = true;
	if (p_core_2e_payload____loadstore__misaligned_24_79.commit()) changed = true;
	if (p_core_2e_payload____ecall_24_81.commit()) changed = true;
	if (p_core_2e_payload____ebreak_24_83.commit()) changed = true;
	if (p_core_2e_payload____rd_24_85.commit()) changed = true;
	if (p_core_2e_payload____rd__we_24_87.commit()) changed = true;
	if (p_core_2e_payload____bypass__m_24_89.commit()) changed = true;
	if (p_core_2e_payload____funct3_24_91.commit()) changed = true;
	if (p_core_2e_payload____result_24_92.commit()) changed = true;
	if (p_core_2e_payload____shift_24_94.commit()) changed = true;
	if (p_core_2e_payload____load_24_96.commit()) changed = true;
	if (p_core_2e_payload____store_24_98.commit()) changed = true;
	if (p_core_2e_payload____store__data_24_99.commit()) changed = true;
	if (p_core_2e_payload____compare_24_101.commit()) changed = true;
	if (p_core_2e_payload____condition__met_24_106.commit()) changed = true;
	if (p_core_2e_payload____branch__target_24_108.commit()) changed = true;
	if (p_core_2e_payload____branch__taken.commit()) changed = true;
	if (p_core_2e_payload____branch__predict__taken_24_109.commit()) changed = true;
	if (p_core_2e_payload____csr_24_111.commit()) changed = true;
	if (p_core_2e_payload____csr__adr_24_113.commit()) changed = true;
	if (p_core_2e_payload____csr__we_24_115.commit()) changed = true;
	if (p_core_2e_payload____csr__result_24_116.commit()) changed = true;
	if (p_core_2e_payload____mret_24_117.commit()) changed = true;
	if (p_core_2e_payload____pc_24_120.commit()) changed = true;
	if (p_core_2e_payload____rd_24_122.commit()) changed = true;
	if (p_core_2e_payload____rd__we_24_124.commit()) changed = true;
	if (p_core_2e_payload____funct3_24_126.commit()) changed = true;
	if (p_core_2e_payload____result_24_128.commit()) changed = true;
	if (p_core_2e_payload____load_24_130.commit()) changed = true;
	if (p_core_2e_payload____load__data_24_131.commit()) changed = true;
	if (p_core_2e_a_2e_valid.commit()) changed = true;
	if (p_core_2e_f_2e_valid_24_1.commit()) changed = true;
	if (p_core_2e_d_2e_valid_24_1.commit()) changed = true;
	if (p_core_2e_x_2e_valid_24_1.commit()) changed = true;
	if (p_core_2e_m_2e_valid_24_1.commit()) changed = true;
	if (p_core_2e_adder_2e_x__sub.commit()) changed = true;
	if (p_core_2e_exception_2e_irq__pending____r____value.commit()) changed = true;
	if (p_core_2e_exception_2e_irq__mask____r____value.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____zero3.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____meip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____zero2.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____seip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____ueip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____mtip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____zero1.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____stip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____utip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____msip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____zero0.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____ssip.commit()) changed = true;
	if (p_core_2e_exception_2e_mip____r____usip.commit()) changed = true;
	if (p_core_2e_exception_2e_mtval____r____value.commit()) changed = true;
	if (p_core_2e_exception_2e_mcause____r____interrupt.commit()) changed = true;
	if (p_core_2e_exception_2e_mcause____r____ecode.commit()) changed = true;
	if (p_core_2e_exception_2e_mepc____r____zero.commit()) changed = true;
	if (p_core_2e_exception_2e_mscratch____r____value.commit()) changed = true;
	if (p_core_2e_exception_2e_mtvec____r____mode.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____zero3.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____meie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____zero2.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____seie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____ueie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____mtie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____zero1.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____stie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____utie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____msie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____zero0.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____ssie.commit()) changed = true;
	if (p_core_2e_exception_2e_mie____r____usie.commit()) changed = true;
	if (p_core_2e_exception_2e_misa____r____mxl.commit()) changed = true;
	if (p_core_2e_exception_2e_misa____r____zero.commit()) changed = true;
	if (p_core_2e_exception_2e_misa____r____extensions.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____sd.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____zero3.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____tsr.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____tw.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____tvm.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____mxr.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____sum.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____mprv.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____xs.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____fs.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____mpp.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____zero2.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____spp.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____mpie.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____zero1.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____spie.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____upie.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____mie.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____zero0.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____sie.commit()) changed = true;
	if (p_core_2e_exception_2e_mstatus____r____uie.commit()) changed = true;
	if (p_core_2e_exception_2e_mepc____r____base.commit()) changed = true;
	if (p_core_2e_exception_2e_mtvec____r____base.commit()) changed = true;
	if (p_core_2e_shifter_2e_m__result_24_9.commit()) changed = true;
	if (p_core_2e_shifter_2e_m__direction.commit()) changed = true;
	if (p_core_2e_fetch_2e_ibus__rdata.commit()) changed = true;
	if (p_core_2e_fetch_2e_f__badaddr.commit()) changed = true;
	if (p_core_2e_fetch_2e_f__fetch__error.commit()) changed = true;
	if (p_core_2e_fetch_2e_ibus____stb.commit()) changed = true;
	if (p_core_2e_fetch_2e_ibus____cyc.commit()) changed = true;
	if (p_core_2e_fetch_2e_ibus____adr.commit()) changed = true;
	if (p_core_2e_loadstore_2e_m__load__data.commit()) changed = true;
	if (p_core_2e_loadstore_2e_dbus____we.commit()) changed = true;
	if (p_core_2e_loadstore_2e_dbus____stb.commit()) changed = true;
	if (p_core_2e_loadstore_2e_dbus____cyc.commit()) changed = true;
	if (p_core_2e_loadstore_2e_dbus____sel.commit()) changed = true;
	if (p_core_2e_loadstore_2e_dbus____dat__w.commit()) changed = true;
	if (p_core_2e_loadstore_2e_dbus____adr.commit()) changed = true;
	if (p_core_2e_loadstore_2e_m__badaddr.commit()) changed = true;
	if (p_core_2e_loadstore_2e_m__store__error.commit()) changed = true;
	if (p_core_2e_loadstore_2e_m__load__error.commit()) changed = true;
	if (p_core_2e_gprf_2e_mem_2e___mem__r__data.commit()) changed = true;
	if (p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4.commit()) changed = true;
	if (p_core_2e_gprf_2e_mem_2e_fwd__wp__en.commit()) changed = true;
	if (p_core_2e_gprf_2e_mem_2e_fwd__wp__data.commit()) changed = true;
	if (p_core_2e_gprf_2e_mem_2e_collision.commit()) changed = true;
	if (p_dmem_2e_wbus____dat__r.commit()) changed = true;
	if (p_dmem_2e_wbus____ack.commit()) changed = true;
	if (p_dmem_2e_adr__r.commit()) changed = true;
	if (p_imem_2e_wbus____dat__r.commit()) changed = true;
	if (p_imem_2e_wbus____ack.commit()) changed = true;
	if (p_imem_2e_adr__r.commit()) changed = true;
	if (p_dummy.commit()) changed = true;
	prev_p_clk = p_clk;
	if (memory_p_core_2e_gprf_2e_mem_2e___mem.commit()) changed = true;
	return changed;
}

void p_top::debug_eval() {
	value<1> i_procmux_24_809__Y;
	value<1> i_procmux_24_788__Y;
	value<30> i_procmux_24_652__Y;
	value<31> i_procmux_24_641__Y;
	value<1> i_procmux_24_630__Y;
	value<2> i_procmux_24_617__CMP;
	value<2> i_procmux_24_616__CMP;
	value<32> i_procmux_24_612__Y;
	value<32> i_procmux_24_462__Y;
	value<2> i_procmux_24_454__CMP;
	value<2> i_procmux_24_451__CMP;
	value<2> i_procmux_24_450__CMP;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:396
	value<3> i_flatten_5c_core_2e__24_149;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_a_2e__24_43;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_f_2e__24_45;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_d_2e__24_36;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_x_2e__24_17;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_m_2e__24_40;
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:100
	value<1> i_flatten_5c_core_2e__5c_m_2e__24_38;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:141
	value<1> i_flatten_5c_core_2e__5c_decoder_2e__24_99;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:135
	value<1> i_flatten_5c_core_2e__5c_decoder_2e__24_49;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:82
	value<1> i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:86
	value<1> i_flatten_5c_core_2e__5c_exception_2e__24_11;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:86
	value<1> i_flatten_5c_core_2e__5c_exception_2e__24_3;
	// cells $flatten\core.$182 $flatten\core.$180
	p_core_2e_exception__m__fetch__misaligned = and_uu<1>(p_core_2e_payload____branch__taken.curr, reduce_bool<1>(p_core_2e_payload____branch__target_24_108.curr.slice<1,0>().val()));
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:461
	// cell $flatten\core.$184
	p_core_2e_exception__m__load__misaligned = and_uu<1>(p_core_2e_payload____load_24_96.curr, p_core_2e_payload____loadstore__misaligned_24_79.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:464
	// cell $flatten\core.$186
	p_core_2e_exception__m__store__misaligned = and_uu<1>(p_core_2e_payload____store_24_98.curr, p_core_2e_payload____loadstore__misaligned_24_79.curr);
	// connection
	p_core_2e_exception_2e_interrupt__pe__i.slice<15,12>().concat(p_core_2e_exception_2e_interrupt__pe__i.slice<10,8>()).concat(p_core_2e_exception_2e_interrupt__pe__i.slice<6,4>()).concat(p_core_2e_exception_2e_interrupt__pe__i.slice<2,0>()) = value<13>{0u};
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:79
	// cell $flatten\core.\exception.$36
	p_core_2e_exception_2e_interrupt__pe__i.slice<3>() = and_uu<1>(p_core_2e_exception_2e_mip____r____msip.curr, p_core_2e_exception_2e_mie____r____msie.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:80
	// cell $flatten\core.\exception.$38
	p_core_2e_exception_2e_interrupt__pe__i.slice<7>() = and_uu<1>(p_core_2e_exception_2e_mip____r____mtip.curr, p_core_2e_exception_2e_mie____r____mtie.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:81
	// cell $flatten\core.\exception.$40
	p_core_2e_exception_2e_interrupt__pe__i.slice<11>() = and_uu<1>(p_core_2e_exception_2e_mip____r____meip.curr, p_core_2e_exception_2e_mie____r____meie.curr);
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<15,12>().concat(p_core_2e_exception_2e_trap__pe__i.slice<10,8>()) = value<7>{0u};
	// cells $flatten\core.$182 $flatten\core.$180
	p_core_2e_exception_2e_trap__pe__i.slice<0>() = p_core_2e_exception__m__fetch__misaligned;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<1>() = p_core_2e_payload____fetch__error_24_74.curr;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<2>() = p_core_2e_payload____illegal_24_78.curr;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<3>() = p_core_2e_payload____ebreak_24_83.curr;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:461
	// cell $flatten\core.$184
	p_core_2e_exception_2e_trap__pe__i.slice<4>() = p_core_2e_exception__m__load__misaligned;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<5>() = p_core_2e_loadstore_2e_m__load__error.curr;
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:464
	// cell $flatten\core.$186
	p_core_2e_exception_2e_trap__pe__i.slice<6>() = p_core_2e_exception__m__store__misaligned;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<7>() = p_core_2e_loadstore_2e_m__store__error.curr;
	// connection
	p_core_2e_exception_2e_trap__pe__i.slice<11>() = p_core_2e_payload____ecall_24_81.curr;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:82
	// cell $flatten\core.\exception.\trap_pe.$2
	i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 = logic_not<1>(p_core_2e_exception_2e_trap__pe__i);
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/lib/coding.py:82
	// cell $flatten\core.\exception.\interrupt_pe.$2
	p_core_2e_exception_2e_interrupt__pe_2e_n = logic_not<1>(p_core_2e_exception_2e_interrupt__pe__i);
	// connection
	p_core_2e_exception_2e_trap__pe_2e_n = i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1;
	// cells $flatten\core.\exception.$48 $flatten\core.\exception.$46 $flatten\core.\exception.$44 $flatten\core.\exception.\interrupt_pe.$2 $flatten\core.\exception.$42
	p_core_2e_exception_2e_m__raise = or_uu<1>(not_u<1>(p_core_2e_exception_2e_trap__pe_2e_n), and_uu<1>(not_u<1>(p_core_2e_exception_2e_interrupt__pe_2e_n), p_core_2e_exception_2e_mstatus____r____mie.curr));
	// cells $flatten\core.\d.$31 $flatten\core.\d.$29 $flatten\core.\d.$27 $flatten\core.\d.$23 $flatten\core.\d.$21 $flatten\core.\d.$19
	p_core_2e_d_2e_kill_24_15 = or_uu<1>(and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_payload____branch__predict__taken_24_109.curr), p_core_2e_payload____branch__taken.curr), p_core_2e_x_2e_valid_24_1.curr), and_uu<1>(or_uu<1>(p_core_2e_exception_2e_m__raise, p_core_2e_payload____mret_24_117.curr), p_core_2e_x_2e_valid_24_1.curr));
	// connection
	p_core_2e_decoder_2e_opcode = p_core_2e_payload____instruction_24_27.curr.slice<6,2>().val();
	// connection
	p_core_2e_decoder_2e_funct3_24_1 = p_core_2e_payload____instruction_24_27.curr.slice<14,12>().val();
	// cells $flatten\core.\x.$9 $flatten\core.\x.$7
	p_core_2e_x_2e_valid_24_4 = and_uu<1>(p_core_2e_d_2e_valid_24_1.curr, not_u<1>(p_core_2e_d_2e_kill_24_15));
	// cells $procmux$481 $procmux$482_CMP0 $procmux$483_CMP0 $procmux$484_CMP0 $procmux$485_CMP0 $procmux$486_CMP0 $procmux$487_CMP0 $procmux$488_CMP0 $procmux$489_CMP0 $procmux$490_CMP0 $procmux$491_CMP0
	p_core_2e_decoder_2e_fmt = (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x3u}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x4u}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x8u}) ? value<3>{0x2u} : (logic_not<1>(p_core_2e_decoder_2e_opcode) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}) ? value<3>{0x3u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x19u}) ? value<3>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1bu}) ? value<3>{0x5u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x5u}) ? value<3>{0x4u} : (eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0xdu}) ? value<3>{0x4u} : value<3>{0u}))))))))));
	// connection
	p_core_2e_decoder_2e_simm12 = p_core_2e_payload____instruction_24_27.curr.slice<31,25>().concat(p_core_2e_payload____instruction_24_27.curr.slice<11,7>()).val();
	// connection
	p_core_2e_decoder_2e_bimm12 = p_core_2e_payload____instruction_24_27.curr.slice<31>().concat(p_core_2e_payload____instruction_24_27.curr.slice<7>()).concat(p_core_2e_payload____instruction_24_27.curr.slice<30,25>()).concat(p_core_2e_payload____instruction_24_27.curr.slice<11,8>()).concat(value<1>{0u}).val();
	// connection
	p_core_2e_decoder_2e_jimm20 = p_core_2e_payload____instruction_24_27.curr.slice<31>().concat(p_core_2e_payload____instruction_24_27.curr.slice<19,12>()).concat(p_core_2e_payload____instruction_24_27.curr.slice<20>()).concat(p_core_2e_payload____instruction_24_27.curr.slice<30,21>()).concat(value<1>{0u}).val();
	// connection
	p_core_2e_decoder_2e_iimm12 = p_core_2e_payload____instruction_24_27.curr.slice<31,20>().val();
	// cells $procmux$475 $procmux$476_CMP0 $procmux$477_CMP0 $procmux$478_CMP0 $procmux$479_CMP0 $procmux$480_CMP0 $flatten\core.\decoder.$12 $flatten\core.\decoder.$7 $flatten\core.\decoder.$5 $flatten\core.\decoder.$3
	p_core_2e_decoder_2e_immediate = (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x5u}) ? pos_s<32>(p_core_2e_decoder_2e_jimm20) : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x4u}) ? p_core_2e_payload____instruction_24_27.curr.slice<31,12>().concat(value<12>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x3u}) ? pos_s<32>(p_core_2e_decoder_2e_bimm12) : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x2u}) ? pos_s<32>(p_core_2e_decoder_2e_simm12) : (eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x1u}) ? pos_s<32>(p_core_2e_decoder_2e_iimm12) : value<32>{0u})))));
	// cells $flatten\core.\decoder.$40 $flatten\core.\decoder.$38 $flatten\core.\decoder.$36 $flatten\core.\decoder.$34 $flatten\core.\decoder.$32 $flatten\core.\decoder.$30 $flatten\core.\decoder.$28
	p_core_2e_decoder_2e_rs1__re = or_uu<1>(or_uu<1>(or_uu<1>(logic_not<1>(p_core_2e_decoder_2e_fmt), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<1>{0x1u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x2u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x3u}));
	// cells $flatten\core.\decoder.$398 $flatten\core.\decoder.$392 $flatten\core.\decoder.$390 $flatten\core.\decoder.$388 $flatten\core.\decoder.$380
	p_core_2e_decoder_2e_jump = or_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1bu}), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x19u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)));
	// cells $flatten\core.\decoder.$170 $flatten\core.\decoder.$164 $flatten\core.\decoder.$162 $flatten\core.\decoder.$160 $flatten\core.\decoder.$158 $flatten\core.\decoder.$152 $flatten\core.\decoder.$150 $flatten\core.\decoder.$148 $flatten\core.\decoder.$146 $flatten\core.\decoder.$140 $flatten\core.\decoder.$138 $flatten\core.\decoder.$136 $flatten\core.\decoder.$134 $flatten\core.\decoder.$128 $flatten\core.\decoder.$126 $flatten\core.\decoder.$124 $flatten\core.\decoder.$122 $flatten\core.\decoder.$116 $flatten\core.\decoder.$114 $flatten\core.\decoder.$112 $flatten\core.\decoder.$106 $flatten\core.\decoder.$104 $flatten\core.\decoder.$102
	p_core_2e_decoder_2e_branch = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x18u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u})));
	// cells $flatten\core.\f.$44 $flatten\core.\f.$42 $flatten\core.\f.$40 $flatten\core.\f.$38 $flatten\core.\f.$36 $flatten\core.\f.$34 $flatten\core.\f.$32 $flatten\core.\f.$30 $flatten\core.\f.$28 $flatten\core.\f.$26 $flatten\core.\f.$24 $flatten\core.\f.$20
	p_core_2e_f_2e_kill_24_16 = or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_payload____fence__i.curr, p_core_2e_x_2e_valid_24_4), and_uu<1>(and_uu<1>(p_core_2e_payload____branch__predict__taken_24_109.curr, not_u<1>(p_core_2e_payload____branch__taken.curr)), p_core_2e_x_2e_valid_24_1.curr)), and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_payload____branch__predict__taken_24_109.curr), p_core_2e_payload____branch__taken.curr), p_core_2e_x_2e_valid_24_1.curr)), and_uu<1>(or_uu<1>(p_core_2e_exception_2e_m__raise, p_core_2e_payload____mret_24_117.curr), p_core_2e_x_2e_valid_24_1.curr));
	// cells $flatten\core.\predict.$6 $flatten\core.\predict.$4 $flatten\core.\predict.$2
	p_core_2e_predict_2e_d__fetch__misaligned = or_uu<1>(reduce_bool<1>(p_core_2e_payload____pc_24_26.curr.slice<1,0>().val()), reduce_bool<1>(p_core_2e_decoder_2e_immediate.slice<1,0>().val()));
	// cells $procmux$842 $flatten\core.\predict.$6 $flatten\core.\predict.$4 $flatten\core.\predict.$2 $procmux$840 $flatten\core.\predict.$17 $flatten\core.\predict.$15
	p_core_2e_predict_2e_d__branch__taken = (p_core_2e_predict_2e_d__fetch__misaligned ? value<1>{0u} : (p_core_2e_decoder_2e_branch ? p_core_2e_decoder_2e_immediate.slice<31>().val() : and_uu<1>(p_core_2e_decoder_2e_jump, not_u<1>(p_core_2e_decoder_2e_rs1__re))));
	// cells $flatten\core.\d.$10 $flatten\core.\d.$8
	p_core_2e_d_2e_valid_24_4 = and_uu<1>(p_core_2e_f_2e_valid_24_1.curr, not_u<1>(p_core_2e_f_2e_kill_24_16));
	// cells $flatten\core.\a.$42 $flatten\core.\a.$40 $flatten\core.\a.$38 $flatten\core.\a.$36 $flatten\core.\a.$34 $flatten\core.\a.$32 $flatten\core.\a.$30 $flatten\core.\a.$28 $flatten\core.\a.$26 $flatten\core.\a.$24 $flatten\core.\a.$22 $flatten\core.\a.$20 $flatten\core.\a.$18 $flatten\core.\a.$14
	p_core_2e_a_2e_kill_24_10 = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_payload____fence__i.curr, p_core_2e_x_2e_valid_24_4), and_uu<1>(p_core_2e_predict_2e_d__branch__taken, p_core_2e_d_2e_valid_24_4)), and_uu<1>(and_uu<1>(p_core_2e_payload____branch__predict__taken_24_109.curr, not_u<1>(p_core_2e_payload____branch__taken.curr)), p_core_2e_x_2e_valid_24_1.curr)), and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_payload____branch__predict__taken_24_109.curr), p_core_2e_payload____branch__taken.curr), p_core_2e_x_2e_valid_24_1.curr)), and_uu<1>(or_uu<1>(p_core_2e_exception_2e_m__raise, p_core_2e_payload____mret_24_117.curr), p_core_2e_x_2e_valid_24_1.curr));
	// connection
	p_core_2e_decoder_2e_rs2 = p_core_2e_payload____instruction_24_27.curr.slice<24,20>().val();
	// connection
	p_core_2e_decoder_2e_rs1 = p_core_2e_payload____instruction_24_27.curr.slice<19,15>().val();
	// connection
	p_core_2e_decoder_2e_funct7 = p_core_2e_payload____instruction_24_27.curr.slice<31,25>().val();
	// cells $flatten\core.\decoder.$50 $flatten\core.\decoder.$48 $flatten\core.\decoder.$46 $flatten\core.\decoder.$44 $flatten\core.\decoder.$42
	i_flatten_5c_core_2e__5c_decoder_2e__24_49 = or_uu<1>(or_uu<1>(logic_not<1>(p_core_2e_decoder_2e_fmt), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x2u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<2>{0x3u}));
	// cells $flatten\core.\f.$11 $flatten\core.\f.$9
	p_core_2e_f_2e_valid_24_7 = and_uu<1>(p_core_2e_a_2e_valid.curr, not_u<1>(p_core_2e_a_2e_kill_24_10));
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:111
	// cell $procmux$856
	p_core_2e_fetch_2e_f__busy = (p_core_2e_fetch_2e_f__fetch__error.curr ? value<1>{0u} : p_core_2e_fetch_2e_ibus____cyc.curr);
	// connection
	p_core_2e_decoder_2e_rs2__re = i_flatten_5c_core_2e__5c_decoder_2e__24_49;
	// cells $flatten\core.\decoder.$570 $flatten\core.\decoder.$564 $flatten\core.\decoder.$562 $flatten\core.\decoder.$560 $flatten\core.\decoder.$558 $flatten\core.\decoder.$552 $flatten\core.\decoder.$550 $flatten\core.\decoder.$548 $flatten\core.\decoder.$546 $flatten\core.\decoder.$540 $flatten\core.\decoder.$538 $flatten\core.\decoder.$536 $flatten\core.\decoder.$534 $flatten\core.\decoder.$528 $flatten\core.\decoder.$526 $flatten\core.\decoder.$524 $flatten\core.\decoder.$522 $flatten\core.\decoder.$516 $flatten\core.\decoder.$514 $flatten\core.\decoder.$512 $flatten\core.\decoder.$506 $flatten\core.\decoder.$504 $flatten\core.\decoder.$502
	p_core_2e_decoder_2e_csr = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u})), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x3u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u})));
	// cells $procmux$20 $flatten\core.$210 $flatten\core.$208 $flatten\core.$212
	p_core_2e_d__raw__rs2__m = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_85.curr), p_core_2e_payload____rd__we_24_87.curr) ? eq_uu<1>(p_core_2e_payload____rd_24_85.curr, p_core_2e_decoder_2e_rs2) : value<1>{0u});
	// cells $procmux$18 $flatten\core.$204 $flatten\core.$202 $flatten\core.$206
	p_core_2e_d__raw__rs1__m = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_85.curr), p_core_2e_payload____rd__we_24_87.curr) ? eq_uu<1>(p_core_2e_payload____rd_24_85.curr, p_core_2e_decoder_2e_rs1) : value<1>{0u});
	// cells $procmux$16 $flatten\core.$198 $flatten\core.$196 $flatten\core.$200
	p_core_2e_d__raw__rs2__x = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_39.curr), p_core_2e_payload____rd__we_24_41.curr) ? eq_uu<1>(p_core_2e_payload____rd_24_39.curr, p_core_2e_decoder_2e_rs2) : value<1>{0u});
	// cells $procmux$14 $flatten\core.$192 $flatten\core.$190 $flatten\core.$194
	p_core_2e_d__raw__rs1__x = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_39.curr), p_core_2e_payload____rd__we_24_41.curr) ? eq_uu<1>(p_core_2e_payload____rd_24_39.curr, p_core_2e_decoder_2e_rs1) : value<1>{0u});
	// cells $procmux$897 $flatten\core.\loadstore.$90
	p_core_2e_loadstore_2e_m__busy = (or_uu<1>(p_core_2e_loadstore_2e_m__load__error.curr, p_core_2e_loadstore_2e_m__store__error.curr) ? value<1>{0u} : p_core_2e_loadstore_2e_dbus____cyc.curr);
	// cells $procmux$28 $flatten\core.$232 $flatten\core.$230
	p_core_2e_d__raw__csr__m = (p_core_2e_payload____csr__we_24_115.curr ? eq_ss<1>(pos_u<32>(p_core_2e_payload____csr__adr_24_113.curr), p_core_2e_decoder_2e_immediate) : value<1>{0u});
	// cells $procmux$26 $flatten\core.$228 $flatten\core.$226
	p_core_2e_d__raw__csr__x = (p_core_2e_payload____csr__we_24_65.curr ? eq_ss<1>(pos_u<32>(p_core_2e_payload____csr__adr_24_64.curr), p_core_2e_decoder_2e_immediate) : value<1>{0u});
	// cells $flatten\core.\decoder.$100 $flatten\core.\decoder.$96 $flatten\core.\decoder.$94 $flatten\core.\decoder.$92 $flatten\core.\decoder.$90 $flatten\core.\decoder.$88 $flatten\core.\decoder.$86 $flatten\core.\decoder.$82 $flatten\core.\decoder.$80 $flatten\core.\decoder.$78 $flatten\core.\decoder.$76 $flatten\core.\decoder.$74 $flatten\core.\decoder.$72 $flatten\core.\decoder.$66 $flatten\core.\decoder.$64 $flatten\core.\decoder.$62 $flatten\core.\decoder.$56 $flatten\core.\decoder.$54 $flatten\core.\decoder.$52
	i_flatten_5c_core_2e__5c_decoder_2e__24_99 = or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x3u}))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x3u})), logic_not<1>(p_core_2e_decoder_2e_funct7)));
	// connection
	p_core_2e_decoder_2e_compare = i_flatten_5c_core_2e__5c_decoder_2e__24_99;
	// connection
	p_core_2e_data__sel__w__offset = p_core_2e_payload____result_24_128.curr.slice<1,0>().val();
	// cells $flatten\core.\decoder.$208 $flatten\core.\decoder.$204 $flatten\core.\decoder.$202 $flatten\core.\decoder.$200 $flatten\core.\decoder.$198 $flatten\core.\decoder.$196 $flatten\core.\decoder.$194 $flatten\core.\decoder.$190 $flatten\core.\decoder.$188 $flatten\core.\decoder.$186 $flatten\core.\decoder.$184 $flatten\core.\decoder.$182 $flatten\core.\decoder.$176 $flatten\core.\decoder.$174 $flatten\core.\decoder.$172
	p_core_2e_decoder_2e_adder = or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u})));
	// cells $flatten\core.\m.$39 $flatten\core.\m.$37 $procmux$897 $flatten\core.\loadstore.$90 $flatten\core.\m.$35 $flatten\core.\m.$33 $flatten\core.\m.$31 $flatten\core.\m.$29 $procmux$856
	i_flatten_5c_core_2e__5c_m_2e__24_38 = or_uu<1>(or_uu<1>(or_uu<1>(p_core_2e_fetch_2e_ibus____cyc.curr, and_uu<1>(p_core_2e_fetch_2e_f__busy, p_core_2e_f_2e_valid_24_7)), and_uu<1>(p_core_2e_loadstore_2e_dbus____cyc.curr, p_core_2e_x_2e_valid_24_4)), and_uu<1>(p_core_2e_loadstore_2e_m__busy, p_core_2e_x_2e_valid_24_1.curr));
	// cells $procmux$32 $flatten\core.$256 $flatten\core.$254 $procmux$28 $flatten\core.$232 $flatten\core.$230 $flatten\core.$252 $flatten\core.$250 $flatten\core.$248
	p_core_2e_d__lock__m = (p_core_2e_payload____bypass__m_24_89.curr ? value<1>{0u} : or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder_2e_rs1__re, p_core_2e_d__raw__rs1__m), and_uu<1>(p_core_2e_decoder_2e_rs2__re, p_core_2e_d__raw__rs2__m)), and_uu<1>(p_core_2e_decoder_2e_csr, p_core_2e_d__raw__csr__m)));
	// cells $procmux$30 $flatten\core.$244 $flatten\core.$242 $procmux$26 $flatten\core.$228 $flatten\core.$226 $flatten\core.$240 $flatten\core.$238 $flatten\core.$236
	p_core_2e_d__lock__x = (p_core_2e_payload____bypass__x_24_46.curr ? value<1>{0u} : or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder_2e_rs1__re, p_core_2e_d__raw__rs1__x), and_uu<1>(p_core_2e_decoder_2e_rs2__re, p_core_2e_d__raw__rs2__x)), and_uu<1>(p_core_2e_decoder_2e_csr, p_core_2e_d__raw__csr__x)));
	// cells $flatten\core.\decoder.$288 $flatten\core.\decoder.$284 $flatten\core.\decoder.$282 $flatten\core.\decoder.$280 $flatten\core.\decoder.$278 $flatten\core.\decoder.$276 $flatten\core.\decoder.$274 $flatten\core.\decoder.$270 $flatten\core.\decoder.$268 $flatten\core.\decoder.$266 $flatten\core.\decoder.$264 $flatten\core.\decoder.$262 $flatten\core.\decoder.$260 $flatten\core.\decoder.$256 $flatten\core.\decoder.$254 $flatten\core.\decoder.$252 $flatten\core.\decoder.$250 $flatten\core.\decoder.$248 $flatten\core.\decoder.$246 $flatten\core.\decoder.$240 $flatten\core.\decoder.$238 $flatten\core.\decoder.$236 $flatten\core.\decoder.$234 $flatten\core.\decoder.$228 $flatten\core.\decoder.$226 $flatten\core.\decoder.$224 $flatten\core.\decoder.$218 $flatten\core.\decoder.$216 $flatten\core.\decoder.$214
	p_core_2e_decoder_2e_logic = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u})), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u}))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x6u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x7u})), logic_not<1>(p_core_2e_decoder_2e_funct7)));
	// connection
	i_flatten_5c_core_2e__5c_m_2e__24_40 = i_flatten_5c_core_2e__5c_m_2e__24_38;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:40
	// cell $flatten\core.\adder.$12
	p_core_2e_adder_2e_x__sub__carry.concat(p_core_2e_adder_2e_x__sub__result) = sub_uu<33>(p_core_2e_payload____src1_24_43.curr, p_core_2e_payload____src2_24_44.curr);
	// connection
	i_flatten_5c_core_2e__24_149.slice<2>() = value<1>{0x1u};
	// connection
	i_flatten_5c_core_2e__24_149.slice<1,0>() = p_core_2e_payload____funct3_24_48.curr.slice<1,0>().val();
	// connection
	p_core_2e_m_2e_stall_24_8 = i_flatten_5c_core_2e__5c_m_2e__24_40;
	// connection
	i_flatten_5c_core_2e__5c_x_2e__24_17 = i_flatten_5c_core_2e__5c_m_2e__24_38;
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:31
	// cell $flatten\core.\adder.$4
	p_core_2e_adder_2e_x__add__carry.concat(p_core_2e_adder_2e_x__add__result) = add_uu<33>(p_core_2e_payload____src1_24_43.curr, p_core_2e_payload____src2_24_44.curr);
	// cells $flatten\core.\decoder.$370 $flatten\core.\decoder.$366 $flatten\core.\decoder.$364 $flatten\core.\decoder.$362 $flatten\core.\decoder.$360 $flatten\core.\decoder.$358 $flatten\core.\decoder.$356 $flatten\core.\decoder.$352 $flatten\core.\decoder.$350 $flatten\core.\decoder.$348 $flatten\core.\decoder.$346 $flatten\core.\decoder.$344 $flatten\core.\decoder.$342 $flatten\core.\decoder.$338 $flatten\core.\decoder.$336 $flatten\core.\decoder.$334 $flatten\core.\decoder.$332 $flatten\core.\decoder.$330 $flatten\core.\decoder.$328 $flatten\core.\decoder.$324 $flatten\core.\decoder.$322 $flatten\core.\decoder.$320 $flatten\core.\decoder.$318 $flatten\core.\decoder.$316 $flatten\core.\decoder.$314 $flatten\core.\decoder.$310 $flatten\core.\decoder.$308 $flatten\core.\decoder.$306 $flatten\core.\decoder.$304 $flatten\core.\decoder.$302 $flatten\core.\decoder.$298 $flatten\core.\decoder.$296 $flatten\core.\decoder.$294 $flatten\core.\decoder.$292 $flatten\core.\decoder.$290
	p_core_2e_decoder_2e_shift = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u})), logic_not<1>(p_core_2e_decoder_2e_funct7)), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x4u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u}))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), logic_not<1>(p_core_2e_decoder_2e_funct7))), and_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xcu}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u})), eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u})));
	// cells $flatten\core.$262 $flatten\core.$260 $procmux$32 $flatten\core.$256 $flatten\core.$254 $procmux$28 $flatten\core.$232 $flatten\core.$230 $flatten\core.$252 $flatten\core.$250 $flatten\core.$248 $flatten\core.$258 $procmux$30 $flatten\core.$244 $flatten\core.$242 $procmux$26 $flatten\core.$228 $flatten\core.$226 $flatten\core.$240 $flatten\core.$238 $flatten\core.$236
	p_core_2e_d__d__lock = or_uu<1>(and_uu<1>(p_core_2e_d__lock__x, p_core_2e_x_2e_valid_24_4), and_uu<1>(p_core_2e_d__lock__m, p_core_2e_x_2e_valid_24_1.curr));
	// connection
	p_core_2e_x_2e_stall_24_5 = i_flatten_5c_core_2e__5c_x_2e__24_17;
	// cells $flatten\core.\data_sel.$21 $flatten\core.\data_sel.$20
	p_core_2e_data__sel_2e_w__byte = shift_uu<8>(p_core_2e_payload____load__data_24_131.curr, mul_uu<6>(p_core_2e_data__sel__w__offset, value<4>{0x8u}));
	// cells $flatten\core.\data_sel.$25 $flatten\core.\data_sel.$24
	p_core_2e_data__sel_2e_w__half = shift_uu<16>(p_core_2e_payload____load__data_24_131.curr, mul_uu<6>(p_core_2e_data__sel__w__offset.slice<1>().val(), value<5>{0x10u}));
	// cells $flatten\core.$168 $flatten\core.$166 $flatten\core.$165 $flatten\core.$158 $flatten\core.$157 $flatten\core.$155 $flatten\core.$162 $flatten\core.$160
	p_core_2e_logic__src1 = (p_core_2e_payload____csr_24_63.curr ? (and_uu<1>(p_core_2e_payload____funct3_24_48.curr.slice<1>().val(), p_core_2e_payload____funct3_24_48.curr.slice<0>().val()) ? not_u<32>((p_core_2e_payload____funct3_24_48.curr.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1_24_40.curr) : p_core_2e_payload____src1_24_43.curr)) : (p_core_2e_payload____funct3_24_48.curr.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1_24_40.curr) : p_core_2e_payload____src1_24_43.curr)) : p_core_2e_payload____src1_24_43.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:399
	// cell $flatten\core.$152
	p_core_2e_logic__op = (p_core_2e_payload____csr_24_63.curr ? i_flatten_5c_core_2e__24_149 : p_core_2e_payload____funct3_24_48.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:211
	// cell $flatten\core.\decoder.$376
	p_core_2e_decoder_2e_lui = eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0xdu});
	// cells $flatten\core.\adder.$10 $flatten\core.\adder.$8 $flatten\core.\adder.$6
	p_core_2e_adder_2e_x__add__overflow = and_uu<1>(and_uu<1>(not_u<1>(p_core_2e_payload____src1_24_43.curr.slice<31>().val()), p_core_2e_payload____src2_24_44.curr.slice<31>().val()), p_core_2e_adder_2e_x__add__result.slice<31>().val());
	// cells $flatten\core.\adder.$18 $flatten\core.\adder.$16 $flatten\core.\adder.$14
	p_core_2e_adder_2e_x__sub__overflow = and_uu<1>(ne_uu<1>(p_core_2e_payload____src1_24_43.curr.slice<31>().val(), p_core_2e_payload____src2_24_44.curr.slice<31>().val()), eq_uu<1>(p_core_2e_adder_2e_x__sub__result.slice<31>().val(), p_core_2e_payload____src2_24_44.curr.slice<31>().val()));
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:212
	// cell $flatten\core.\decoder.$378
	p_core_2e_decoder_2e_auipc = eq_uu<1>(p_core_2e_decoder_2e_opcode, value<3>{0x5u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:44
	// cell $procmux$462
	i_procmux_24_462__Y = (p_core_2e_adder_2e_x__sub.curr ? p_core_2e_adder_2e_x__sub__result : p_core_2e_adder_2e_x__add__result);
	// \src: /home/devector/Documents/riscv/minerva/minerva/stage.py:49
	// cell $flatten\core.$293
	p_core_2e_csrf__wp____addr = pos_u<13>(p_core_2e_payload____csr__adr_24_113.curr);
	// connection
	p_core_2e_adder_2e_x__result = i_procmux_24_462__Y;
	// cells $procmux$456 $flatten\core.\adder.$18 $flatten\core.\adder.$16 $flatten\core.\adder.$14 $flatten\core.\adder.$10 $flatten\core.\adder.$8 $flatten\core.\adder.$6
	p_core_2e_adder_2e_x__overflow = (p_core_2e_adder_2e_x__sub.curr ? p_core_2e_adder_2e_x__sub__overflow : p_core_2e_adder_2e_x__add__overflow);
	// cells $procmux$24 $flatten\core.$222 $flatten\core.$220 $flatten\core.$224
	p_core_2e_d__raw__rs2__w = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_122.curr), p_core_2e_payload____rd__we_24_124.curr) ? eq_uu<1>(p_core_2e_payload____rd_24_122.curr, p_core_2e_decoder_2e_rs2) : value<1>{0u});
	// cells $procmux$438 $procmux$439_CMP0 $procmux$440_CMP0 $procmux$441_CMP0 $procmux$442_CMP0 $procmux$443_CMP0 $flatten\core.\data_sel.$33 $flatten\core.\data_sel.$31 $flatten\core.\data_sel.$29 $flatten\core.\data_sel.$27
	p_core_2e_data__sel_2e_w__load__result = (eq_uu<1>(p_core_2e_payload____funct3_24_126.curr, value<3>{0x2u}) ? p_core_2e_payload____load__data_24_131.curr : (eq_uu<1>(p_core_2e_payload____funct3_24_126.curr, value<3>{0x5u}) ? pos_u<32>(value<1>{0u}.concat(p_core_2e_data__sel_2e_w__half).val()) : (eq_uu<1>(p_core_2e_payload____funct3_24_126.curr, value<3>{0x1u}) ? pos_s<32>(p_core_2e_data__sel_2e_w__half) : (eq_uu<1>(p_core_2e_payload____funct3_24_126.curr, value<3>{0x4u}) ? pos_u<32>(value<1>{0u}.concat(p_core_2e_data__sel_2e_w__byte).val()) : (logic_not<1>(p_core_2e_payload____funct3_24_126.curr) ? pos_s<32>(p_core_2e_data__sel_2e_w__byte) : value<32>{0u})))));
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:37
	// cell $flatten\core.\shifter.$16
	p_core_2e_shifter_2e_m__result = (p_core_2e_shifter_2e_m__direction.curr ? p_core_2e_shifter_2e_m__result_24_9.curr : p_core_2e_shifter_2e_m__result_24_9.curr.slice<0>().concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<1>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<2>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<3>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<4>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<5>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<6>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<7>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<8>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<9>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<10>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<11>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<12>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<13>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<14>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<15>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<16>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<17>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<18>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<19>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<20>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<21>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<22>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<23>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<24>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<25>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<26>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<27>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<28>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<29>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<30>()).concat(p_core_2e_shifter_2e_m__result_24_9.curr.slice<31>()).val());
	// cells $flatten\core.\decoder.$456 $flatten\core.\decoder.$450 $flatten\core.\decoder.$448 $flatten\core.\decoder.$446 $flatten\core.\decoder.$444 $flatten\core.\decoder.$438 $flatten\core.\decoder.$436 $flatten\core.\decoder.$434 $flatten\core.\decoder.$432 $flatten\core.\decoder.$426 $flatten\core.\decoder.$424 $flatten\core.\decoder.$422 $flatten\core.\decoder.$420 $flatten\core.\decoder.$414 $flatten\core.\decoder.$412 $flatten\core.\decoder.$410 $flatten\core.\decoder.$404 $flatten\core.\decoder.$402 $flatten\core.\decoder.$400
	p_core_2e_decoder_2e_load = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x4u}))), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}))), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u}))), and_uu<1>(logic_not<1>(p_core_2e_decoder_2e_opcode), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})));
	// connection
	p_core_2e_decoder_2e_funct12 = p_core_2e_payload____instruction_24_27.curr.slice<31,20>().val();
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:492
	// cell $flatten\core.\m.$21
	p_core_2e_m_2e_kill_24_17 = and_uu<1>(p_core_2e_m__payload____exception.curr, p_core_2e_m_2e_valid_24_1.curr);
	// connection
	p_core_2e_pc__sel__f__pc = p_core_2e_payload____pc_24_24.curr.slice<31,0>().val();
	// cells $flatten\core.\d.$37 $flatten\core.\d.$33 $flatten\core.$262 $flatten\core.$260 $procmux$32 $flatten\core.$256 $flatten\core.$254 $procmux$28 $flatten\core.$232 $flatten\core.$230 $flatten\core.$252 $flatten\core.$250 $flatten\core.$248 $flatten\core.$258 $procmux$30 $flatten\core.$244 $flatten\core.$242 $procmux$26 $flatten\core.$228 $flatten\core.$226 $flatten\core.$240 $flatten\core.$238 $flatten\core.$236
	i_flatten_5c_core_2e__5c_d_2e__24_36 = or_uu<1>(and_uu<1>(p_core_2e_d__d__lock, p_core_2e_d_2e_valid_24_4), p_core_2e_x_2e_stall_24_5);
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:447
	// cell $flatten\core.$178
	p_core_2e_compare__zero = eq_uu<1>(p_core_2e_payload____src1_24_43.curr, p_core_2e_payload____src2_24_44.curr);
	// connection
	p_core_2e_compare__negative = p_core_2e_adder_2e_x__result.slice<31>().val();
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/adder.py:44
	// cell $procmux$459
	p_core_2e_adder_2e_x__carry = (p_core_2e_adder_2e_x__sub.curr ? p_core_2e_adder_2e_x__sub__carry : p_core_2e_adder_2e_x__add__carry);
	// cells $procmux$835 $procmux$836_CMP0 $procmux$837_CMP0 $procmux$838_CMP0 $flatten\core.\logic.$6 $flatten\core.\logic.$4 $flatten\core.\logic.$2
	p_core_2e_logic_2e_result = (eq_uu<1>(p_core_2e_logic__op, value<3>{0x7u}) ? and_uu<32>(p_core_2e_logic__src1, p_core_2e_payload____src2_24_44.curr) : (eq_uu<1>(p_core_2e_logic__op, value<3>{0x6u}) ? or_uu<32>(p_core_2e_logic__src1, p_core_2e_payload____src2_24_44.curr) : (eq_uu<1>(p_core_2e_logic__op, value<3>{0x4u}) ? xor_uu<32>(p_core_2e_logic__src1, p_core_2e_payload____src2_24_44.curr) : value<32>{0u})));
	// cells $procmux$22 $flatten\core.$216 $flatten\core.$214 $flatten\core.$218
	p_core_2e_d__raw__rs1__w = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_122.curr), p_core_2e_payload____rd__we_24_124.curr) ? eq_uu<1>(p_core_2e_payload____rd_24_122.curr, p_core_2e_decoder_2e_rs1) : value<1>{0u});
	// cells $flatten\core.\decoder.$490 $flatten\core.\decoder.$484 $flatten\core.\decoder.$482 $flatten\core.\decoder.$480 $flatten\core.\decoder.$478 $flatten\core.\decoder.$472 $flatten\core.\decoder.$470 $flatten\core.\decoder.$468 $flatten\core.\decoder.$462 $flatten\core.\decoder.$460 $flatten\core.\decoder.$458
	p_core_2e_decoder_2e_store = or_uu<1>(or_uu<1>(and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0x8u}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1)), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0x8u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}))), and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<4>{0x8u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<2>{0x2u})));
	// cells $flatten\core.\decoder.$582 $flatten\core.\decoder.$580 $flatten\core.\decoder.$578
	p_core_2e_decoder_2e_privileged = and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<5>{0x1cu}), logic_not<1>(p_core_2e_decoder_2e_funct3_24_1));
	// cells $flatten\core.\predict.$13 $flatten\core.\predict.$11 $flatten\core.\predict.$9
	p_core_2e_predict_2e_d__branch__target = add_ss<34>(pos_u<33>(p_core_2e_payload____pc_24_26.curr), pos_s<33>(p_core_2e_decoder_2e_immediate)).slice<31,0>().val();
	// cells $procmux$52 $flatten\core.$287 $flatten\core.$285 $flatten\core.$283 $flatten\core.$291 $flatten\core.$289
	p_core_2e_csrf__wp____en = (and_uu<1>(not_u<1>(p_core_2e_exception_2e_m__raise), not_u<1>(p_core_2e_m_2e_stall_24_8)) ? and_uu<1>(and_uu<1>(p_core_2e_payload____csr_24_111.curr, p_core_2e_payload____csr__we_24_115.curr), p_core_2e_x_2e_valid_24_1.curr) : value<1>{0u});
	// connection
	i_flatten_5c_core_2e__5c_f_2e__24_45 = i_flatten_5c_core_2e__5c_d_2e__24_36;
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:441
	// cell $procmux$12
	p_core_2e_compare__op = (p_core_2e_payload____compare_24_59.curr ? p_core_2e_payload____funct3_24_48.curr.slice<1,0>().concat(value<1>{0u}).val() : p_core_2e_payload____funct3_24_48.curr);
	// cells $procmux$973 $flatten\core.\gprf.\mem.$12
	p_core_2e_gprf_2e_mem_2e_rp2____data = (and_uu<1>(p_core_2e_gprf_2e_mem_2e_collision.curr.slice<1>().val(), p_core_2e_gprf_2e_mem_2e_fwd__wp__en.curr) ? p_core_2e_gprf_2e_mem_2e_fwd__wp__data.curr : p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4.curr);
	// cells $procmux$47 $procmux$438 $procmux$439_CMP0 $procmux$440_CMP0 $procmux$441_CMP0 $procmux$442_CMP0 $procmux$443_CMP0 $flatten\core.\data_sel.$33 $flatten\core.\data_sel.$31 $flatten\core.\data_sel.$29 $flatten\core.\data_sel.$27
	p_core_2e_w__result = (p_core_2e_payload____load_24_130.curr ? p_core_2e_data__sel_2e_w__load__result : p_core_2e_payload____result_24_128.curr);
	// connection
	p_core_2e_data__sel__x__offset = p_core_2e_adder_2e_x__result.slice<1,0>().val();
	// cells $procmux$428 $procmux$426 $procmux$424 $flatten\core.\pc_sel.$12 $flatten\core.\pc_sel.$10 $procmux$422 $flatten\core.\pc_sel.$16 $flatten\core.\pc_sel.$14
	p_core_2e_pc__sel_2e_m__sel = (p_core_2e_exception_2e_m__raise ? value<1>{0x1u} : (p_core_2e_payload____mret_24_117.curr ? value<1>{0x1u} : (and_uu<1>(p_core_2e_payload____branch__predict__taken_24_109.curr, not_u<1>(p_core_2e_payload____branch__taken.curr)) ? value<1>{0x1u} : (and_uu<1>(not_u<1>(p_core_2e_payload____branch__predict__taken_24_109.curr), p_core_2e_payload____branch__taken.curr) ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_core_2e_d_2e_stall_24_6 = i_flatten_5c_core_2e__5c_d_2e__24_36;
	// connection
	p_core_2e_f_2e_stall_24_6 = i_flatten_5c_core_2e__5c_f_2e__24_45;
	// cells $procmux$44 $flatten\core.$267 $procmux$42 $flatten\core.\shifter.$16
	p_core_2e_m__result = (p_core_2e_payload____compare_24_101.curr ? pos_u<32>(p_core_2e_payload____condition__met_24_106.curr) : (p_core_2e_payload____shift_24_94.curr ? p_core_2e_shifter_2e_m__result : p_core_2e_payload____result_24_92.curr));
	// cells $procmux$970 $flatten\core.\gprf.\mem.$10
	p_core_2e_gprf_2e_mem_2e_rp1____data = (and_uu<1>(p_core_2e_gprf_2e_mem_2e_collision.curr.slice<0>().val(), p_core_2e_gprf_2e_mem_2e_fwd__wp__en.curr) ? p_core_2e_gprf_2e_mem_2e_fwd__wp__data.curr : p_core_2e_gprf_2e_mem_2e___mem__r__data.curr);
	// cells $flatten\core.\decoder.$586 $flatten\core.\decoder.$584
	p_core_2e_decoder_2e_ecall = and_uu<1>(p_core_2e_decoder_2e_privileged, logic_not<1>(p_core_2e_decoder_2e_funct12));
	// cells $procmux$1699 $procmux$1700_CMP0
	p_core_2e_csrf_2e_mstatus____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1237 $procmux$1238_CMP0
	p_core_2e_csrf_2e_mtval____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$554 $procmux$552 $procmux$550 $procmux$548 $procmux$546 $procmux$544 $procmux$542 $procmux$540 $procmux$532
	p_core_2e_exception_2e_trap__pe_2e_o = (p_core_2e_exception_2e_trap__pe__i.slice<0>().val() ? value<4>{0u} : (p_core_2e_exception_2e_trap__pe__i.slice<1>().val() ? value<4>{0x1u} : (p_core_2e_exception_2e_trap__pe__i.slice<2>().val() ? value<4>{0x2u} : (p_core_2e_exception_2e_trap__pe__i.slice<3>().val() ? value<4>{0x3u} : (p_core_2e_exception_2e_trap__pe__i.slice<4>().val() ? value<4>{0x4u} : (p_core_2e_exception_2e_trap__pe__i.slice<5>().val() ? value<4>{0x5u} : (p_core_2e_exception_2e_trap__pe__i.slice<6>().val() ? value<4>{0x6u} : (p_core_2e_exception_2e_trap__pe__i.slice<7>().val() ? value<4>{0x7u} : (p_core_2e_exception_2e_trap__pe__i.slice<11>().val() ? value<4>{0xbu} : value<4>{0u})))))))));
	// cells $procmux$39 $flatten\core.$265 $procmux$37 $procmux$35
	p_core_2e_x__result = (p_core_2e_payload____jump_24_58.curr ? add_uu<33>(p_core_2e_payload____pc_24_31.curr, value<3>{0x4u}).slice<31,0>().val() : (p_core_2e_payload____logic_24_52.curr ? p_core_2e_logic_2e_result : (p_core_2e_payload____csr_24_63.curr ? p_core_2e_payload____src2_24_44.curr : p_core_2e_adder_2e_x__result)));
	// cells $flatten\core.\decoder.$590 $flatten\core.\decoder.$588
	p_core_2e_decoder_2e_ebreak = and_uu<1>(p_core_2e_decoder_2e_privileged, eq_uu<1>(p_core_2e_decoder_2e_funct12, value<1>{0x1u}));
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:163
	// cell $2
	p_imem__wbus____adr = pos_u<32>(p_core_2e_fetch_2e_ibus____adr.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$450_CMP0
	i_procmux_24_450__CMP.slice<0>() = eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x1u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$450_CMP1
	i_procmux_24_450__CMP.slice<1>() = eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x5u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$451_CMP0
	i_procmux_24_451__CMP.slice<0>() = logic_not<1>(p_core_2e_payload____funct3_24_48.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:36
	// cell $procmux$451_CMP1
	i_procmux_24_451__CMP.slice<1>() = eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x4u});
	// cells $procmux$436 $procmux$434 $procmux$432 $flatten\core.\pc_sel.$4 $flatten\core.\pc_sel.$2 $procmux$430 $flatten\core.\pc_sel.$8 $flatten\core.\pc_sel.$6
	p_core_2e_pc__sel_2e_m__pc4__a = (p_core_2e_exception_2e_m__raise ? p_core_2e_exception_2e_mtvec____r____base.curr : (p_core_2e_payload____mret_24_117.curr ? p_core_2e_exception_2e_mepc____r____base.curr : (and_uu<1>(p_core_2e_payload____branch__predict__taken_24_109.curr, not_u<1>(p_core_2e_payload____branch__taken.curr)) ? p_core_2e_payload____pc_24_31.curr.slice<31,2>().val() : (and_uu<1>(not_u<1>(p_core_2e_payload____branch__predict__taken_24_109.curr), p_core_2e_payload____branch__taken.curr) ? p_core_2e_payload____branch__target_24_108.curr.slice<31,2>().val() : value<30>{0u}))));
	// cells $procmux$1369 $procmux$1370_CMP0
	p_core_2e_csrf_2e_mepc____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1303 $procmux$1304_CMP0
	p_core_2e_csrf_2e_mcause____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $flatten\core.\decoder.$212 $flatten\core.\decoder.$210
	p_core_2e_decoder_2e_adder__sub = and_uu<1>(p_core_2e_decoder_2e_rs2__re, eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u}));
	// cells $flatten\core.\decoder.$594 $flatten\core.\decoder.$592
	p_core_2e_decoder_2e_mret = and_uu<1>(p_core_2e_decoder_2e_privileged, eq_uu<1>(p_core_2e_decoder_2e_funct12, value<10>{0x302u}));
	// cells $procmux$516 $procmux$508 $procmux$500
	p_core_2e_exception_2e_interrupt__pe_2e_o = (p_core_2e_exception_2e_interrupt__pe__i.slice<3>().val() ? value<4>{0x3u} : (p_core_2e_exception_2e_interrupt__pe__i.slice<7>().val() ? value<4>{0x7u} : (p_core_2e_exception_2e_interrupt__pe__i.slice<11>().val() ? value<4>{0xbu} : value<4>{0u})));
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$616_CMP0
	i_procmux_24_616__CMP.slice<0>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x5u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$616_CMP1
	i_procmux_24_616__CMP.slice<1>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x7u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$617_CMP0
	i_procmux_24_617__CMP.slice<0>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x4u});
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:98
	// cell $procmux$617_CMP1
	i_procmux_24_617__CMP.slice<1>() = eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x6u});
	// cells $procmux$468 $procmux$469_CMP0 $procmux$470_CMP0 $procmux$471_CMP0 $procmux$472_CMP0 $procmux$473_CMP0 $procmux$474_CMP0 $flatten\core.\compare.$16 $flatten\core.\compare.$14 $flatten\core.\compare.$12 $flatten\core.\compare.$10 $flatten\core.\compare.$8 $flatten\core.\compare.$6 $flatten\core.\compare.$4 $flatten\core.\compare.$2
	p_core_2e_compare_2e_condition__met = (eq_uu<1>(p_core_2e_compare__op, value<3>{0x7u}) ? not_u<1>(p_core_2e_adder_2e_x__carry) : (eq_uu<1>(p_core_2e_compare__op, value<3>{0x6u}) ? and_uu<1>(not_u<1>(p_core_2e_compare__zero), p_core_2e_adder_2e_x__carry) : (eq_uu<1>(p_core_2e_compare__op, value<3>{0x5u}) ? eq_uu<1>(p_core_2e_compare__negative, p_core_2e_adder_2e_x__overflow) : (eq_uu<1>(p_core_2e_compare__op, value<3>{0x4u}) ? and_uu<1>(not_u<1>(p_core_2e_compare__zero), ne_uu<1>(p_core_2e_compare__negative, p_core_2e_adder_2e_x__overflow)) : (eq_uu<1>(p_core_2e_compare__op, value<3>{0x1u}) ? not_u<1>(p_core_2e_compare__zero) : (logic_not<1>(p_core_2e_compare__op) ? p_core_2e_compare__zero : value<1>{0u}))))));
	// cells $flatten\core.\decoder.$496 $flatten\core.\decoder.$494 $flatten\core.\decoder.$492
	p_core_2e_decoder_2e_fence__i = and_uu<1>(eq_uu<1>(p_core_2e_decoder_2e_opcode, value<2>{0x3u}), eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<1>{0x1u}));
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/fetch.py:111
	// cell $procmux$853
	p_core_2e_fetch_2e_f__instruction = (p_core_2e_fetch_2e_f__fetch__error.curr ? value<32>{0x13u} : p_core_2e_fetch_2e_ibus__rdata.curr);
	// cells $flatten\core.\w.$5 $flatten\core.\w.$3 $flatten\core.\m.$21
	p_core_2e_w_2e_valid_24_1 = and_uu<1>(p_core_2e_m_2e_valid_24_1.curr, not_u<1>(p_core_2e_m_2e_kill_24_17));
	// cells $procmux$419 $flatten\core.\pc_sel.$18 $procmux$428 $procmux$426 $procmux$424 $flatten\core.\pc_sel.$12 $flatten\core.\pc_sel.$10 $procmux$422 $flatten\core.\pc_sel.$16 $flatten\core.\pc_sel.$14 $procmux$436 $procmux$434 $procmux$432 $flatten\core.\pc_sel.$4 $flatten\core.\pc_sel.$2 $procmux$430 $flatten\core.\pc_sel.$8 $flatten\core.\pc_sel.$6 $procmux$417 $flatten\core.\pc_sel.$20 $procmux$415 $flatten\core.\pc_sel.$22 $flatten\core.\pc_sel.$25
	p_core_2e_pc__sel_2e_a__pc4 = (and_uu<1>(p_core_2e_pc__sel_2e_m__sel, p_core_2e_x_2e_valid_24_1.curr) ? p_core_2e_pc__sel_2e_m__pc4__a : (and_uu<1>(p_core_2e_payload____fence__i.curr, p_core_2e_x_2e_valid_24_4) ? p_core_2e_payload____pc_24_26.curr.slice<31,2>().val() : (and_uu<1>(p_core_2e_predict_2e_d__branch__taken, p_core_2e_d_2e_valid_24_4) ? p_core_2e_predict_2e_d__branch__target.slice<31,2>().val() : add_uu<31>(p_core_2e_pc__sel__f__pc.slice<31,2>().val(), value<1>{0x1u}).slice<29,0>().val())));
	// cells $procmux$1691 $procmux$1692_CMP0
	p_core_2e_csrf_2e_mstatus____w____mie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1633 $procmux$1634_CMP0
	p_core_2e_csrf_2e_misa____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1567 $procmux$1568_CMP0
	p_core_2e_csrf_2e_mie____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1501 $procmux$1502_CMP0
	p_core_2e_csrf_2e_mtvec____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1435 $procmux$1436_CMP0
	p_core_2e_csrf_2e_mscratch____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1235 $procmux$1236_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1233 $procmux$1234_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1231 $procmux$1232_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1229 $procmux$1230_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1227 $procmux$1228_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1225 $procmux$1226_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1223 $procmux$1224_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1221 $procmux$1222_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1219 $procmux$1220_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1217 $procmux$1218_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1215 $procmux$1216_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1213 $procmux$1214_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1211 $procmux$1212_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1209 $procmux$1210_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1207 $procmux$1208_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1205 $procmux$1206_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1203 $procmux$1204_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1201 $procmux$1202_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1199 $procmux$1200_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1197 $procmux$1198_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1195 $procmux$1196_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1193 $procmux$1194_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1191 $procmux$1192_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1189 $procmux$1190_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1187 $procmux$1188_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1185 $procmux$1186_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1183 $procmux$1184_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// cells $procmux$1181 $procmux$1182_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// cells $procmux$1179 $procmux$1180_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// cells $procmux$1177 $procmux$1178_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// cells $procmux$1175 $procmux$1176_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1173 $procmux$1174_CMP0
	p_core_2e_csrf_2e_mtval____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x343u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $procmux$1171 $procmux$1172_CMP0
	p_core_2e_csrf_2e_mip____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// cells $procmux$1105 $procmux$1106_CMP0
	p_core_2e_csrf_2e_irq__mask____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:30
	// cell $procmux$454_CMP0
	i_procmux_24_454__CMP.slice<0>() = eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x1u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/loadstore.py:30
	// cell $procmux$454_CMP1
	i_procmux_24_454__CMP.slice<1>() = eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x5u});
	// cells $procmux$1721 $procmux$1722_CMP0 $procmux$1723_CMP0 $procmux$1724_CMP0 $procmux$1725_CMP0 $procmux$1726_CMP0 $procmux$1727_CMP0 $procmux$1728_CMP0 $procmux$1729_CMP0 $procmux$1730_CMP0 $procmux$1731_CMP0 $procmux$1732_CMP0
	p_core_2e_csrf_2e_rp____data = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x360u}) ? p_core_2e_exception_2e_irq__pending____r____value.curr : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x330u}) ? p_core_2e_exception_2e_irq__mask____r____value.curr : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.concat(p_core_2e_exception_2e_mip____r____meip.curr).concat(p_core_2e_exception_2e_mip____r____zero2.curr).concat(p_core_2e_exception_2e_mip____r____seip.curr).concat(p_core_2e_exception_2e_mip____r____ueip.curr).concat(p_core_2e_exception_2e_mip____r____mtip.curr).concat(p_core_2e_exception_2e_mip____r____zero1.curr).concat(p_core_2e_exception_2e_mip____r____stip.curr).concat(p_core_2e_exception_2e_mip____r____utip.curr).concat(p_core_2e_exception_2e_mip____r____msip.curr).concat(p_core_2e_exception_2e_mip____r____zero0.curr).concat(p_core_2e_exception_2e_mip____r____ssip.curr).concat(p_core_2e_exception_2e_mip____r____usip.curr).val() : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x343u}) ? p_core_2e_exception_2e_mtval____r____value.curr : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x342u}) ? p_core_2e_exception_2e_mcause____r____interrupt.curr.concat(p_core_2e_exception_2e_mcause____r____ecode.curr).val() : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x341u}) ? p_core_2e_exception_2e_mepc____r____base.curr.concat(p_core_2e_exception_2e_mepc____r____zero.curr).val() : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x340u}) ? p_core_2e_exception_2e_mscratch____r____value.curr : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x305u}) ? p_core_2e_exception_2e_mtvec____r____base.curr.concat(p_core_2e_exception_2e_mtvec____r____mode.curr).val() : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.concat(p_core_2e_exception_2e_mie____r____meie.curr).concat(p_core_2e_exception_2e_mie____r____zero2.curr).concat(p_core_2e_exception_2e_mie____r____seie.curr).concat(p_core_2e_exception_2e_mie____r____ueie.curr).concat(p_core_2e_exception_2e_mie____r____mtie.curr).concat(p_core_2e_exception_2e_mie____r____zero1.curr).concat(p_core_2e_exception_2e_mie____r____stie.curr).concat(p_core_2e_exception_2e_mie____r____utie.curr).concat(p_core_2e_exception_2e_mie____r____msie.curr).concat(p_core_2e_exception_2e_mie____r____zero0.curr).concat(p_core_2e_exception_2e_mie____r____ssie.curr).concat(p_core_2e_exception_2e_mie____r____usie.curr).val() : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____mxl.curr.concat(p_core_2e_exception_2e_misa____r____zero.curr).concat(p_core_2e_exception_2e_misa____r____extensions.curr).val() : (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sd.curr.concat(p_core_2e_exception_2e_mstatus____r____zero3.curr).concat(p_core_2e_exception_2e_mstatus____r____tsr.curr).concat(p_core_2e_exception_2e_mstatus____r____tw.curr).concat(p_core_2e_exception_2e_mstatus____r____tvm.curr).concat(p_core_2e_exception_2e_mstatus____r____mxr.curr).concat(p_core_2e_exception_2e_mstatus____r____sum.curr).concat(p_core_2e_exception_2e_mstatus____r____mprv.curr).concat(p_core_2e_exception_2e_mstatus____r____xs.curr).concat(p_core_2e_exception_2e_mstatus____r____fs.curr).concat(p_core_2e_exception_2e_mstatus____r____mpp.curr).concat(p_core_2e_exception_2e_mstatus____r____zero2.curr).concat(p_core_2e_exception_2e_mstatus____r____spp.curr).concat(p_core_2e_exception_2e_mstatus____r____mpie.curr).concat(p_core_2e_exception_2e_mstatus____r____zero1.curr).concat(p_core_2e_exception_2e_mstatus____r____spie.curr).concat(p_core_2e_exception_2e_mstatus____r____upie.curr).concat(p_core_2e_exception_2e_mstatus____r____mie.curr).concat(p_core_2e_exception_2e_mstatus____r____zero0.curr).concat(p_core_2e_exception_2e_mstatus____r____sie.curr).concat(p_core_2e_exception_2e_mstatus____r____uie.curr).val() : value<32>{0u})))))))))));
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ast.py:280
	// cell $flatten\imem.$14
	p_imem_2e_raddr = pos_u<32>(p_imem__wbus____adr.slice<31,2>().val());
	// cells $procmux$448 $procmux$449_CMP0 $procmux$450_ANY $procmux$451_ANY $flatten\core.\data_sel.$7 $flatten\core.\data_sel.$4
	p_core_2e_data__sel_2e_x__mask = (eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x2u}) ? value<4>{0xfu} : (reduce_or<1>(i_procmux_24_450__CMP) ? sshl_uu<5>(value<2>{0x3u}, p_core_2e_data__sel__x__offset).slice<3,0>().val() : (reduce_or<1>(i_procmux_24_451__CMP) ? sshl_uu<4>(value<1>{0x1u}, p_core_2e_data__sel__x__offset) : value<4>{0u})));
	// cells $procmux$444 $procmux$445_CMP0 $procmux$446_CMP0 $procmux$447_CMP0 $flatten\core.\data_sel.$17 $flatten\core.\data_sel.$15 $flatten\core.\data_sel.$12 $flatten\core.\data_sel.$10
	p_core_2e_data__sel_2e_x__store__data = (eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x2u}) ? p_core_2e_payload____store__operand_24_45.curr : (eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x1u}) ? sshl_uu<79>(p_core_2e_payload____store__operand_24_45.curr.slice<15,0>().val(), mul_uu<6>(p_core_2e_data__sel__x__offset.slice<1>().val(), value<5>{0x10u})).slice<31,0>().val() : (logic_not<1>(p_core_2e_payload____funct3_24_48.curr) ? sshl_uu<71>(p_core_2e_payload____store__operand_24_45.curr.slice<7,0>().val(), mul_uu<6>(p_core_2e_data__sel__x__offset, value<4>{0x8u})).slice<31,0>().val() : value<32>{0u})));
	// connection
	p_core_2e_pc__sel_2e_a__pc.slice<1,0>() = value<2>{0u};
	// cells $procmux$419 $flatten\core.\pc_sel.$18 $procmux$428 $procmux$426 $procmux$424 $flatten\core.\pc_sel.$12 $flatten\core.\pc_sel.$10 $procmux$422 $flatten\core.\pc_sel.$16 $flatten\core.\pc_sel.$14 $procmux$436 $procmux$434 $procmux$432 $flatten\core.\pc_sel.$4 $flatten\core.\pc_sel.$2 $procmux$430 $flatten\core.\pc_sel.$8 $flatten\core.\pc_sel.$6 $procmux$417 $flatten\core.\pc_sel.$20 $procmux$415 $flatten\core.\pc_sel.$22 $flatten\core.\pc_sel.$25
	p_core_2e_pc__sel_2e_a__pc.slice<31,2>() = p_core_2e_pc__sel_2e_a__pc4;
	// connection
	p_core_2e_shifter__x__shamt = p_core_2e_payload____src2_24_44.curr.slice<4,0>().val();
	// cells $procmux$809 $procmux$1691 $procmux$1692_CMP0
	i_procmux_24_809__Y = (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____mie : p_core_2e_exception_2e_mstatus____r____mie.curr);
	// cells $procmux$1683 $procmux$1684_CMP0
	p_core_2e_csrf_2e_mstatus____w____mpie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1363 $procmux$1364_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1361 $procmux$1362_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1359 $procmux$1360_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1357 $procmux$1358_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1355 $procmux$1356_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1353 $procmux$1354_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1351 $procmux$1352_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1349 $procmux$1350_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1347 $procmux$1348_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1345 $procmux$1346_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1343 $procmux$1344_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1341 $procmux$1342_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1339 $procmux$1340_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1337 $procmux$1338_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1335 $procmux$1336_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1333 $procmux$1334_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1331 $procmux$1332_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1329 $procmux$1330_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1327 $procmux$1328_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1325 $procmux$1326_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1323 $procmux$1324_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1321 $procmux$1322_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1319 $procmux$1320_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1317 $procmux$1318_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1315 $procmux$1316_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// cells $procmux$1313 $procmux$1314_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// cells $procmux$1311 $procmux$1312_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// cells $procmux$1309 $procmux$1310_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// cells $procmux$1307 $procmux$1308_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1305 $procmux$1306_CMP0
	p_core_2e_csrf_2e_mepc____w____base.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $procmux$1299 $procmux$1300_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1297 $procmux$1298_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1295 $procmux$1296_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1293 $procmux$1294_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1291 $procmux$1292_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1289 $procmux$1290_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1287 $procmux$1288_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1285 $procmux$1286_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1283 $procmux$1284_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1281 $procmux$1282_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1279 $procmux$1280_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1277 $procmux$1278_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1275 $procmux$1276_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1273 $procmux$1274_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1271 $procmux$1272_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1269 $procmux$1270_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1267 $procmux$1268_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1265 $procmux$1266_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1263 $procmux$1264_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1261 $procmux$1262_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1259 $procmux$1260_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1257 $procmux$1258_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1255 $procmux$1256_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1253 $procmux$1254_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1251 $procmux$1252_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1249 $procmux$1250_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1247 $procmux$1248_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// cells $procmux$1245 $procmux$1246_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// cells $procmux$1243 $procmux$1244_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// cells $procmux$1241 $procmux$1242_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// cells $procmux$1239 $procmux$1240_CMP0
	p_core_2e_csrf_2e_mcause____w____ecode.slice<30>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1301 $procmux$1302_CMP0
	p_core_2e_csrf_2e_mcause____w____interrupt = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x342u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $procmux$612 $procmux$1237 $procmux$1238_CMP0
	i_procmux_24_612__Y = (p_core_2e_csrf_2e_mtval____we ? p_core_2e_csrf_2e_mtval____w____value : p_core_2e_exception_2e_mtval____r____value.curr);
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:376
	// cell $procmux$2
	p_core_2e_gprf__rp1____addr = (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_decoder_2e_rs1 : p_core_2e_fetch_2e_f__instruction.slice<19,15>().val());
	// \full_case: 1
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:381
	// cell $procmux$5
	p_core_2e_gprf__rp2____addr = (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_decoder_2e_rs2 : p_core_2e_fetch_2e_f__instruction.slice<24,20>().val());
	// connection
	i_flatten_5c_core_2e__5c_a_2e__24_43 = i_flatten_5c_core_2e__5c_d_2e__24_36;
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/ast.py:280
	// cell $flatten\imem.$14
	p_imem_2e_raddr2 = p_imem_2e_raddr.slice<2,0>().val();
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/shifter.py:27
	// cell $flatten\core.\shifter.$2
	p_core_2e_shifter_2e_x__operand = (p_core_2e_payload____direction_24_56.curr ? p_core_2e_payload____src1_24_43.curr : p_core_2e_payload____src1_24_43.curr.slice<0>().concat(p_core_2e_payload____src1_24_43.curr.slice<1>()).concat(p_core_2e_payload____src1_24_43.curr.slice<2>()).concat(p_core_2e_payload____src1_24_43.curr.slice<3>()).concat(p_core_2e_payload____src1_24_43.curr.slice<4>()).concat(p_core_2e_payload____src1_24_43.curr.slice<5>()).concat(p_core_2e_payload____src1_24_43.curr.slice<6>()).concat(p_core_2e_payload____src1_24_43.curr.slice<7>()).concat(p_core_2e_payload____src1_24_43.curr.slice<8>()).concat(p_core_2e_payload____src1_24_43.curr.slice<9>()).concat(p_core_2e_payload____src1_24_43.curr.slice<10>()).concat(p_core_2e_payload____src1_24_43.curr.slice<11>()).concat(p_core_2e_payload____src1_24_43.curr.slice<12>()).concat(p_core_2e_payload____src1_24_43.curr.slice<13>()).concat(p_core_2e_payload____src1_24_43.curr.slice<14>()).concat(p_core_2e_payload____src1_24_43.curr.slice<15>()).concat(p_core_2e_payload____src1_24_43.curr.slice<16>()).concat(p_core_2e_payload____src1_24_43.curr.slice<17>()).concat(p_core_2e_payload____src1_24_43.curr.slice<18>()).concat(p_core_2e_payload____src1_24_43.curr.slice<19>()).concat(p_core_2e_payload____src1_24_43.curr.slice<20>()).concat(p_core_2e_payload____src1_24_43.curr.slice<21>()).concat(p_core_2e_payload____src1_24_43.curr.slice<22>()).concat(p_core_2e_payload____src1_24_43.curr.slice<23>()).concat(p_core_2e_payload____src1_24_43.curr.slice<24>()).concat(p_core_2e_payload____src1_24_43.curr.slice<25>()).concat(p_core_2e_payload____src1_24_43.curr.slice<26>()).concat(p_core_2e_payload____src1_24_43.curr.slice<27>()).concat(p_core_2e_payload____src1_24_43.curr.slice<28>()).concat(p_core_2e_payload____src1_24_43.curr.slice<29>()).concat(p_core_2e_payload____src1_24_43.curr.slice<30>()).concat(p_core_2e_payload____src1_24_43.curr.slice<31>()).val());
	// cells $flatten\core.\shifter.$6 $flatten\core.\shifter.$5
	p_core_2e_shifter_2e_x__filler = (and_uu<1>(p_core_2e_payload____direction_24_56.curr, p_core_2e_payload____sext_24_57.curr) ? p_core_2e_payload____src1_24_43.curr.slice<31>().val() : value<1>{0u});
	// cells $flatten\core.\exception.$4 $flatten\core.\exception.$2
	i_flatten_5c_core_2e__5c_exception_2e__24_3 = and_uu<1>(p_core_2e_x_2e_valid_24_1.curr, not_u<1>(p_core_2e_m_2e_stall_24_8));
	// cells $procmux$788 $procmux$1683 $procmux$1684_CMP0
	i_procmux_24_788__Y = (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____mpie : p_core_2e_exception_2e_mstatus____r____mpie.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:54
	// cell $procmux$652
	i_procmux_24_652__Y = (p_core_2e_csrf_2e_mepc____we ? p_core_2e_csrf_2e_mepc____w____base : p_core_2e_exception_2e_mepc____r____base.curr);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/exception.py:54
	// cell $procmux$641
	i_procmux_24_641__Y = (p_core_2e_csrf_2e_mcause____we ? p_core_2e_csrf_2e_mcause____w____ecode : p_core_2e_exception_2e_mcause____r____ecode.curr);
	// cells $flatten\core.\exception.$12 $flatten\core.\exception.$10
	i_flatten_5c_core_2e__5c_exception_2e__24_11 = and_uu<1>(p_core_2e_x_2e_valid_24_1.curr, not_u<1>(p_core_2e_m_2e_stall_24_8));
	// cells $procmux$630 $procmux$1301 $procmux$1302_CMP0
	i_procmux_24_630__Y = (p_core_2e_csrf_2e_mcause____we ? p_core_2e_csrf_2e_mcause____w____interrupt : p_core_2e_exception_2e_mcause____r____interrupt.curr);
	// cells $procmux$80 $procmux$1721 $procmux$1722_CMP0 $procmux$1723_CMP0 $procmux$1724_CMP0 $procmux$1725_CMP0 $procmux$1726_CMP0 $procmux$1727_CMP0 $procmux$1728_CMP0 $procmux$1729_CMP0 $procmux$1730_CMP0 $procmux$1731_CMP0 $procmux$1732_CMP0 $procmux$78 $procmux$76 $flatten\core.$315 $procmux$74 $flatten\core.$317 $procmux$72 $flatten\core.$319 $procmux$70 $flatten\core.$321 $procmux$24 $flatten\core.$222 $flatten\core.$220 $flatten\core.$224 $procmux$973 $flatten\core.\gprf.\mem.$12
	p_core_2e_d__src2 = (p_core_2e_decoder_2e_csr ? p_core_2e_csrf_2e_rp____data : (i_flatten_5c_core_2e__5c_decoder_2e__24_49 ? (logic_not<1>(p_core_2e_decoder_2e_rs2) ? value<32>{0u} : (and_uu<1>(p_core_2e_d__raw__rs2__x, p_core_2e_d_2e_valid_24_1.curr) ? p_core_2e_x__result : (and_uu<1>(p_core_2e_d__raw__rs2__m, p_core_2e_x_2e_valid_24_1.curr) ? p_core_2e_m__result : (and_uu<1>(p_core_2e_d__raw__rs2__w, p_core_2e_m_2e_valid_24_1.curr) ? p_core_2e_w__result : p_core_2e_gprf_2e_mem_2e_rp2____data)))) : p_core_2e_decoder_2e_immediate));
	// connection
	p_core_2e_a_2e_stall_24_5 = i_flatten_5c_core_2e__5c_a_2e__24_43;
	// \src: tb.py:89
	// cell $flatten\dmem.$2
	p_dmem_2e_valid = and_uu<1>(p_core_2e_loadstore_2e_dbus____cyc.curr, p_core_2e_loadstore_2e_dbus____stb.curr);
	// \src: tb.py:89
	// cell $flatten\imem.$2
	p_imem_2e_valid = and_uu<1>(p_core_2e_fetch_2e_ibus____cyc.curr, p_core_2e_fetch_2e_ibus____stb.curr);
	// cells $procmux$1697 $procmux$1698_CMP0
	p_core_2e_csrf_2e_mstatus____w____uie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____uie.curr : value<1>{0u});
	// cells $procmux$1695 $procmux$1696_CMP0
	p_core_2e_csrf_2e_mstatus____w____sie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sie.curr : value<1>{0u});
	// cells $procmux$1693 $procmux$1694_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero0 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero0.curr : value<1>{0u});
	// cells $procmux$1689 $procmux$1690_CMP0
	p_core_2e_csrf_2e_mstatus____w____upie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____upie.curr : value<1>{0u});
	// cells $procmux$1687 $procmux$1688_CMP0
	p_core_2e_csrf_2e_mstatus____w____spie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____spie.curr : value<1>{0u});
	// cells $procmux$1685 $procmux$1686_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero1 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero1.curr : value<1>{0u});
	// cells $procmux$1681 $procmux$1682_CMP0
	p_core_2e_csrf_2e_mstatus____w____spp = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____spp.curr : value<1>{0u});
	// cells $procmux$1677 $procmux$1678_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero2.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero2.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1657 $procmux$1658_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero2.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero2.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1675 $procmux$1676_CMP0
	p_core_2e_csrf_2e_mstatus____w____mpp.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1655 $procmux$1656_CMP0
	p_core_2e_csrf_2e_mstatus____w____mpp.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1673 $procmux$1674_CMP0
	p_core_2e_csrf_2e_mstatus____w____fs.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____fs.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1653 $procmux$1654_CMP0
	p_core_2e_csrf_2e_mstatus____w____fs.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____fs.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1659 $procmux$1660_CMP0
	p_core_2e_csrf_2e_mstatus____w____xs.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____xs.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1651 $procmux$1652_CMP0
	p_core_2e_csrf_2e_mstatus____w____xs.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____xs.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1671 $procmux$1672_CMP0
	p_core_2e_csrf_2e_mstatus____w____mprv = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____mprv.curr : value<1>{0u});
	// cells $procmux$1669 $procmux$1670_CMP0
	p_core_2e_csrf_2e_mstatus____w____sum = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sum.curr : value<1>{0u});
	// cells $procmux$1667 $procmux$1668_CMP0
	p_core_2e_csrf_2e_mstatus____w____mxr = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____mxr.curr : value<1>{0u});
	// cells $procmux$1665 $procmux$1666_CMP0
	p_core_2e_csrf_2e_mstatus____w____tvm = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____tvm.curr : value<1>{0u});
	// cells $procmux$1663 $procmux$1664_CMP0
	p_core_2e_csrf_2e_mstatus____w____tw = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____tw.curr : value<1>{0u});
	// cells $procmux$1661 $procmux$1662_CMP0
	p_core_2e_csrf_2e_mstatus____w____tsr = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____tsr.curr : value<1>{0u});
	// cells $procmux$1649 $procmux$1650_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1647 $procmux$1648_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1645 $procmux$1646_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1643 $procmux$1644_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1641 $procmux$1642_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1639 $procmux$1640_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1637 $procmux$1638_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1635 $procmux$1636_CMP0
	p_core_2e_csrf_2e_mstatus____w____zero3.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____zero3.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1679 $procmux$1680_CMP0
	p_core_2e_csrf_2e_mstatus____w____sd = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x300u}) ? p_core_2e_exception_2e_mstatus____r____sd.curr : value<1>{0u});
	// cells $procmux$1629 $procmux$1630_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1627 $procmux$1628_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1625 $procmux$1626_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1623 $procmux$1624_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1621 $procmux$1622_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1619 $procmux$1620_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1617 $procmux$1618_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1615 $procmux$1616_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1613 $procmux$1614_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1611 $procmux$1612_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1609 $procmux$1610_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1607 $procmux$1608_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1605 $procmux$1606_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1603 $procmux$1604_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1601 $procmux$1602_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1599 $procmux$1600_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1597 $procmux$1598_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1595 $procmux$1596_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1593 $procmux$1594_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1591 $procmux$1592_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1589 $procmux$1590_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1587 $procmux$1588_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1585 $procmux$1586_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1583 $procmux$1584_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1581 $procmux$1582_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1579 $procmux$1580_CMP0
	p_core_2e_csrf_2e_misa____w____extensions.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1631 $procmux$1632_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1577 $procmux$1578_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1575 $procmux$1576_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1573 $procmux$1574_CMP0
	p_core_2e_csrf_2e_misa____w____zero.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_exception_2e_misa____r____zero.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1571 $procmux$1572_CMP0
	p_core_2e_csrf_2e_misa____w____mxl.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1569 $procmux$1570_CMP0
	p_core_2e_csrf_2e_misa____w____mxl.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x301u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $procmux$1565 $procmux$1566_CMP0
	p_core_2e_csrf_2e_mie____w____usie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____usie.curr : value<1>{0u});
	// cells $procmux$1563 $procmux$1564_CMP0
	p_core_2e_csrf_2e_mie____w____ssie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____ssie.curr : value<1>{0u});
	// cells $procmux$1561 $procmux$1562_CMP0
	p_core_2e_csrf_2e_mie____w____zero0 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero0.curr : value<1>{0u});
	// cells $procmux$1559 $procmux$1560_CMP0
	p_core_2e_csrf_2e_mie____w____msie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1557 $procmux$1558_CMP0
	p_core_2e_csrf_2e_mie____w____utie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____utie.curr : value<1>{0u});
	// cells $procmux$1555 $procmux$1556_CMP0
	p_core_2e_csrf_2e_mie____w____stie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____stie.curr : value<1>{0u});
	// cells $procmux$1553 $procmux$1554_CMP0
	p_core_2e_csrf_2e_mie____w____zero1 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero1.curr : value<1>{0u});
	// cells $procmux$1551 $procmux$1552_CMP0
	p_core_2e_csrf_2e_mie____w____mtie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1549 $procmux$1550_CMP0
	p_core_2e_csrf_2e_mie____w____ueie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____ueie.curr : value<1>{0u});
	// cells $procmux$1547 $procmux$1548_CMP0
	p_core_2e_csrf_2e_mie____w____seie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____seie.curr : value<1>{0u});
	// cells $procmux$1545 $procmux$1546_CMP0
	p_core_2e_csrf_2e_mie____w____zero2 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero2.curr : value<1>{0u});
	// cells $procmux$1543 $procmux$1544_CMP0
	p_core_2e_csrf_2e_mie____w____meie = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1541 $procmux$1542_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1539 $procmux$1540_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1537 $procmux$1538_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1535 $procmux$1536_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1533 $procmux$1534_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1531 $procmux$1532_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1529 $procmux$1530_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1527 $procmux$1528_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1525 $procmux$1526_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1523 $procmux$1524_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1521 $procmux$1522_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1519 $procmux$1520_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1517 $procmux$1518_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1515 $procmux$1516_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1513 $procmux$1514_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1511 $procmux$1512_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1509 $procmux$1510_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1507 $procmux$1508_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1505 $procmux$1506_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1503 $procmux$1504_CMP0
	p_core_2e_csrf_2e_mie____w____zero3.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x304u}) ? p_core_2e_exception_2e_mie____r____zero3.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1499 $procmux$1500_CMP0
	p_core_2e_csrf_2e_mtvec____w____mode.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1497 $procmux$1498_CMP0
	p_core_2e_csrf_2e_mtvec____w____mode.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1495 $procmux$1496_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1493 $procmux$1494_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1491 $procmux$1492_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1489 $procmux$1490_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1487 $procmux$1488_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1485 $procmux$1486_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1483 $procmux$1484_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1481 $procmux$1482_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1479 $procmux$1480_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1477 $procmux$1478_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1475 $procmux$1476_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1473 $procmux$1474_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1471 $procmux$1472_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1469 $procmux$1470_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1467 $procmux$1468_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1465 $procmux$1466_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1463 $procmux$1464_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1461 $procmux$1462_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1459 $procmux$1460_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1457 $procmux$1458_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1455 $procmux$1456_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1453 $procmux$1454_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1451 $procmux$1452_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1449 $procmux$1450_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1447 $procmux$1448_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// cells $procmux$1445 $procmux$1446_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// cells $procmux$1443 $procmux$1444_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// cells $procmux$1441 $procmux$1442_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// cells $procmux$1439 $procmux$1440_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1437 $procmux$1438_CMP0
	p_core_2e_csrf_2e_mtvec____w____base.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x305u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $procmux$1433 $procmux$1434_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1431 $procmux$1432_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1429 $procmux$1430_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1427 $procmux$1428_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1425 $procmux$1426_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1423 $procmux$1424_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1421 $procmux$1422_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1419 $procmux$1420_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1417 $procmux$1418_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1415 $procmux$1416_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1413 $procmux$1414_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1411 $procmux$1412_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1409 $procmux$1410_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1407 $procmux$1408_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1405 $procmux$1406_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1403 $procmux$1404_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1401 $procmux$1402_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1399 $procmux$1400_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1397 $procmux$1398_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1395 $procmux$1396_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1393 $procmux$1394_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1391 $procmux$1392_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1389 $procmux$1390_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1387 $procmux$1388_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1385 $procmux$1386_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1383 $procmux$1384_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1381 $procmux$1382_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// cells $procmux$1379 $procmux$1380_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// cells $procmux$1377 $procmux$1378_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// cells $procmux$1375 $procmux$1376_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// cells $procmux$1373 $procmux$1374_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1371 $procmux$1372_CMP0
	p_core_2e_csrf_2e_mscratch____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x340u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $procmux$1367 $procmux$1368_CMP0
	p_core_2e_csrf_2e_mepc____w____zero.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_exception_2e_mepc____r____zero.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1365 $procmux$1366_CMP0
	p_core_2e_csrf_2e_mepc____w____zero.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x341u}) ? p_core_2e_exception_2e_mepc____r____zero.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1169 $procmux$1170_CMP0
	p_core_2e_csrf_2e_mip____w____usip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____usip.curr : value<1>{0u});
	// cells $procmux$1167 $procmux$1168_CMP0
	p_core_2e_csrf_2e_mip____w____ssip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____ssip.curr : value<1>{0u});
	// cells $procmux$1165 $procmux$1166_CMP0
	p_core_2e_csrf_2e_mip____w____zero0 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero0.curr : value<1>{0u});
	// cells $procmux$1161 $procmux$1162_CMP0
	p_core_2e_csrf_2e_mip____w____utip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____utip.curr : value<1>{0u});
	// cells $procmux$1159 $procmux$1160_CMP0
	p_core_2e_csrf_2e_mip____w____stip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____stip.curr : value<1>{0u});
	// cells $procmux$1157 $procmux$1158_CMP0
	p_core_2e_csrf_2e_mip____w____zero1 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero1.curr : value<1>{0u});
	// cells $procmux$1153 $procmux$1154_CMP0
	p_core_2e_csrf_2e_mip____w____ueip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____ueip.curr : value<1>{0u});
	// cells $procmux$1151 $procmux$1152_CMP0
	p_core_2e_csrf_2e_mip____w____seip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____seip.curr : value<1>{0u});
	// cells $procmux$1149 $procmux$1150_CMP0
	p_core_2e_csrf_2e_mip____w____zero2 = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero2.curr : value<1>{0u});
	// cells $procmux$1145 $procmux$1146_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1143 $procmux$1144_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1141 $procmux$1142_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1139 $procmux$1140_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1137 $procmux$1138_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1135 $procmux$1136_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1133 $procmux$1134_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1131 $procmux$1132_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1129 $procmux$1130_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1127 $procmux$1128_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1125 $procmux$1126_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1123 $procmux$1124_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1121 $procmux$1122_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1119 $procmux$1120_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1117 $procmux$1118_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1115 $procmux$1116_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1113 $procmux$1114_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1111 $procmux$1112_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1109 $procmux$1110_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1107 $procmux$1108_CMP0
	p_core_2e_csrf_2e_mip____w____zero3.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_exception_2e_mip____r____zero3.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1103 $procmux$1104_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// cells $procmux$1101 $procmux$1102_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// cells $procmux$1099 $procmux$1100_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// cells $procmux$1097 $procmux$1098_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// cells $procmux$1095 $procmux$1096_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// cells $procmux$1093 $procmux$1094_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// cells $procmux$1091 $procmux$1092_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// cells $procmux$1089 $procmux$1090_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// cells $procmux$1087 $procmux$1088_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// cells $procmux$1085 $procmux$1086_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// cells $procmux$1083 $procmux$1084_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// cells $procmux$1081 $procmux$1082_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// cells $procmux$1079 $procmux$1080_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// cells $procmux$1077 $procmux$1078_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// cells $procmux$1075 $procmux$1076_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// cells $procmux$1073 $procmux$1074_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// cells $procmux$1071 $procmux$1072_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// cells $procmux$1069 $procmux$1070_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// cells $procmux$1067 $procmux$1068_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// cells $procmux$1065 $procmux$1066_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// cells $procmux$1063 $procmux$1064_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// cells $procmux$1061 $procmux$1062_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// cells $procmux$1059 $procmux$1060_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// cells $procmux$1057 $procmux$1058_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// cells $procmux$1055 $procmux$1056_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// cells $procmux$1053 $procmux$1054_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// cells $procmux$1051 $procmux$1052_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// cells $procmux$1049 $procmux$1050_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// cells $procmux$1047 $procmux$1048_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// cells $procmux$1045 $procmux$1046_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// cells $procmux$1043 $procmux$1044_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// cells $procmux$1041 $procmux$1042_CMP0
	p_core_2e_csrf_2e_irq__mask____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x330u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// cells $flatten\core.$174 $flatten\core.$172 $flatten\core.$170
	p_core_2e_adder__d__sub = or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder_2e_adder, p_core_2e_decoder_2e_adder__sub), p_core_2e_decoder_2e_compare), p_core_2e_decoder_2e_branch);
	// cells $procmux$50 $flatten\core.$281 $flatten\core.$280 $flatten\core.$273 $flatten\core.$272 $flatten\core.$270 $flatten\core.$277 $flatten\core.$275
	p_core_2e_x__csr__result = (p_core_2e_payload____funct3_24_48.curr.slice<1>().val() ? p_core_2e_logic_2e_result : (and_uu<1>(p_core_2e_payload____funct3_24_48.curr.slice<1>().val(), p_core_2e_payload____funct3_24_48.curr.slice<0>().val()) ? not_u<32>((p_core_2e_payload____funct3_24_48.curr.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1_24_40.curr) : p_core_2e_payload____src1_24_43.curr)) : (p_core_2e_payload____funct3_24_48.curr.slice<2>().val() ? pos_u<32>(p_core_2e_payload____rs1_24_40.curr) : p_core_2e_payload____src1_24_43.curr)));
	// cells $procmux$242 $flatten\core.$415
	p_core_2e_x__branch__target = (and_uu<1>(p_core_2e_payload____jump_24_58.curr, p_core_2e_payload____rs1__re_24_42.curr) ? i_procmux_24_462__Y.slice<31,1>().concat(value<1>{0u}).val() : p_core_2e_payload____branch__target_24_61.curr);
	// cells $flatten\core.$413 $flatten\core.$411
	p_core_2e_x__branch__taken = or_uu<1>(p_core_2e_payload____jump_24_58.curr, and_uu<1>(p_core_2e_payload____branch_24_60.curr, p_core_2e_compare_2e_condition__met));
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:921
	// cell $flatten\core.$409
	p_core_2e_x__bypass__m = or_uu<1>(p_core_2e_payload____bypass__m_24_47.curr, p_core_2e_payload____bypass__x_24_46.curr);
	// cells $procmux$452 $procmux$453_CMP0 $procmux$454_ANY $flatten\core.\data_sel.$2
	p_core_2e_data__sel_2e_x__misaligned = (eq_uu<1>(p_core_2e_payload____funct3_24_48.curr, value<3>{0x2u}) ? reduce_bool<1>(p_core_2e_data__sel__x__offset) : (reduce_or<1>(i_procmux_24_454__CMP) ? p_core_2e_data__sel__x__offset.slice<0>().val() : value<1>{0u}));
	// cells $procmux$67 $procmux$65 $procmux$63 $flatten\core.$305 $flatten\core.$303 $procmux$61 $flatten\core.$307 $procmux$59 $flatten\core.$309 $procmux$57 $flatten\core.$311 $procmux$22 $flatten\core.$216 $flatten\core.$214 $flatten\core.$218 $procmux$970 $flatten\core.\gprf.\mem.$10
	p_core_2e_d__src1 = (p_core_2e_decoder_2e_lui ? value<32>{0u} : (p_core_2e_decoder_2e_auipc ? p_core_2e_payload____pc_24_26.curr : (and_uu<1>(p_core_2e_decoder_2e_rs1__re, logic_not<1>(p_core_2e_decoder_2e_rs1)) ? value<32>{0u} : (and_uu<1>(p_core_2e_d__raw__rs1__x, p_core_2e_d_2e_valid_24_1.curr) ? p_core_2e_x__result : (and_uu<1>(p_core_2e_d__raw__rs1__m, p_core_2e_x_2e_valid_24_1.curr) ? p_core_2e_m__result : (and_uu<1>(p_core_2e_d__raw__rs1__w, p_core_2e_m_2e_valid_24_1.curr) ? p_core_2e_w__result : p_core_2e_gprf_2e_mem_2e_rp1____data))))));
	// cells $flatten\core.\decoder.$576 $flatten\core.\decoder.$574 $flatten\core.\decoder.$572
	p_core_2e_decoder_2e_csr__we = or_uu<1>(not_u<1>(p_core_2e_decoder_2e_funct3_24_1.slice<1>().val()), reduce_bool<1>(p_core_2e_decoder_2e_rs1));
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:209
	// cell $flatten\core.\decoder.$374
	p_core_2e_decoder_2e_sext = eq_uu<1>(p_core_2e_decoder_2e_funct7, value<6>{0x20u});
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:208
	// cell $flatten\core.\decoder.$372
	p_core_2e_decoder_2e_direction = eq_uu<1>(p_core_2e_decoder_2e_funct3_24_1, value<3>{0x5u});
	// cells $flatten\core.$339 $flatten\core.$337 $flatten\core.$335
	p_core_2e_d__adder__sub = or_uu<1>(or_uu<1>(and_uu<1>(p_core_2e_decoder_2e_adder, p_core_2e_decoder_2e_adder__sub), p_core_2e_decoder_2e_compare), p_core_2e_decoder_2e_branch);
	// \src: /home/devector/Documents/riscv/minerva/minerva/units/decoder.py:252
	// cell $flatten\core.\decoder.$606
	p_core_2e_decoder_2e_bypass__m = or_uu<1>(i_flatten_5c_core_2e__5c_decoder_2e__24_99, p_core_2e_decoder_2e_shift);
	// cells $flatten\core.\decoder.$602 $flatten\core.\decoder.$600 $flatten\core.\decoder.$598 $flatten\core.\decoder.$596
	p_core_2e_decoder_2e_bypass__x = or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(p_core_2e_decoder_2e_adder, p_core_2e_decoder_2e_logic), p_core_2e_decoder_2e_lui), p_core_2e_decoder_2e_auipc), p_core_2e_decoder_2e_csr);
	// cells $flatten\core.\decoder.$26 $flatten\core.\decoder.$24 $flatten\core.\decoder.$22 $flatten\core.\decoder.$20 $flatten\core.\decoder.$18 $flatten\core.\decoder.$16 $flatten\core.\decoder.$14
	p_core_2e_decoder_2e_rd__we = or_uu<1>(or_uu<1>(or_uu<1>(logic_not<1>(p_core_2e_decoder_2e_fmt), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<1>{0x1u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x4u})), eq_uu<1>(p_core_2e_decoder_2e_fmt, value<3>{0x5u}));
	// connection
	p_core_2e_decoder_2e_rd = p_core_2e_payload____instruction_24_27.curr.slice<11,7>().val();
	// cells $flatten\core.\decoder.$644 $flatten\core.\decoder.$642 $flatten\core.\decoder.$641 $flatten\core.\decoder.$639 $flatten\core.\decoder.$637 $flatten\core.\decoder.$635 $flatten\core.\decoder.$633 $flatten\core.\decoder.$631 $flatten\core.\decoder.$629 $flatten\core.\decoder.$627 $flatten\core.\decoder.$625 $flatten\core.\decoder.$623 $flatten\core.\decoder.$621 $flatten\core.\decoder.$615 $flatten\core.\decoder.$613 $flatten\core.\decoder.$611 $flatten\core.\decoder.$608
	p_core_2e_decoder_2e_illegal = or_uu<1>(ne_uu<1>(p_core_2e_payload____instruction_24_27.curr.slice<1,0>().val(), value<2>{0x3u}), not_u<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(or_uu<1>(p_core_2e_decoder_2e_compare, p_core_2e_decoder_2e_branch), p_core_2e_decoder_2e_adder), p_core_2e_decoder_2e_logic), p_core_2e_decoder_2e_shift), p_core_2e_decoder_2e_lui), p_core_2e_decoder_2e_auipc), p_core_2e_decoder_2e_jump), p_core_2e_decoder_2e_load), p_core_2e_decoder_2e_store), p_core_2e_decoder_2e_csr), p_core_2e_decoder_2e_ecall), p_core_2e_decoder_2e_ebreak), p_core_2e_decoder_2e_mret), p_core_2e_decoder_2e_fence__i)));
	// \src: /home/devector/Documents/riscv/minerva/minerva/core.py:164
	// cell $4
	p_dmem__wbus____adr = pos_u<32>(p_core_2e_loadstore_2e_dbus____adr.curr);
	// cells $procmux$54 $flatten\core.$299 $flatten\core.$297 $flatten\core.$295 $flatten\core.$301 $flatten\core.\w.$5 $flatten\core.\w.$3 $flatten\core.\m.$21
	p_core_2e_gprf__wp____en = (and_uu<1>(reduce_bool<1>(p_core_2e_payload____rd_24_122.curr), not_u<1>(p_core_2e_m__payload____exception.curr)) ? and_uu<1>(p_core_2e_payload____rd__we_24_124.curr, p_core_2e_w_2e_valid_24_1) : value<1>{0u});
	// connection
	p_core_2e_csrf__rp____en = and_uu<1>(p_core_2e_decoder_2e_csr, p_core_2e_d_2e_valid_24_4);
	// connection
	p_dmem_2e_ram__we = and_uu<1>(and_uu<1>(p_core_2e_loadstore_2e_dbus____we.curr, p_dmem_2e_valid), p_dmem_2e_wbus____ack.curr);
	// connection
	p_core_2e_csrf_2e_mip____w____msip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mip____w____mtip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mip____w____meip = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x344u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____we = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_csrf__wp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<0>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<0>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<1>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<1>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<2>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<2>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<3>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<3>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<4>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<4>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<5>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<5>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<6>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<6>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<7>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<7>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<8>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<8>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<9>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<9>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<10>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<10>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<11>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<11>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<12>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<12>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<13>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<13>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<14>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<14>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<15>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<15>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<16>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<16>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<17>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<17>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<18>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<18>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<19>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<19>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<20>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<20>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<21>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<21>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<22>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<22>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<23>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<23>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<24>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<24>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<25>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<25>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<26>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<26>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<27>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<27>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<28>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<28>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<29>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<29>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<30>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<30>().val() : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____w____value.slice<31>() = (eq_uu<1>(p_core_2e_csrf__wp____addr, value<13>{0x360u}) ? p_core_2e_payload____csr__result_24_116.curr.slice<31>().val() : value<1>{0u});
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/xfrm.py:516
	// cell $procmux$1765
	p_dummy_24_next = (p_rst ? value<1>{0u} : value<1>{0x1u});
	// cells $procmux$1763 $procmux$1759 $procmux$1760_CMP0 $procmux$1761_CMP0 $procmux$1762_CMP0
	p_imem_2e_wbus____dat__r_24_next = (p_rst ? value<32>{0u} : (eq_uu<1>(p_imem_2e_raddr2, value<3>{0x2u}) ? value<32>{0x13u} : (eq_uu<1>(p_imem_2e_raddr2, value<3>{0x1u}) ? value<32>{0x13u} : (logic_not<1>(p_imem_2e_raddr2) ? value<32>{0x13u} : value<32>{0u}))));
	// cells $procmux$1751 $flatten\imem.$6 $flatten\imem.$4 $flatten\imem.$2
	p_imem_2e_wbus____ack_24_next = (p_rst ? value<1>{0u} : and_uu<1>(p_imem_2e_valid, not_u<1>(p_imem_2e_wbus____ack.curr)));
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/xfrm.py:516
	// cell $procmux$1749
	p_imem_2e_adr__r_24_next = (p_rst ? value<32>{0u} : p_imem__wbus____adr);
	// cells $procmux$1737 $flatten\dmem.$6 $flatten\dmem.$4 $flatten\dmem.$2
	p_dmem_2e_wbus____ack_24_next = (p_rst ? value<1>{0u} : and_uu<1>(p_dmem_2e_valid, not_u<1>(p_dmem_2e_wbus____ack.curr)));
	// cells $procmux$1735 $4
	p_dmem_2e_adr__r_24_next = (p_rst ? value<32>{0u} : p_dmem__wbus____adr);
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/xfrm.py:516
	// cell $procmux$963
	p_core_2e_gprf_2e_mem_2e_fwd__wp__data_24_next = (p_rst ? value<32>{0u} : p_core_2e_w__result);
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/xfrm.py:516
	// cell $procmux$961
	p_core_2e_gprf_2e_mem_2e_fwd__wp__en_24_next = (p_rst ? value<1>{0u} : p_core_2e_gprf__wp____en);
	// cells $procmux$959 $procmux$957 $procmux$955 $flatten\core.\loadstore.$14 $flatten\core.\loadstore.$12 $procmux$953 $flatten\core.\loadstore.$8 $flatten\core.\loadstore.$6 $flatten\core.\loadstore.$4 $flatten\core.\loadstore.$2
	p_core_2e_loadstore_2e_dbus____cyc_24_next = (p_rst ? value<1>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? (or_uu<1>(p_dmem_2e_wbus____ack.curr, not_u<1>(p_core_2e_x_2e_valid_24_1.curr)) ? value<1>{0u} : p_core_2e_loadstore_2e_dbus____cyc.curr) : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_payload____load_24_49.curr, p_core_2e_payload____store_24_50.curr), p_core_2e_x_2e_valid_24_4), not_u<1>(p_core_2e_x_2e_stall_24_5)) ? value<1>{0x1u} : p_core_2e_loadstore_2e_dbus____cyc.curr)));
	// cells $procmux$951 $procmux$949 $procmux$947 $flatten\core.\loadstore.$28 $flatten\core.\loadstore.$26 $procmux$945 $flatten\core.\loadstore.$22 $flatten\core.\loadstore.$20 $flatten\core.\loadstore.$18 $flatten\core.\loadstore.$16
	p_core_2e_loadstore_2e_dbus____stb_24_next = (p_rst ? value<1>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? (or_uu<1>(p_dmem_2e_wbus____ack.curr, not_u<1>(p_core_2e_x_2e_valid_24_1.curr)) ? value<1>{0u} : p_core_2e_loadstore_2e_dbus____stb.curr) : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_payload____load_24_49.curr, p_core_2e_payload____store_24_50.curr), p_core_2e_x_2e_valid_24_4), not_u<1>(p_core_2e_x_2e_stall_24_5)) ? value<1>{0x1u} : p_core_2e_loadstore_2e_dbus____stb.curr)));
	// cells $procmux$943 $procmux$941 $procmux$939 $flatten\core.\loadstore.$42 $flatten\core.\loadstore.$40
	p_core_2e_loadstore_2e_m__load__data_24_next = (p_rst ? value<32>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? (or_uu<1>(p_dmem_2e_wbus____ack.curr, not_u<1>(p_core_2e_x_2e_valid_24_1.curr)) ? p_dmem_2e_wbus____dat__r.curr : p_core_2e_loadstore_2e_m__load__data.curr) : p_core_2e_loadstore_2e_m__load__data.curr));
	// cells $procmux$937 $procmux$935 $procmux$933 $flatten\core.\loadstore.$50 $flatten\core.\loadstore.$48 $flatten\core.\loadstore.$46 $flatten\core.\loadstore.$44
	p_core_2e_loadstore_2e_dbus____adr_24_next = (p_rst ? value<30>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____adr.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_payload____load_24_49.curr, p_core_2e_payload____store_24_50.curr), p_core_2e_x_2e_valid_24_4), not_u<1>(p_core_2e_x_2e_stall_24_5)) ? p_core_2e_adder_2e_x__result.slice<31,2>().val() : p_core_2e_loadstore_2e_dbus____adr.curr)));
	// cells $procmux$931 $procmux$929 $procmux$927 $flatten\core.\loadstore.$58 $flatten\core.\loadstore.$56 $flatten\core.\loadstore.$54 $flatten\core.\loadstore.$52 $procmux$448 $procmux$449_CMP0 $procmux$450_ANY $procmux$451_ANY $flatten\core.\data_sel.$7 $flatten\core.\data_sel.$4
	p_core_2e_loadstore_2e_dbus____sel_24_next = (p_rst ? value<4>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____sel.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_payload____load_24_49.curr, p_core_2e_payload____store_24_50.curr), p_core_2e_x_2e_valid_24_4), not_u<1>(p_core_2e_x_2e_stall_24_5)) ? p_core_2e_data__sel_2e_x__mask : p_core_2e_loadstore_2e_dbus____sel.curr)));
	// cells $procmux$925 $procmux$923 $procmux$921 $flatten\core.\loadstore.$66 $flatten\core.\loadstore.$64 $flatten\core.\loadstore.$62 $flatten\core.\loadstore.$60
	p_core_2e_loadstore_2e_dbus____we_24_next = (p_rst ? value<1>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____we.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_payload____load_24_49.curr, p_core_2e_payload____store_24_50.curr), p_core_2e_x_2e_valid_24_4), not_u<1>(p_core_2e_x_2e_stall_24_5)) ? p_core_2e_payload____store_24_50.curr : p_core_2e_loadstore_2e_dbus____we.curr)));
	// cells $procmux$919 $procmux$917 $procmux$915 $flatten\core.\loadstore.$74 $flatten\core.\loadstore.$72 $flatten\core.\loadstore.$70 $flatten\core.\loadstore.$68
	p_core_2e_loadstore_2e_dbus____dat__w_24_next = (p_rst ? value<32>{0u} : (p_core_2e_loadstore_2e_dbus____cyc.curr ? p_core_2e_loadstore_2e_dbus____dat__w.curr : (and_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_payload____load_24_49.curr, p_core_2e_payload____store_24_50.curr), p_core_2e_x_2e_valid_24_4), not_u<1>(p_core_2e_x_2e_stall_24_5)) ? p_core_2e_data__sel_2e_x__store__data : p_core_2e_loadstore_2e_dbus____dat__w.curr)));
	// cells $procmux$913 $procmux$909
	p_core_2e_loadstore_2e_m__load__error_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_loadstore_2e_m__load__error.curr : value<1>{0u}));
	// cells $procmux$907 $procmux$903
	p_core_2e_loadstore_2e_m__store__error_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_loadstore_2e_m__store__error.curr : value<1>{0u}));
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/xfrm.py:516
	// cell $procmux$901
	p_core_2e_loadstore_2e_m__badaddr_24_next = (p_rst ? value<30>{0u} : p_core_2e_loadstore_2e_m__badaddr.curr);
	// cells $procmux$894 $procmux$892 $procmux$890 $flatten\core.\fetch.$10 $flatten\core.\fetch.$8 $procmux$888
	p_core_2e_fetch_2e_ibus____cyc_24_next = (p_rst ? value<1>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? (or_uu<1>(p_imem_2e_wbus____ack.curr, not_u<1>(p_core_2e_f_2e_valid_24_7)) ? value<1>{0u} : p_core_2e_fetch_2e_ibus____cyc.curr) : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_fetch_2e_ibus____cyc.curr : value<1>{0x1u})));
	// cells $procmux$886 $procmux$884 $procmux$882 $flatten\core.\fetch.$20 $flatten\core.\fetch.$18 $procmux$880
	p_core_2e_fetch_2e_ibus____stb_24_next = (p_rst ? value<1>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? (or_uu<1>(p_imem_2e_wbus____ack.curr, not_u<1>(p_core_2e_f_2e_valid_24_7)) ? value<1>{0u} : p_core_2e_fetch_2e_ibus____stb.curr) : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_fetch_2e_ibus____stb.curr : value<1>{0x1u})));
	// cells $procmux$878 $procmux$876 $procmux$874 $flatten\core.\fetch.$30 $flatten\core.\fetch.$28
	p_core_2e_fetch_2e_ibus__rdata_24_next = (p_rst ? value<32>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? (or_uu<1>(p_imem_2e_wbus____ack.curr, not_u<1>(p_core_2e_f_2e_valid_24_7)) ? p_imem_2e_wbus____dat__r.curr : p_core_2e_fetch_2e_ibus__rdata.curr) : p_core_2e_fetch_2e_ibus__rdata.curr));
	// cells $procmux$872 $procmux$870 $procmux$868
	p_core_2e_fetch_2e_ibus____adr_24_next = (p_rst ? value<30>{0u} : (p_core_2e_fetch_2e_ibus____cyc.curr ? p_core_2e_fetch_2e_ibus____adr.curr : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_fetch_2e_ibus____adr.curr : p_core_2e_pc__sel_2e_a__pc.slice<31,2>().val())));
	// cells $procmux$866 $procmux$862
	p_core_2e_fetch_2e_f__fetch__error_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_fetch_2e_f__fetch__error.curr : value<1>{0u}));
	// \src: /home/devector/Downloads/oss-cad-suite/lib/python3.8/site-packages/pyhdl/amaranth/amaranth/hdl/xfrm.py:516
	// cell $procmux$860
	p_core_2e_fetch_2e_f__badaddr_24_next = (p_rst ? value<30>{0u} : p_core_2e_fetch_2e_f__badaddr.curr);
	// cells $procmux$850 $procmux$848
	p_core_2e_shifter_2e_m__direction_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_shifter_2e_m__direction.curr : p_core_2e_payload____direction_24_56.curr));
	// cells $procmux$846 $procmux$844 $flatten\core.\shifter.$14 $flatten\core.\shifter.$2
	p_core_2e_shifter_2e_m__result_24_9_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_shifter_2e_m__result_24_9.curr : sshr_uu<64>(p_core_2e_shifter_2e_x__filler.repeat<32>().concat(p_core_2e_shifter_2e_x__operand).val(), p_core_2e_shifter__x__shamt).slice<31,0>().val()));
	// cells $procmux$829 $procmux$827 $procmux$1697 $procmux$1698_CMP0
	p_core_2e_exception_2e_mstatus____r____uie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____uie : p_core_2e_exception_2e_mstatus____r____uie.curr));
	// cells $procmux$825 $procmux$823 $procmux$1695 $procmux$1696_CMP0
	p_core_2e_exception_2e_mstatus____r____sie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____sie : p_core_2e_exception_2e_mstatus____r____sie.curr));
	// cells $procmux$821 $procmux$819 $procmux$1693 $procmux$1694_CMP0
	p_core_2e_exception_2e_mstatus____r____zero0_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____zero0 : p_core_2e_exception_2e_mstatus____r____zero0.curr));
	// cells $procmux$817 $procmux$815 $procmux$813 $procmux$811
	p_core_2e_exception_2e_mstatus____r____mie_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_3 ? (p_core_2e_exception_2e_m__raise ? value<1>{0u} : (p_core_2e_payload____mret_24_117.curr ? p_core_2e_exception_2e_mstatus____r____mpie.curr : i_procmux_24_809__Y)) : i_procmux_24_809__Y));
	// cells $procmux$807 $procmux$805 $procmux$1689 $procmux$1690_CMP0
	p_core_2e_exception_2e_mstatus____r____upie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____upie : p_core_2e_exception_2e_mstatus____r____upie.curr));
	// cells $procmux$803 $procmux$801 $procmux$1687 $procmux$1688_CMP0
	p_core_2e_exception_2e_mstatus____r____spie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____spie : p_core_2e_exception_2e_mstatus____r____spie.curr));
	// cells $procmux$799 $procmux$797 $procmux$1685 $procmux$1686_CMP0
	p_core_2e_exception_2e_mstatus____r____zero1_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____zero1 : p_core_2e_exception_2e_mstatus____r____zero1.curr));
	// cells $procmux$795 $procmux$793 $procmux$791
	p_core_2e_exception_2e_mstatus____r____mpie_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_3 ? (p_core_2e_exception_2e_m__raise ? p_core_2e_exception_2e_mstatus____r____mie.curr : i_procmux_24_788__Y) : i_procmux_24_788__Y));
	// cells $procmux$786 $procmux$784 $procmux$1681 $procmux$1682_CMP0
	p_core_2e_exception_2e_mstatus____r____spp_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____spp : p_core_2e_exception_2e_mstatus____r____spp.curr));
	// cells $procmux$782 $procmux$780
	p_core_2e_exception_2e_mstatus____r____zero2_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____zero2 : p_core_2e_exception_2e_mstatus____r____zero2.curr));
	// cells $procmux$778 $procmux$776
	p_core_2e_exception_2e_mstatus____r____mpp_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____mpp : p_core_2e_exception_2e_mstatus____r____mpp.curr));
	// cells $procmux$774 $procmux$772
	p_core_2e_exception_2e_mstatus____r____fs_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____fs : p_core_2e_exception_2e_mstatus____r____fs.curr));
	// cells $procmux$770 $procmux$768
	p_core_2e_exception_2e_mstatus____r____xs_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____xs : p_core_2e_exception_2e_mstatus____r____xs.curr));
	// cells $procmux$766 $procmux$764 $procmux$1671 $procmux$1672_CMP0
	p_core_2e_exception_2e_mstatus____r____mprv_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____mprv : p_core_2e_exception_2e_mstatus____r____mprv.curr));
	// cells $procmux$762 $procmux$760 $procmux$1669 $procmux$1670_CMP0
	p_core_2e_exception_2e_mstatus____r____sum_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____sum : p_core_2e_exception_2e_mstatus____r____sum.curr));
	// cells $procmux$758 $procmux$756 $procmux$1667 $procmux$1668_CMP0
	p_core_2e_exception_2e_mstatus____r____mxr_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____mxr : p_core_2e_exception_2e_mstatus____r____mxr.curr));
	// cells $procmux$754 $procmux$752 $procmux$1665 $procmux$1666_CMP0
	p_core_2e_exception_2e_mstatus____r____tvm_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____tvm : p_core_2e_exception_2e_mstatus____r____tvm.curr));
	// cells $procmux$750 $procmux$748 $procmux$1663 $procmux$1664_CMP0
	p_core_2e_exception_2e_mstatus____r____tw_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____tw : p_core_2e_exception_2e_mstatus____r____tw.curr));
	// cells $procmux$746 $procmux$744 $procmux$1661 $procmux$1662_CMP0
	p_core_2e_exception_2e_mstatus____r____tsr_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____tsr : p_core_2e_exception_2e_mstatus____r____tsr.curr));
	// cells $procmux$833 $procmux$831
	p_core_2e_exception_2e_mstatus____r____zero3_24_next = (p_rst ? value<8>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____zero3 : p_core_2e_exception_2e_mstatus____r____zero3.curr));
	// cells $procmux$742 $procmux$740 $procmux$1679 $procmux$1680_CMP0
	p_core_2e_exception_2e_mstatus____r____sd_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mstatus____we ? p_core_2e_csrf_2e_mstatus____w____sd : p_core_2e_exception_2e_mstatus____r____sd.curr));
	// cells $procmux$734 $procmux$732
	p_core_2e_exception_2e_misa____r____extensions_24_next = (p_rst ? value<26>{0u} : (p_core_2e_csrf_2e_misa____we ? p_core_2e_csrf_2e_misa____w____extensions : p_core_2e_exception_2e_misa____r____extensions.curr));
	// cells $procmux$738 $procmux$736
	p_core_2e_exception_2e_misa____r____zero_24_next = (p_rst ? value<4>{0u} : (p_core_2e_csrf_2e_misa____we ? p_core_2e_csrf_2e_misa____w____zero : p_core_2e_exception_2e_misa____r____zero.curr));
	// cells $procmux$730 $procmux$728
	p_core_2e_exception_2e_misa____r____mxl_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_misa____we ? p_core_2e_csrf_2e_misa____w____mxl : p_core_2e_exception_2e_misa____r____mxl.curr));
	// cells $procmux$722 $procmux$720 $procmux$1565 $procmux$1566_CMP0
	p_core_2e_exception_2e_mie____r____usie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____usie : p_core_2e_exception_2e_mie____r____usie.curr));
	// cells $procmux$718 $procmux$716 $procmux$1563 $procmux$1564_CMP0
	p_core_2e_exception_2e_mie____r____ssie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____ssie : p_core_2e_exception_2e_mie____r____ssie.curr));
	// cells $procmux$714 $procmux$712 $procmux$1561 $procmux$1562_CMP0
	p_core_2e_exception_2e_mie____r____zero0_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____zero0 : p_core_2e_exception_2e_mie____r____zero0.curr));
	// cells $procmux$710 $procmux$708 $procmux$1559 $procmux$1560_CMP0
	p_core_2e_exception_2e_mie____r____msie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____msie : p_core_2e_exception_2e_mie____r____msie.curr));
	// cells $procmux$706 $procmux$704 $procmux$1557 $procmux$1558_CMP0
	p_core_2e_exception_2e_mie____r____utie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____utie : p_core_2e_exception_2e_mie____r____utie.curr));
	// cells $procmux$702 $procmux$700 $procmux$1555 $procmux$1556_CMP0
	p_core_2e_exception_2e_mie____r____stie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____stie : p_core_2e_exception_2e_mie____r____stie.curr));
	// cells $procmux$698 $procmux$696 $procmux$1553 $procmux$1554_CMP0
	p_core_2e_exception_2e_mie____r____zero1_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____zero1 : p_core_2e_exception_2e_mie____r____zero1.curr));
	// cells $procmux$694 $procmux$692 $procmux$1551 $procmux$1552_CMP0
	p_core_2e_exception_2e_mie____r____mtie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____mtie : p_core_2e_exception_2e_mie____r____mtie.curr));
	// cells $procmux$690 $procmux$688 $procmux$1549 $procmux$1550_CMP0
	p_core_2e_exception_2e_mie____r____ueie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____ueie : p_core_2e_exception_2e_mie____r____ueie.curr));
	// cells $procmux$686 $procmux$684 $procmux$1547 $procmux$1548_CMP0
	p_core_2e_exception_2e_mie____r____seie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____seie : p_core_2e_exception_2e_mie____r____seie.curr));
	// cells $procmux$682 $procmux$680 $procmux$1545 $procmux$1546_CMP0
	p_core_2e_exception_2e_mie____r____zero2_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____zero2 : p_core_2e_exception_2e_mie____r____zero2.curr));
	// cells $procmux$726 $procmux$724 $procmux$1543 $procmux$1544_CMP0
	p_core_2e_exception_2e_mie____r____meie_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____meie : p_core_2e_exception_2e_mie____r____meie.curr));
	// cells $procmux$678 $procmux$676
	p_core_2e_exception_2e_mie____r____zero3_24_next = (p_rst ? value<20>{0u} : (p_core_2e_csrf_2e_mie____we ? p_core_2e_csrf_2e_mie____w____zero3 : p_core_2e_exception_2e_mie____r____zero3.curr));
	// cells $procmux$674 $procmux$672
	p_core_2e_exception_2e_mtvec____r____mode_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_mtvec____we ? p_core_2e_csrf_2e_mtvec____w____mode : p_core_2e_exception_2e_mtvec____r____mode.curr));
	// cells $procmux$670 $procmux$668
	p_core_2e_exception_2e_mtvec____r____base_24_next = (p_rst ? value<30>{0u} : (p_core_2e_csrf_2e_mtvec____we ? p_core_2e_csrf_2e_mtvec____w____base : p_core_2e_exception_2e_mtvec____r____base.curr));
	// cells $procmux$666 $procmux$664 $procmux$1435 $procmux$1436_CMP0
	p_core_2e_exception_2e_mscratch____r____value_24_next = (p_rst ? value<32>{0u} : (p_core_2e_csrf_2e_mscratch____we ? p_core_2e_csrf_2e_mscratch____w____value : p_core_2e_exception_2e_mscratch____r____value.curr));
	// cells $procmux$662 $procmux$660
	p_core_2e_exception_2e_mepc____r____zero_24_next = (p_rst ? value<2>{0u} : (p_core_2e_csrf_2e_mepc____we ? p_core_2e_csrf_2e_mepc____w____zero : p_core_2e_exception_2e_mepc____r____zero.curr));
	// cells $procmux$658 $procmux$656 $flatten\core.\exception.$8 $flatten\core.\exception.$6 $procmux$654
	p_core_2e_exception_2e_mepc____r____base_24_next = (p_rst ? value<30>{0u} : (and_uu<1>(p_core_2e_x_2e_valid_24_1.curr, not_u<1>(p_core_2e_m_2e_stall_24_8)) ? (p_core_2e_exception_2e_m__raise ? p_core_2e_payload____pc_24_70.curr.slice<31,2>().val() : i_procmux_24_652__Y) : i_procmux_24_652__Y));
	// cells $procmux$650 $procmux$648 $procmux$646 $procmux$644 $flatten\core.\exception.$18 $procmux$516 $procmux$508 $procmux$500 $flatten\core.\exception.$16
	p_core_2e_exception_2e_mcause____r____ecode_24_next = (p_rst ? value<31>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_11 ? (p_core_2e_exception_2e_m__raise ? (i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 ? pos_u<31>(p_core_2e_exception_2e_interrupt__pe_2e_o) : pos_u<31>(p_core_2e_exception_2e_trap__pe_2e_o)) : i_procmux_24_641__Y) : i_procmux_24_641__Y));
	// cells $procmux$639 $procmux$637 $procmux$635 $procmux$633
	p_core_2e_exception_2e_mcause____r____interrupt_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_exception_2e__24_11 ? (p_core_2e_exception_2e_m__raise ? (i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 ? value<1>{0x1u} : value<1>{0u}) : i_procmux_24_630__Y) : i_procmux_24_630__Y));
	// cells $procmux$628 $procmux$626 $flatten\core.\exception.$22 $flatten\core.\exception.$20 $procmux$624 $procmux$622 $procmux$615 $procmux$616_ANY $procmux$617_ANY $procmux$618_CMP0 $procmux$619_CMP0 $procmux$620_CMP0 $procmux$621_CMP0
	p_core_2e_exception_2e_mtval____r____value_24_next = (p_rst ? value<32>{0u} : (and_uu<1>(p_core_2e_x_2e_valid_24_1.curr, not_u<1>(p_core_2e_m_2e_stall_24_8)) ? (p_core_2e_exception_2e_m__raise ? (i_flatten_5c_core_2e__5c_exception_2e__5c_trap__pe_2e__24_1 ? i_procmux_24_612__Y : (reduce_or<1>(i_procmux_24_616__CMP) ? p_core_2e_loadstore_2e_m__badaddr.curr.concat(value<2>{0u}).val() : (reduce_or<1>(i_procmux_24_617__CMP) ? p_core_2e_payload____result_24_92.curr : (eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x3u}) ? p_core_2e_payload____pc_24_70.curr : (eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x2u}) ? p_core_2e_payload____instruction_24_72.curr : (eq_uu<1>(p_core_2e_exception_2e_trap__pe_2e_o, value<4>{0x1u}) ? p_core_2e_payload____fetch__badaddr_24_76.curr.concat(value<2>{0u}).val() : (logic_not<1>(p_core_2e_exception_2e_trap__pe_2e_o) ? p_core_2e_payload____branch__target_24_108.curr : value<32>{0u}))))))) : i_procmux_24_612__Y) : i_procmux_24_612__Y));
	// cells $procmux$606 $procmux$604 $procmux$1169 $procmux$1170_CMP0
	p_core_2e_exception_2e_mip____r____usip_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____usip : p_core_2e_exception_2e_mip____r____usip.curr));
	// cells $procmux$602 $procmux$600 $procmux$1167 $procmux$1168_CMP0
	p_core_2e_exception_2e_mip____r____ssip_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____ssip : p_core_2e_exception_2e_mip____r____ssip.curr));
	// cells $procmux$598 $procmux$596 $procmux$1165 $procmux$1166_CMP0
	p_core_2e_exception_2e_mip____r____zero0_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____zero0 : p_core_2e_exception_2e_mip____r____zero0.curr));
	// cells $procmux$594 $procmux$592 $procmux$1161 $procmux$1162_CMP0
	p_core_2e_exception_2e_mip____r____utip_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____utip : p_core_2e_exception_2e_mip____r____utip.curr));
	// cells $procmux$590 $procmux$588 $procmux$1159 $procmux$1160_CMP0
	p_core_2e_exception_2e_mip____r____stip_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____stip : p_core_2e_exception_2e_mip____r____stip.curr));
	// cells $procmux$586 $procmux$584 $procmux$1157 $procmux$1158_CMP0
	p_core_2e_exception_2e_mip____r____zero1_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____zero1 : p_core_2e_exception_2e_mip____r____zero1.curr));
	// cells $procmux$582 $procmux$580 $procmux$1153 $procmux$1154_CMP0
	p_core_2e_exception_2e_mip____r____ueip_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____ueip : p_core_2e_exception_2e_mip____r____ueip.curr));
	// cells $procmux$578 $procmux$576 $procmux$1151 $procmux$1152_CMP0
	p_core_2e_exception_2e_mip____r____seip_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____seip : p_core_2e_exception_2e_mip____r____seip.curr));
	// cells $procmux$610 $procmux$608 $procmux$1149 $procmux$1150_CMP0
	p_core_2e_exception_2e_mip____r____zero2_24_next = (p_rst ? value<1>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____zero2 : p_core_2e_exception_2e_mip____r____zero2.curr));
	// cells $procmux$564 $flatten\core.\exception.$32
	p_core_2e_exception_2e_mip____r____meip_24_next = (p_rst ? value<1>{0u} : reduce_bool<1>(p_core_2e_exception_2e_irq__pending____r____value.curr));
	// cells $procmux$574 $procmux$572
	p_core_2e_exception_2e_mip____r____zero3_24_next = (p_rst ? value<20>{0u} : (p_core_2e_csrf_2e_mip____we ? p_core_2e_csrf_2e_mip____w____zero3 : p_core_2e_exception_2e_mip____r____zero3.curr));
	// cells $procmux$561 $procmux$559 $procmux$1105 $procmux$1106_CMP0
	p_core_2e_exception_2e_irq__mask____r____value_24_next = (p_rst ? value<32>{0u} : (p_core_2e_csrf_2e_irq__mask____we ? p_core_2e_csrf_2e_irq__mask____w____value : p_core_2e_exception_2e_irq__mask____r____value.curr));
	// cells $procmux$466 $procmux$464 $flatten\core.$174 $flatten\core.$172 $flatten\core.$170
	p_core_2e_adder_2e_x__sub_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_adder_2e_x__sub.curr : p_core_2e_adder__d__sub));
	// cells $procmux$412 $procmux$410
	p_core_2e_m_2e_valid_24_1_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? value<1>{0u} : p_core_2e_x_2e_valid_24_1.curr));
	// cells $procmux$406 $procmux$404 $procmux$402
	p_core_2e_x_2e_valid_24_1_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_x_2e_valid_24_1.curr : value<1>{0u}) : p_core_2e_x_2e_valid_24_4));
	// cells $procmux$400 $procmux$398 $procmux$396 $flatten\core.\d.$17 $flatten\core.\d.$14
	p_core_2e_d_2e_valid_24_1_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? (or_uu<1>(not_u<1>(p_core_2e_x_2e_stall_24_5), p_core_2e_d_2e_kill_24_15) ? value<1>{0u} : p_core_2e_d_2e_valid_24_1.curr) : p_core_2e_d_2e_valid_24_4));
	// cells $procmux$394 $procmux$392 $procmux$390 $flatten\core.\f.$18 $flatten\core.\f.$15
	p_core_2e_f_2e_valid_24_1_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? (or_uu<1>(not_u<1>(p_core_2e_d_2e_stall_24_6), p_core_2e_f_2e_kill_24_16) ? value<1>{0u} : p_core_2e_f_2e_valid_24_1.curr) : p_core_2e_f_2e_valid_24_7));
	// cells $procmux$388 $procmux$386 $procmux$384 $flatten\core.\a.$12 $flatten\core.\a.$9
	p_core_2e_a_2e_valid_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? (or_uu<1>(not_u<1>(p_core_2e_f_2e_stall_24_6), p_core_2e_a_2e_kill_24_10) ? value<1>{0u} : p_core_2e_a_2e_valid.curr) : value<1>{0x1u}));
	// cells $procmux$382 $procmux$380
	p_core_2e_m__payload____exception_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_m__payload____exception.curr : p_core_2e_exception_2e_m__raise));
	// cells $procmux$378 $procmux$376
	p_core_2e_payload____result_24_128_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____result_24_128.curr : p_core_2e_m__result));
	// cells $procmux$374 $procmux$372
	p_core_2e_payload____rd__we_24_124_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____rd__we_24_124.curr : p_core_2e_payload____rd__we_24_87.curr));
	// cells $procmux$370 $procmux$368
	p_core_2e_payload____load__data_24_131_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____load__data_24_131.curr : p_core_2e_loadstore_2e_m__load__data.curr));
	// cells $procmux$366 $procmux$364
	p_core_2e_payload____funct3_24_126_24_next = (p_rst ? value<3>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____funct3_24_126.curr : p_core_2e_payload____funct3_24_91.curr));
	// cells $procmux$362 $procmux$360
	p_core_2e_payload____load_24_130_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____load_24_130.curr : p_core_2e_payload____load_24_96.curr));
	// cells $procmux$358 $procmux$356
	p_core_2e_payload____rd_24_122_24_next = (p_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____rd_24_122.curr : p_core_2e_payload____rd_24_85.curr));
	// cells $procmux$354 $procmux$352
	p_core_2e_payload____pc_24_120_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_m_2e__24_40 ? p_core_2e_payload____pc_24_120.curr : p_core_2e_payload____pc_24_70.curr));
	// cells $procmux$350 $procmux$348
	p_core_2e_payload____result_24_92_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____result_24_92.curr : p_core_2e_x__result));
	// cells $procmux$346 $procmux$344 $procmux$50 $flatten\core.$281 $flatten\core.$280 $flatten\core.$273 $flatten\core.$272 $flatten\core.$270 $flatten\core.$277 $flatten\core.$275
	p_core_2e_payload____csr__result_24_116_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr__result_24_116.curr : p_core_2e_x__csr__result));
	// cells $procmux$342 $procmux$340
	p_core_2e_payload____csr__we_24_115_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr__we_24_115.curr : p_core_2e_payload____csr__we_24_65.curr));
	// cells $procmux$338 $procmux$336
	p_core_2e_payload____csr__adr_24_113_24_next = (p_rst ? value<12>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr__adr_24_113.curr : p_core_2e_payload____csr__adr_24_64.curr));
	// cells $procmux$334 $procmux$332
	p_core_2e_payload____csr_24_111_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____csr_24_111.curr : p_core_2e_payload____csr_24_63.curr));
	// cells $procmux$330 $procmux$328
	p_core_2e_payload____branch__predict__taken_24_109_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____branch__predict__taken_24_109.curr : p_core_2e_payload____branch__predict__taken_24_62.curr));
	// cells $procmux$326 $procmux$324 $procmux$242 $flatten\core.$415
	p_core_2e_payload____branch__target_24_108_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____branch__target_24_108.curr : p_core_2e_x__branch__target));
	// cells $procmux$322 $procmux$320 $flatten\core.$413 $flatten\core.$411
	p_core_2e_payload____branch__taken_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____branch__taken.curr : p_core_2e_x__branch__taken));
	// cells $procmux$318 $procmux$316
	p_core_2e_payload____condition__met_24_106_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____condition__met_24_106.curr : p_core_2e_compare_2e_condition__met));
	// cells $procmux$314 $procmux$312
	p_core_2e_payload____mret_24_117_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____mret_24_117.curr : p_core_2e_payload____mret_24_68.curr));
	// cells $procmux$310 $procmux$308
	p_core_2e_payload____shift_24_94_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____shift_24_94.curr : p_core_2e_payload____shift_24_55.curr));
	// cells $procmux$306 $procmux$304
	p_core_2e_payload____compare_24_101_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____compare_24_101.curr : p_core_2e_payload____compare_24_59.curr));
	// cells $procmux$302 $procmux$300
	p_core_2e_payload____store__data_24_99_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____store__data_24_99.curr : p_core_2e_data__sel_2e_x__store__data));
	// cells $procmux$298 $procmux$296
	p_core_2e_payload____store_24_98_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____store_24_98.curr : p_core_2e_payload____store_24_50.curr));
	// cells $procmux$294 $procmux$292
	p_core_2e_payload____load_24_96_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____load_24_96.curr : p_core_2e_payload____load_24_49.curr));
	// cells $procmux$290 $procmux$288
	p_core_2e_payload____funct3_24_91_24_next = (p_rst ? value<3>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____funct3_24_91.curr : p_core_2e_payload____funct3_24_48.curr));
	// cells $procmux$286 $procmux$284 $flatten\core.$409
	p_core_2e_payload____bypass__m_24_89_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____bypass__m_24_89.curr : p_core_2e_x__bypass__m));
	// cells $procmux$282 $procmux$280
	p_core_2e_payload____rd__we_24_87_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____rd__we_24_87.curr : p_core_2e_payload____rd__we_24_41.curr));
	// cells $procmux$278 $procmux$276
	p_core_2e_payload____rd_24_85_24_next = (p_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____rd_24_85.curr : p_core_2e_payload____rd_24_39.curr));
	// cells $procmux$274 $procmux$272
	p_core_2e_payload____ebreak_24_83_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____ebreak_24_83.curr : p_core_2e_payload____ebreak_24_67.curr));
	// cells $procmux$270 $procmux$268
	p_core_2e_payload____ecall_24_81_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____ecall_24_81.curr : p_core_2e_payload____ecall_24_66.curr));
	// cells $procmux$266 $procmux$264 $procmux$452 $procmux$453_CMP0 $procmux$454_ANY $flatten\core.\data_sel.$2
	p_core_2e_payload____loadstore__misaligned_24_79_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____loadstore__misaligned_24_79.curr : p_core_2e_data__sel_2e_x__misaligned));
	// cells $procmux$262 $procmux$260
	p_core_2e_payload____illegal_24_78_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____illegal_24_78.curr : p_core_2e_payload____illegal_24_38.curr));
	// cells $procmux$258 $procmux$256
	p_core_2e_payload____fetch__badaddr_24_76_24_next = (p_rst ? value<30>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____fetch__badaddr_24_76.curr : p_core_2e_payload____fetch__badaddr_24_37.curr));
	// cells $procmux$254 $procmux$252
	p_core_2e_payload____fetch__error_24_74_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____fetch__error_24_74.curr : p_core_2e_payload____fetch__error_24_35.curr));
	// cells $procmux$250 $procmux$248
	p_core_2e_payload____instruction_24_72_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____instruction_24_72.curr : p_core_2e_payload____instruction_24_33.curr));
	// cells $procmux$246 $procmux$244
	p_core_2e_payload____pc_24_70_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_x_2e__24_17 ? p_core_2e_payload____pc_24_70.curr : p_core_2e_payload____pc_24_31.curr));
	// cells $procmux$239 $procmux$237 $procmux$235
	p_core_2e_payload____src2_24_44_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____src2_24_44.curr : (p_core_2e_decoder_2e_store ? p_core_2e_decoder_2e_immediate : p_core_2e_d__src2)));
	// cells $procmux$232 $procmux$230
	p_core_2e_payload____branch__target_24_61_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____branch__target_24_61.curr : p_core_2e_predict_2e_d__branch__target));
	// cells $procmux$228 $procmux$226
	p_core_2e_payload____branch__predict__taken_24_62_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____branch__predict__taken_24_62.curr : p_core_2e_predict_2e_d__branch__taken));
	// cells $procmux$224 $procmux$222
	p_core_2e_payload____store__operand_24_45_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____store__operand_24_45.curr : p_core_2e_d__src2));
	// cells $procmux$220 $procmux$218 $procmux$67 $procmux$65 $procmux$63 $flatten\core.$305 $flatten\core.$303 $procmux$61 $flatten\core.$307 $procmux$59 $flatten\core.$309 $procmux$57 $flatten\core.$311 $procmux$22 $flatten\core.$216 $flatten\core.$214 $flatten\core.$218 $procmux$970 $flatten\core.\gprf.\mem.$10
	p_core_2e_payload____src1_24_43_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____src1_24_43.curr : p_core_2e_d__src1));
	// cells $procmux$216 $procmux$214
	p_core_2e_payload____mret_24_68_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____mret_24_68.curr : p_core_2e_decoder_2e_mret));
	// cells $procmux$212 $procmux$210
	p_core_2e_payload____ebreak_24_67_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____ebreak_24_67.curr : p_core_2e_decoder_2e_ebreak));
	// cells $procmux$208 $procmux$206
	p_core_2e_payload____ecall_24_66_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____ecall_24_66.curr : p_core_2e_decoder_2e_ecall));
	// cells $procmux$204 $procmux$202 $flatten\core.\decoder.$576 $flatten\core.\decoder.$574 $flatten\core.\decoder.$572
	p_core_2e_payload____csr__we_24_65_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____csr__we_24_65.curr : p_core_2e_decoder_2e_csr__we));
	// cells $procmux$200 $procmux$198
	p_core_2e_payload____csr__adr_24_64_24_next = (p_rst ? value<12>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____csr__adr_24_64.curr : p_core_2e_decoder_2e_immediate.slice<11,0>().val()));
	// cells $procmux$196 $procmux$194
	p_core_2e_payload____csr_24_63_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____csr_24_63.curr : p_core_2e_decoder_2e_csr));
	// cells $procmux$192 $procmux$190
	p_core_2e_payload____fence__i_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____fence__i.curr : p_core_2e_decoder_2e_fence__i));
	// cells $procmux$188 $procmux$186
	p_core_2e_payload____branch_24_60_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____branch_24_60.curr : p_core_2e_decoder_2e_branch));
	// cells $procmux$184 $procmux$182
	p_core_2e_payload____jump_24_58_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____jump_24_58.curr : p_core_2e_decoder_2e_jump));
	// cells $procmux$180 $procmux$178 $flatten\core.\decoder.$374
	p_core_2e_payload____sext_24_57_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____sext_24_57.curr : p_core_2e_decoder_2e_sext));
	// cells $procmux$176 $procmux$174 $flatten\core.\decoder.$372
	p_core_2e_payload____direction_24_56_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____direction_24_56.curr : p_core_2e_decoder_2e_direction));
	// cells $procmux$172 $procmux$170
	p_core_2e_payload____shift_24_55_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____shift_24_55.curr : p_core_2e_decoder_2e_shift));
	// cells $procmux$168 $procmux$166
	p_core_2e_payload____logic_24_52_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____logic_24_52.curr : p_core_2e_decoder_2e_logic));
	// cells $procmux$164 $procmux$162
	p_core_2e_payload____compare_24_59_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____compare_24_59.curr : p_core_2e_decoder_2e_compare));
	// cells $procmux$160 $procmux$158 $flatten\core.$339 $flatten\core.$337 $flatten\core.$335
	p_core_2e_payload____adder__sub_24_51_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____adder__sub_24_51.curr : p_core_2e_d__adder__sub));
	// cells $procmux$156 $procmux$154
	p_core_2e_payload____store_24_50_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____store_24_50.curr : p_core_2e_decoder_2e_store));
	// cells $procmux$152 $procmux$150
	p_core_2e_payload____load_24_49_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____load_24_49.curr : p_core_2e_decoder_2e_load));
	// cells $procmux$148 $procmux$146
	p_core_2e_payload____funct3_24_48_24_next = (p_rst ? value<3>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____funct3_24_48.curr : p_core_2e_decoder_2e_funct3_24_1));
	// cells $procmux$144 $procmux$142 $flatten\core.\decoder.$606
	p_core_2e_payload____bypass__m_24_47_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____bypass__m_24_47.curr : p_core_2e_decoder_2e_bypass__m));
	// cells $procmux$140 $procmux$138 $flatten\core.\decoder.$602 $flatten\core.\decoder.$600 $flatten\core.\decoder.$598 $flatten\core.\decoder.$596
	p_core_2e_payload____bypass__x_24_46_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____bypass__x_24_46.curr : p_core_2e_decoder_2e_bypass__x));
	// cells $procmux$136 $procmux$134
	p_core_2e_payload____rs1__re_24_42_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rs1__re_24_42.curr : p_core_2e_decoder_2e_rs1__re));
	// cells $procmux$132 $procmux$130 $flatten\core.\decoder.$26 $flatten\core.\decoder.$24 $flatten\core.\decoder.$22 $flatten\core.\decoder.$20 $flatten\core.\decoder.$18 $flatten\core.\decoder.$16 $flatten\core.\decoder.$14
	p_core_2e_payload____rd__we_24_41_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rd__we_24_41.curr : p_core_2e_decoder_2e_rd__we));
	// cells $procmux$128 $procmux$126
	p_core_2e_payload____rs1_24_40_24_next = (p_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rs1_24_40.curr : p_core_2e_decoder_2e_rs1));
	// cells $procmux$124 $procmux$122
	p_core_2e_payload____rd_24_39_24_next = (p_rst ? value<5>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____rd_24_39.curr : p_core_2e_decoder_2e_rd));
	// cells $procmux$120 $procmux$118 $flatten\core.\decoder.$644 $flatten\core.\decoder.$642 $flatten\core.\decoder.$641 $flatten\core.\decoder.$639 $flatten\core.\decoder.$637 $flatten\core.\decoder.$635 $flatten\core.\decoder.$633 $flatten\core.\decoder.$631 $flatten\core.\decoder.$629 $flatten\core.\decoder.$627 $flatten\core.\decoder.$625 $flatten\core.\decoder.$623 $flatten\core.\decoder.$621 $flatten\core.\decoder.$615 $flatten\core.\decoder.$613 $flatten\core.\decoder.$611 $flatten\core.\decoder.$608
	p_core_2e_payload____illegal_24_38_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____illegal_24_38.curr : p_core_2e_decoder_2e_illegal));
	// cells $procmux$116 $procmux$114
	p_core_2e_payload____fetch__badaddr_24_37_24_next = (p_rst ? value<30>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____fetch__badaddr_24_37.curr : p_core_2e_payload____fetch__badaddr_24_29.curr));
	// cells $procmux$112 $procmux$110
	p_core_2e_payload____fetch__error_24_35_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____fetch__error_24_35.curr : p_core_2e_payload____fetch__error_24_28.curr));
	// cells $procmux$108 $procmux$106
	p_core_2e_payload____instruction_24_33_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____instruction_24_33.curr : p_core_2e_payload____instruction_24_27.curr));
	// cells $procmux$104 $procmux$102
	p_core_2e_payload____pc_24_31_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_d_2e__24_36 ? p_core_2e_payload____pc_24_31.curr : p_core_2e_payload____pc_24_26.curr));
	// cells $procmux$100 $procmux$98
	p_core_2e_payload____fetch__badaddr_24_29_24_next = (p_rst ? value<30>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____fetch__badaddr_24_29.curr : p_core_2e_fetch_2e_f__badaddr.curr));
	// cells $procmux$96 $procmux$94
	p_core_2e_payload____fetch__error_24_28_24_next = (p_rst ? value<1>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____fetch__error_24_28.curr : p_core_2e_fetch_2e_f__fetch__error.curr));
	// cells $procmux$92 $procmux$90
	p_core_2e_payload____instruction_24_27_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____instruction_24_27.curr : p_core_2e_fetch_2e_f__instruction));
	// cells $procmux$88 $procmux$86
	p_core_2e_payload____pc_24_26_24_next = (p_rst ? value<32>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_payload____pc_24_26.curr : p_core_2e_payload____pc_24_24.curr.slice<31,0>().val()));
	// cells $procmux$84 $procmux$82 $flatten\core.$325
	p_core_2e_payload____pc_24_24_24_next = (p_rst ? value<33>{0xfffffffcu,0x1u} : (i_flatten_5c_core_2e__5c_a_2e__24_43 ? p_core_2e_payload____pc_24_24.curr : pos_u<33>(p_core_2e_pc__sel_2e_a__pc)));
	// cells $procmux$9 $procmux$7 $flatten\core.$146
	p_core_2e_csrf__rp____addr_24_next = (p_rst ? value<13>{0u} : (i_flatten_5c_core_2e__5c_f_2e__24_45 ? p_core_2e_csrf__rp____addr.curr : pos_u<13>(p_core_2e_fetch_2e_f__instruction.slice<31,20>().val())));
	// cells $procmux$967 $flatten\core.\gprf.\mem.$6
	p_core_2e_gprf_2e_mem_2e_collision_24_next.slice<0>() = (p_rst ? value<1>{0u} : eq_uu<1>(p_core_2e_payload____rd_24_122.curr, p_core_2e_gprf__rp1____addr));
	// cells $procmux$965 $flatten\core.\gprf.\mem.$8
	p_core_2e_gprf_2e_mem_2e_collision_24_next.slice<1>() = (p_rst ? value<1>{0u} : eq_uu<1>(p_core_2e_payload____rd_24_122.curr, p_core_2e_gprf__rp2____addr));
	// connection
	p_imem_2e_waddr = pos_u<32>(p_imem_2e_adr__r.curr.slice<31,2>().val());
	// connection
	p_dmem_2e_waddr = pos_u<32>(p_dmem_2e_adr__r.curr.slice<31,2>().val());
	// connection
	p_dmem_2e_raddr = pos_u<32>(p_dmem__wbus____adr.slice<31,2>().val());
	// connection
	p_core_2e_csrf_2e_mstatus____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x300u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_misa____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x301u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mie____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x304u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mtvec____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x305u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mscratch____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x340u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mepc____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x341u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mcause____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x342u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mtval____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x343u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_mip____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x344u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__mask____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x330u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_core_2e_csrf_2e_irq__pending____re = (eq_uu<1>(p_core_2e_csrf__rp____addr.curr, value<13>{0x360u}) ? p_core_2e_csrf__rp____en : value<1>{0u});
	// connection
	p_imem_2e_waddr2 = p_imem_2e_waddr.slice<2,0>().val();
	// connection
	p_dmem_2e_waddr2 = p_dmem_2e_waddr.slice<2,0>().val();
	// connection
	p_dmem_2e_raddr2 = p_dmem_2e_raddr.slice<2,0>().val();
	// connection
	p_dmem_2e_we = and_uu<4>(p_dmem_2e_ram__we.repeat<4>().val(), p_core_2e_loadstore_2e_dbus____sel.curr);
	// connection
	p_core_2e_decoder_2e_uimm20 = p_core_2e_payload____instruction_24_27.curr.slice<31,12>().val();
}

CXXRTL_EXTREMELY_COLD
void p_top::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	items.add(path + "core ibus__adr", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____adr, 0));
	static const value<32> const_p_core_2e_ibus____dat__w = value<32>{0u};
	items.add(path + "core ibus__dat_w", debug_item(const_p_core_2e_ibus____dat__w, 0));
	items.add(path + "core ibus__dat_r", debug_item(debug_alias(), p_imem_2e_wbus____dat__r, 0));
	static const value<4> const_p_core_2e_ibus____sel = value<4>{0xfu};
	items.add(path + "core ibus__sel", debug_item(const_p_core_2e_ibus____sel, 0));
	items.add(path + "core ibus__cyc", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	items.add(path + "core ibus__stb", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____stb, 0));
	items.add(path + "core ibus__ack", debug_item(debug_alias(), p_imem_2e_wbus____ack, 0));
	static const value<1> const_p_core_2e_ibus____we = value<1>{0u};
	items.add(path + "core ibus__we", debug_item(const_p_core_2e_ibus____we, 0));
	static const value<3> const_p_core_2e_ibus____cti = value<3>{0u};
	items.add(path + "core ibus__cti", debug_item(const_p_core_2e_ibus____cti, 0));
	static const value<2> const_p_core_2e_ibus____bte = value<2>{0u};
	items.add(path + "core ibus__bte", debug_item(const_p_core_2e_ibus____bte, 0));
	static const value<1> const_p_core_2e_ibus____err = value<1>{0u};
	items.add(path + "core ibus__err", debug_item(const_p_core_2e_ibus____err, 0));
	items.add(path + "core dbus__adr", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____adr, 0));
	items.add(path + "core dbus__dat_w", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____dat__w, 0));
	items.add(path + "core dbus__dat_r", debug_item(debug_alias(), p_dmem_2e_wbus____dat__r, 0));
	items.add(path + "core dbus__sel", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____sel, 0));
	items.add(path + "core dbus__cyc", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "core dbus__stb", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____stb, 0));
	items.add(path + "core dbus__ack", debug_item(debug_alias(), p_dmem_2e_wbus____ack, 0));
	items.add(path + "core dbus__we", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____we, 0));
	static const value<3> const_p_core_2e_dbus____cti = value<3>{0u};
	items.add(path + "core dbus__cti", debug_item(const_p_core_2e_dbus____cti, 0));
	static const value<2> const_p_core_2e_dbus____bte = value<2>{0u};
	items.add(path + "core dbus__bte", debug_item(const_p_core_2e_dbus____bte, 0));
	static const value<1> const_p_core_2e_dbus____err = value<1>{0u};
	items.add(path + "core dbus__err", debug_item(const_p_core_2e_dbus____err, 0));
	static const value<1> const_p_core_2e_software__interrupt = value<1>{0u};
	items.add(path + "core software_interrupt", debug_item(const_p_core_2e_software__interrupt, 0));
	static const value<1> const_p_core_2e_timer__interrupt = value<1>{0u};
	items.add(path + "core timer_interrupt", debug_item(const_p_core_2e_timer__interrupt, 0));
	static const value<32> const_p_core_2e_external__interrupt = value<32>{0u};
	items.add(path + "core external_interrupt", debug_item(const_p_core_2e_external__interrupt, 0));
	items.add(path + "core rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core a_valid", debug_item(debug_alias(), p_core_2e_a_2e_valid, 0));
	items.add(path + "core a_stall", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core a_kill", debug_item(debug_eval_outline, p_core_2e_a_2e_kill_24_10, 0));
	items.add(path + "core a_payload__fence_i", debug_item(debug_alias(), p_core_2e_payload____fence__i, 0));
	items.add(path + "core a_payload__branch_taken", debug_item(debug_alias(), p_core_2e_payload____branch__taken, 0));
	items.add(path + "core a_payload__branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_109, 0));
	items.add(path + "core a_payload__mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	static const value<1> const_p_core_2e_a__valid_24_1 = value<1>{0x1u};
	items.add(path + "core a_valid$1", debug_item(const_p_core_2e_a__valid_24_1, 0));
	items.add(path + "core a_d_branch_taken", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__taken, 0));
	items.add(path + "core a_valid$2", debug_item(debug_eval_outline, p_core_2e_d_2e_valid_24_4, 0));
	items.add(path + "core a_valid$3", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core a_m_raise", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core a_valid$4", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core a_stall$5", debug_item(debug_eval_outline, p_core_2e_a_2e_stall_24_5, 0));
	items.add(path + "core f_valid", debug_item(debug_alias(), p_core_2e_a_2e_valid, 0));
	items.add(path + "core f_stall", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core f_kill", debug_item(debug_eval_outline, p_core_2e_a_2e_kill_24_10, 0));
	items.add(path + "core f_valid$6", debug_item(debug_alias(), p_core_2e_f_2e_valid_24_1, 0));
	items.add(path + "core f_stall$7", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core f_kill$8", debug_item(debug_eval_outline, p_core_2e_f_2e_kill_24_16, 0));
	items.add(path + "core f_stall$9", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core f_valid$10", debug_item(debug_eval_outline, p_core_2e_f_2e_valid_24_7, 0));
	items.add(path + "core d_valid", debug_item(debug_alias(), p_core_2e_f_2e_valid_24_1, 0));
	items.add(path + "core d_stall", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core d_kill", debug_item(debug_eval_outline, p_core_2e_f_2e_kill_24_16, 0));
	items.add(path + "core d_valid$11", debug_item(debug_alias(), p_core_2e_d_2e_valid_24_1, 0));
	items.add(path + "core d_stall$12", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core d_kill$13", debug_item(debug_eval_outline, p_core_2e_d_2e_kill_24_15, 0));
	items.add(path + "core d_stall$14", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core d_d_lock", debug_item(debug_eval_outline, p_core_2e_d__d__lock, 0));
	items.add(path + "core x_valid", debug_item(debug_alias(), p_core_2e_d_2e_valid_24_1, 0));
	items.add(path + "core x_stall", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core x_kill", debug_item(debug_eval_outline, p_core_2e_d_2e_kill_24_15, 0));
	items.add(path + "core x_valid$15", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core x_stall$16", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	static const value<1> const_p_core_2e_x__kill_24_17 = value<1>{0u};
	items.add(path + "core x_kill$17", debug_item(const_p_core_2e_x__kill_24_17, 0));
	items.add(path + "core x_stall$18", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core m_stall", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	static const value<1> const_p_core_2e_m__kill = value<1>{0u};
	items.add(path + "core m_kill", debug_item(const_p_core_2e_m__kill, 0));
	items.add(path + "core m_valid$19", debug_item(debug_alias(), p_core_2e_m_2e_valid_24_1, 0));
	static const value<1> const_p_core_2e_m__stall_24_20 = value<1>{0u};
	items.add(path + "core m_stall$20", debug_item(const_p_core_2e_m__stall_24_20, 0));
	items.add(path + "core m_kill$21", debug_item(debug_eval_outline, p_core_2e_m_2e_kill_24_17, 0));
	items.add(path + "core m_payload__exception", debug_item(p_core_2e_m__payload____exception, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_payload__exception$next", debug_item(debug_eval_outline, p_core_2e_m__payload____exception_24_next, 0));
	items.add(path + "core m_stall$22", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core m_a_busy", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	items.add(path + "core m_f_busy", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__busy, 0));
	items.add(path + "core m_x_busy", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "core m_m_busy", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__busy, 0));
	items.add(path + "core w_valid", debug_item(debug_alias(), p_core_2e_m_2e_valid_24_1, 0));
	static const value<1> const_p_core_2e_w__stall = value<1>{0u};
	items.add(path + "core w_stall", debug_item(const_p_core_2e_w__stall, 0));
	items.add(path + "core w_kill", debug_item(debug_eval_outline, p_core_2e_m_2e_kill_24_17, 0));
	items.add(path + "core w_valid$23", debug_item(debug_eval_outline, p_core_2e_w_2e_valid_24_1, 0));
	items.add(path + "core pc_sel_f_pc", debug_item(debug_eval_outline, p_core_2e_pc__sel__f__pc, 0));
	items.add(path + "core pc_sel_d_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_26, 0));
	items.add(path + "core pc_sel_d_branch_predict_taken", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__taken, 0));
	items.add(path + "core pc_sel_d_branch_target", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__target, 0));
	items.add(path + "core pc_sel_d_valid", debug_item(debug_eval_outline, p_core_2e_d_2e_valid_24_4, 0));
	items.add(path + "core pc_sel_x_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_31, 0));
	items.add(path + "core pc_sel_x_fence_i", debug_item(debug_alias(), p_core_2e_payload____fence__i, 0));
	items.add(path + "core pc_sel_x_valid", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core pc_sel_m_branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_109, 0));
	items.add(path + "core pc_sel_m_branch_taken", debug_item(debug_alias(), p_core_2e_payload____branch__taken, 0));
	items.add(path + "core pc_sel_m_branch_target", debug_item(debug_alias(), p_core_2e_payload____branch__target_24_108, 0));
	items.add(path + "core pc_sel_m_exception", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core pc_sel_m_mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core pc_sel_m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core pc_sel_mtvec_r_base", debug_item(debug_alias(), p_core_2e_exception_2e_mtvec____r____base, 0));
	items.add(path + "core pc_sel_mepc_r_base", debug_item(debug_alias(), p_core_2e_exception_2e_mepc____r____base, 0));
	items.add(path + "core pc_sel_a_pc", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_a__pc, 0));
	items.add(path + "core data_sel_x_offset", debug_item(debug_eval_outline, p_core_2e_data__sel__x__offset, 0));
	items.add(path + "core data_sel_x_funct3", debug_item(debug_alias(), p_core_2e_payload____funct3_24_48, 0));
	items.add(path + "core data_sel_x_store_operand", debug_item(debug_alias(), p_core_2e_payload____store__operand_24_45, 0));
	items.add(path + "core data_sel_w_offset", debug_item(debug_eval_outline, p_core_2e_data__sel__w__offset, 0));
	items.add(path + "core data_sel_w_funct3", debug_item(debug_alias(), p_core_2e_payload____funct3_24_126, 0));
	items.add(path + "core data_sel_w_load_data", debug_item(debug_alias(), p_core_2e_payload____load__data_24_131, 0));
	items.add(path + "core data_sel_x_mask", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__mask, 0));
	items.add(path + "core data_sel_x_store_data", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__store__data, 0));
	items.add(path + "core data_sel_w_load_result", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_w__load__result, 0));
	items.add(path + "core data_sel_x_misaligned", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__misaligned, 0));
	items.add(path + "core adder_d_sub", debug_item(debug_eval_outline, p_core_2e_adder__d__sub, 0));
	items.add(path + "core adder_d_stall", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core adder_x_src1", debug_item(debug_alias(), p_core_2e_payload____src1_24_43, 0));
	items.add(path + "core adder_x_src2", debug_item(debug_alias(), p_core_2e_payload____src2_24_44, 0));
	items.add(path + "core adder_x_result", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__result, 0));
	items.add(path + "core adder_x_overflow", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__overflow, 0));
	items.add(path + "core adder_x_carry", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__carry, 0));
	items.add(path + "core compare_op", debug_item(debug_eval_outline, p_core_2e_compare__op, 0));
	items.add(path + "core compare_zero", debug_item(debug_eval_outline, p_core_2e_compare__zero, 0));
	items.add(path + "core compare_negative", debug_item(debug_eval_outline, p_core_2e_compare__negative, 0));
	items.add(path + "core compare_overflow", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__overflow, 0));
	items.add(path + "core compare_carry", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__carry, 0));
	items.add(path + "core compare_condition_met", debug_item(debug_eval_outline, p_core_2e_compare_2e_condition__met, 0));
	items.add(path + "core decoder_instruction", debug_item(debug_alias(), p_core_2e_payload____instruction_24_27, 0));
	items.add(path + "core decoder_rs1", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs1, 0));
	items.add(path + "core decoder_rs2", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs2, 0));
	items.add(path + "core decoder_csr", debug_item(debug_eval_outline, p_core_2e_decoder_2e_csr, 0));
	items.add(path + "core decoder_adder", debug_item(debug_eval_outline, p_core_2e_decoder_2e_adder, 0));
	items.add(path + "core decoder_adder_sub", debug_item(debug_eval_outline, p_core_2e_decoder_2e_adder__sub, 0));
	items.add(path + "core decoder_compare", debug_item(debug_eval_outline, p_core_2e_decoder_2e_compare, 0));
	items.add(path + "core decoder_branch", debug_item(debug_eval_outline, p_core_2e_decoder_2e_branch, 0));
	items.add(path + "core decoder_immediate", debug_item(debug_eval_outline, p_core_2e_decoder_2e_immediate, 0));
	items.add(path + "core decoder_rs1_re", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs1__re, 0));
	items.add(path + "core decoder_rs2_re", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs2__re, 0));
	items.add(path + "core decoder_lui", debug_item(debug_eval_outline, p_core_2e_decoder_2e_lui, 0));
	items.add(path + "core decoder_auipc", debug_item(debug_eval_outline, p_core_2e_decoder_2e_auipc, 0));
	items.add(path + "core decoder_jump", debug_item(debug_eval_outline, p_core_2e_decoder_2e_jump, 0));
	items.add(path + "core decoder_illegal", debug_item(debug_eval_outline, p_core_2e_decoder_2e_illegal, 0));
	items.add(path + "core decoder_rd", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rd, 0));
	items.add(path + "core decoder_rd_we", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rd__we, 0));
	items.add(path + "core decoder_bypass_x", debug_item(debug_eval_outline, p_core_2e_decoder_2e_bypass__x, 0));
	items.add(path + "core decoder_bypass_m", debug_item(debug_eval_outline, p_core_2e_decoder_2e_bypass__m, 0));
	items.add(path + "core decoder_funct3", debug_item(debug_eval_outline, p_core_2e_decoder_2e_funct3_24_1, 0));
	items.add(path + "core decoder_load", debug_item(debug_eval_outline, p_core_2e_decoder_2e_load, 0));
	items.add(path + "core decoder_store", debug_item(debug_eval_outline, p_core_2e_decoder_2e_store, 0));
	items.add(path + "core decoder_logic", debug_item(debug_eval_outline, p_core_2e_decoder_2e_logic, 0));
	items.add(path + "core decoder_shift", debug_item(debug_eval_outline, p_core_2e_decoder_2e_shift, 0));
	items.add(path + "core decoder_direction", debug_item(debug_eval_outline, p_core_2e_decoder_2e_direction, 0));
	items.add(path + "core decoder_sext", debug_item(debug_eval_outline, p_core_2e_decoder_2e_sext, 0));
	items.add(path + "core decoder_fence_i", debug_item(debug_eval_outline, p_core_2e_decoder_2e_fence__i, 0));
	items.add(path + "core decoder_csr_we", debug_item(debug_eval_outline, p_core_2e_decoder_2e_csr__we, 0));
	items.add(path + "core decoder_ecall", debug_item(debug_eval_outline, p_core_2e_decoder_2e_ecall, 0));
	items.add(path + "core decoder_ebreak", debug_item(debug_eval_outline, p_core_2e_decoder_2e_ebreak, 0));
	items.add(path + "core decoder_mret", debug_item(debug_eval_outline, p_core_2e_decoder_2e_mret, 0));
	items.add(path + "core exception_mtvec__r__base", debug_item(debug_alias(), p_core_2e_exception_2e_mtvec____r____base, 0));
	items.add(path + "core exception_mepc__r__base", debug_item(debug_alias(), p_core_2e_exception_2e_mepc____r____base, 0));
	static const value<32> const_p_core_2e_exception__external__interrupt = value<32>{0u};
	items.add(path + "core exception_external_interrupt", debug_item(const_p_core_2e_exception__external__interrupt, 0));
	static const value<1> const_p_core_2e_exception__timer__interrupt = value<1>{0u};
	items.add(path + "core exception_timer_interrupt", debug_item(const_p_core_2e_exception__timer__interrupt, 0));
	static const value<1> const_p_core_2e_exception__software__interrupt = value<1>{0u};
	items.add(path + "core exception_software_interrupt", debug_item(const_p_core_2e_exception__software__interrupt, 0));
	items.add(path + "core exception_m_fetch_misaligned", debug_item(debug_eval_outline, p_core_2e_exception__m__fetch__misaligned, 0));
	items.add(path + "core exception_m_fetch_error", debug_item(debug_alias(), p_core_2e_payload____fetch__error_24_74, 0));
	items.add(path + "core exception_m_fetch_badaddr", debug_item(debug_alias(), p_core_2e_payload____fetch__badaddr_24_76, 0));
	items.add(path + "core exception_m_load_misaligned", debug_item(debug_eval_outline, p_core_2e_exception__m__load__misaligned, 0));
	items.add(path + "core exception_m_load_error", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__load__error, 0));
	items.add(path + "core exception_m_store_misaligned", debug_item(debug_eval_outline, p_core_2e_exception__m__store__misaligned, 0));
	items.add(path + "core exception_m_store_error", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__store__error, 0));
	items.add(path + "core exception_m_loadstore_badaddr", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__badaddr, 0));
	items.add(path + "core exception_m_branch_target", debug_item(debug_alias(), p_core_2e_payload____branch__target_24_108, 0));
	items.add(path + "core exception_m_illegal", debug_item(debug_alias(), p_core_2e_payload____illegal_24_78, 0));
	items.add(path + "core exception_m_ecall", debug_item(debug_alias(), p_core_2e_payload____ecall_24_81, 0));
	items.add(path + "core exception_m_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_70, 0));
	items.add(path + "core exception_m_instruction", debug_item(debug_alias(), p_core_2e_payload____instruction_24_72, 0));
	items.add(path + "core exception_m_result", debug_item(debug_alias(), p_core_2e_payload____result_24_92, 0));
	items.add(path + "core exception_m_mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core exception_m_stall", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core exception_m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core exception_m_ebreak", debug_item(debug_alias(), p_core_2e_payload____ebreak_24_83, 0));
	items.add(path + "core exception_mstatus__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____we, 0));
	items.add(path + "core exception_mstatus__r__uie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____uie, 0));
	items.add(path + "core exception_mstatus__r__sie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____sie, 0));
	items.add(path + "core exception_mstatus__r__zero0", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero0, 0));
	items.add(path + "core exception_mstatus__r__mie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mie, 0));
	items.add(path + "core exception_mstatus__r__upie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____upie, 0));
	items.add(path + "core exception_mstatus__r__spie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____spie, 0));
	items.add(path + "core exception_mstatus__r__zero1", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero1, 0));
	items.add(path + "core exception_mstatus__r__mpie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mpie, 0));
	items.add(path + "core exception_mstatus__r__spp", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____spp, 0));
	items.add(path + "core exception_mstatus__r__zero2", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero2, 0));
	items.add(path + "core exception_mstatus__r__mpp", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mpp, 0));
	items.add(path + "core exception_mstatus__r__fs", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____fs, 0));
	items.add(path + "core exception_mstatus__r__xs", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____xs, 0));
	items.add(path + "core exception_mstatus__r__mprv", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mprv, 0));
	items.add(path + "core exception_mstatus__r__sum", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____sum, 0));
	items.add(path + "core exception_mstatus__r__mxr", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mxr, 0));
	items.add(path + "core exception_mstatus__r__tvm", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____tvm, 0));
	items.add(path + "core exception_mstatus__r__tw", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____tw, 0));
	items.add(path + "core exception_mstatus__r__tsr", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____tsr, 0));
	items.add(path + "core exception_mstatus__r__zero3", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero3, 0));
	items.add(path + "core exception_mstatus__r__sd", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____sd, 0));
	items.add(path + "core exception_mstatus__w__uie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____uie, 0));
	items.add(path + "core exception_mstatus__w__sie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sie, 0));
	items.add(path + "core exception_mstatus__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero0, 0));
	items.add(path + "core exception_mstatus__w__mie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mie, 0));
	items.add(path + "core exception_mstatus__w__upie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____upie, 0));
	items.add(path + "core exception_mstatus__w__spie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____spie, 0));
	items.add(path + "core exception_mstatus__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero1, 0));
	items.add(path + "core exception_mstatus__w__mpie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mpie, 0));
	items.add(path + "core exception_mstatus__w__spp", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____spp, 0));
	items.add(path + "core exception_mstatus__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero2, 0));
	items.add(path + "core exception_mstatus__w__mpp", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mpp, 0));
	items.add(path + "core exception_mstatus__w__fs", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____fs, 0));
	items.add(path + "core exception_mstatus__w__xs", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____xs, 0));
	items.add(path + "core exception_mstatus__w__mprv", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mprv, 0));
	items.add(path + "core exception_mstatus__w__sum", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sum, 0));
	items.add(path + "core exception_mstatus__w__mxr", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mxr, 0));
	items.add(path + "core exception_mstatus__w__tvm", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tvm, 0));
	items.add(path + "core exception_mstatus__w__tw", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tw, 0));
	items.add(path + "core exception_mstatus__w__tsr", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tsr, 0));
	items.add(path + "core exception_mstatus__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero3, 0));
	items.add(path + "core exception_mstatus__w__sd", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sd, 0));
	items.add(path + "core exception_misa__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____we, 0));
	items.add(path + "core exception_misa__r__extensions", debug_item(debug_alias(), p_core_2e_exception_2e_misa____r____extensions, 0));
	items.add(path + "core exception_misa__r__zero", debug_item(debug_alias(), p_core_2e_exception_2e_misa____r____zero, 0));
	items.add(path + "core exception_misa__r__mxl", debug_item(debug_alias(), p_core_2e_exception_2e_misa____r____mxl, 0));
	items.add(path + "core exception_misa__w__extensions", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____extensions, 0));
	items.add(path + "core exception_misa__w__zero", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____zero, 0));
	items.add(path + "core exception_misa__w__mxl", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____mxl, 0));
	items.add(path + "core exception_mie__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____we, 0));
	items.add(path + "core exception_mie__r__usie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____usie, 0));
	items.add(path + "core exception_mie__r__ssie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____ssie, 0));
	items.add(path + "core exception_mie__r__zero0", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero0, 0));
	items.add(path + "core exception_mie__r__msie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____msie, 0));
	items.add(path + "core exception_mie__r__utie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____utie, 0));
	items.add(path + "core exception_mie__r__stie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____stie, 0));
	items.add(path + "core exception_mie__r__zero1", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero1, 0));
	items.add(path + "core exception_mie__r__mtie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____mtie, 0));
	items.add(path + "core exception_mie__r__ueie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____ueie, 0));
	items.add(path + "core exception_mie__r__seie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____seie, 0));
	items.add(path + "core exception_mie__r__zero2", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero2, 0));
	items.add(path + "core exception_mie__r__meie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____meie, 0));
	items.add(path + "core exception_mie__r__zero3", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero3, 0));
	items.add(path + "core exception_mie__w__usie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____usie, 0));
	items.add(path + "core exception_mie__w__ssie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____ssie, 0));
	items.add(path + "core exception_mie__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero0, 0));
	items.add(path + "core exception_mie__w__msie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____msie, 0));
	items.add(path + "core exception_mie__w__utie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____utie, 0));
	items.add(path + "core exception_mie__w__stie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____stie, 0));
	items.add(path + "core exception_mie__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero1, 0));
	items.add(path + "core exception_mie__w__mtie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____mtie, 0));
	items.add(path + "core exception_mie__w__ueie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____ueie, 0));
	items.add(path + "core exception_mie__w__seie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____seie, 0));
	items.add(path + "core exception_mie__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero2, 0));
	items.add(path + "core exception_mie__w__meie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____meie, 0));
	items.add(path + "core exception_mie__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero3, 0));
	items.add(path + "core exception_mtvec__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____we, 0));
	items.add(path + "core exception_mtvec__r__mode", debug_item(debug_alias(), p_core_2e_exception_2e_mtvec____r____mode, 0));
	items.add(path + "core exception_mtvec__w__mode", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____w____mode, 0));
	items.add(path + "core exception_mtvec__w__base", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____w____base, 0));
	items.add(path + "core exception_mscratch__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____we, 0));
	items.add(path + "core exception_mscratch__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_mscratch____r____value, 0));
	items.add(path + "core exception_mscratch__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____w____value, 0));
	items.add(path + "core exception_mepc__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____we, 0));
	items.add(path + "core exception_mepc__r__zero", debug_item(debug_alias(), p_core_2e_exception_2e_mepc____r____zero, 0));
	items.add(path + "core exception_mepc__w__zero", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____w____zero, 0));
	items.add(path + "core exception_mepc__w__base", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____w____base, 0));
	items.add(path + "core exception_mcause__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____we, 0));
	items.add(path + "core exception_mcause__r__ecode", debug_item(debug_alias(), p_core_2e_exception_2e_mcause____r____ecode, 0));
	items.add(path + "core exception_mcause__r__interrupt", debug_item(debug_alias(), p_core_2e_exception_2e_mcause____r____interrupt, 0));
	items.add(path + "core exception_mcause__w__ecode", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____w____ecode, 0));
	items.add(path + "core exception_mcause__w__interrupt", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____w____interrupt, 0));
	items.add(path + "core exception_mtval__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____we, 0));
	items.add(path + "core exception_mtval__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_mtval____r____value, 0));
	items.add(path + "core exception_mtval__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____w____value, 0));
	items.add(path + "core exception_mip__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____we, 0));
	items.add(path + "core exception_mip__r__usip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____usip, 0));
	items.add(path + "core exception_mip__r__ssip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____ssip, 0));
	items.add(path + "core exception_mip__r__zero0", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero0, 0));
	items.add(path + "core exception_mip__r__msip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____msip, 0));
	items.add(path + "core exception_mip__r__utip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____utip, 0));
	items.add(path + "core exception_mip__r__stip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____stip, 0));
	items.add(path + "core exception_mip__r__zero1", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero1, 0));
	items.add(path + "core exception_mip__r__mtip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____mtip, 0));
	items.add(path + "core exception_mip__r__ueip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____ueip, 0));
	items.add(path + "core exception_mip__r__seip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____seip, 0));
	items.add(path + "core exception_mip__r__zero2", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero2, 0));
	items.add(path + "core exception_mip__r__meip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____meip, 0));
	items.add(path + "core exception_mip__r__zero3", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero3, 0));
	items.add(path + "core exception_mip__w__usip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____usip, 0));
	items.add(path + "core exception_mip__w__ssip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____ssip, 0));
	items.add(path + "core exception_mip__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero0, 0));
	items.add(path + "core exception_mip__w__msip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____msip, 0));
	items.add(path + "core exception_mip__w__utip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____utip, 0));
	items.add(path + "core exception_mip__w__stip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____stip, 0));
	items.add(path + "core exception_mip__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero1, 0));
	items.add(path + "core exception_mip__w__mtip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____mtip, 0));
	items.add(path + "core exception_mip__w__ueip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____ueip, 0));
	items.add(path + "core exception_mip__w__seip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____seip, 0));
	items.add(path + "core exception_mip__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero2, 0));
	items.add(path + "core exception_mip__w__meip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____meip, 0));
	items.add(path + "core exception_mip__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero3, 0));
	items.add(path + "core exception_irq_mask__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____we, 0));
	items.add(path + "core exception_irq_mask__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_irq__mask____r____value, 0));
	items.add(path + "core exception_irq_mask__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____w____value, 0));
	items.add(path + "core exception_irq_pending__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____we, 0));
	items.add(path + "core exception_irq_pending__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_irq__pending____r____value, 0));
	items.add(path + "core exception_irq_pending__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____w____value, 0));
	items.add(path + "core logic_op", debug_item(debug_eval_outline, p_core_2e_logic__op, 0));
	items.add(path + "core logic_src1", debug_item(debug_eval_outline, p_core_2e_logic__src1, 0));
	items.add(path + "core logic_src2", debug_item(debug_alias(), p_core_2e_payload____src2_24_44, 0));
	items.add(path + "core logic_result", debug_item(debug_eval_outline, p_core_2e_logic_2e_result, 0));
	items.add(path + "core predict_d_branch_target", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__target, 0));
	items.add(path + "core predict_d_branch", debug_item(debug_eval_outline, p_core_2e_decoder_2e_branch, 0));
	items.add(path + "core predict_d_jump", debug_item(debug_eval_outline, p_core_2e_decoder_2e_jump, 0));
	items.add(path + "core predict_d_offset", debug_item(debug_eval_outline, p_core_2e_decoder_2e_immediate, 0));
	items.add(path + "core predict_d_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_26, 0));
	items.add(path + "core predict_d_rs1_re", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs1__re, 0));
	items.add(path + "core shifter_x_direction", debug_item(debug_alias(), p_core_2e_payload____direction_24_56, 0));
	items.add(path + "core shifter_x_sext", debug_item(debug_alias(), p_core_2e_payload____sext_24_57, 0));
	items.add(path + "core shifter_x_shamt", debug_item(debug_eval_outline, p_core_2e_shifter__x__shamt, 0));
	items.add(path + "core shifter_x_src1", debug_item(debug_alias(), p_core_2e_payload____src1_24_43, 0));
	items.add(path + "core shifter_x_stall", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core shifter_m_result", debug_item(debug_eval_outline, p_core_2e_shifter_2e_m__result, 0));
	items.add(path + "core fetch_a_pc", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_a__pc, 0));
	items.add(path + "core fetch_a_stall", debug_item(debug_eval_outline, p_core_2e_a_2e_stall_24_5, 0));
	static const value<1> const_p_core_2e_fetch__a__valid = value<1>{0x1u};
	items.add(path + "core fetch_a_valid", debug_item(const_p_core_2e_fetch__a__valid, 0));
	items.add(path + "core fetch_f_stall", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core fetch_f_valid", debug_item(debug_eval_outline, p_core_2e_f_2e_valid_24_7, 0));
	items.add(path + "core fetch_ibus__adr", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____adr, 0));
	items.add(path + "core fetch_ibus__dat_r", debug_item(debug_alias(), p_imem_2e_wbus____dat__r, 0));
	static const value<4> const_p_core_2e_fetch__ibus____sel = value<4>{0xfu};
	items.add(path + "core fetch_ibus__sel", debug_item(const_p_core_2e_fetch__ibus____sel, 0));
	items.add(path + "core fetch_ibus__cyc", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	items.add(path + "core fetch_ibus__stb", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____stb, 0));
	items.add(path + "core fetch_ibus__ack", debug_item(debug_alias(), p_imem_2e_wbus____ack, 0));
	static const value<1> const_p_core_2e_fetch__ibus____err = value<1>{0u};
	items.add(path + "core fetch_ibus__err", debug_item(const_p_core_2e_fetch__ibus____err, 0));
	items.add(path + "core fetch_f_instruction", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__instruction, 0));
	items.add(path + "core fetch_f_fetch_error", debug_item(debug_alias(), p_core_2e_fetch_2e_f__fetch__error, 0));
	items.add(path + "core fetch_f_badaddr", debug_item(debug_alias(), p_core_2e_fetch_2e_f__badaddr, 0));
	items.add(path + "core loadstore_m_load_error", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__load__error, 0));
	items.add(path + "core loadstore_m_store_error", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__store__error, 0));
	items.add(path + "core loadstore_m_badaddr", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__badaddr, 0));
	items.add(path + "core loadstore_x_addr", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__result, 0));
	items.add(path + "core loadstore_x_mask", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__mask, 0));
	items.add(path + "core loadstore_x_load", debug_item(debug_alias(), p_core_2e_payload____load_24_49, 0));
	items.add(path + "core loadstore_x_store", debug_item(debug_alias(), p_core_2e_payload____store_24_50, 0));
	items.add(path + "core loadstore_x_store_data", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__store__data, 0));
	items.add(path + "core loadstore_x_stall", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core loadstore_x_valid", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core loadstore_m_stall", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core loadstore_m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core loadstore_dbus__adr", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____adr, 0));
	items.add(path + "core loadstore_dbus__dat_w", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____dat__w, 0));
	items.add(path + "core loadstore_dbus__dat_r", debug_item(debug_alias(), p_dmem_2e_wbus____dat__r, 0));
	items.add(path + "core loadstore_dbus__sel", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____sel, 0));
	items.add(path + "core loadstore_dbus__cyc", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "core loadstore_dbus__stb", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____stb, 0));
	items.add(path + "core loadstore_dbus__ack", debug_item(debug_alias(), p_dmem_2e_wbus____ack, 0));
	items.add(path + "core loadstore_dbus__we", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____we, 0));
	static const value<1> const_p_core_2e_loadstore__dbus____err = value<1>{0u};
	items.add(path + "core loadstore_dbus__err", debug_item(const_p_core_2e_loadstore__dbus____err, 0));
	items.add(path + "core loadstore_m_load_data", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__load__data, 0));
	items.add(path + "core gprf_rp1__addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp1____addr, 0));
	items.add(path + "core gprf_rp2__addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp2____addr, 0));
	items.add(path + "core gprf_wp__en", debug_item(debug_eval_outline, p_core_2e_gprf__wp____en, 0));
	items.add(path + "core gprf_wp__addr", debug_item(debug_alias(), p_core_2e_payload____rd_24_122, 0));
	items.add(path + "core gprf_wp__data", debug_item(debug_eval_outline, p_core_2e_w__result, 0));
	items.add(path + "core gprf_rp1__data", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_rp1____data, 0));
	items.add(path + "core gprf_rp2__data", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_rp2____data, 0));
	items.add(path + "core csrf_rp__addr", debug_item(p_core_2e_csrf__rp____addr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core csrf_rp__addr$next", debug_item(debug_eval_outline, p_core_2e_csrf__rp____addr_24_next, 0));
	items.add(path + "core csrf_rp__en", debug_item(debug_eval_outline, p_core_2e_csrf__rp____en, 0));
	items.add(path + "core csrf_wp__en", debug_item(debug_eval_outline, p_core_2e_csrf__wp____en, 0));
	items.add(path + "core csrf_wp__addr", debug_item(debug_eval_outline, p_core_2e_csrf__wp____addr, 0));
	items.add(path + "core csrf_wp__data", debug_item(debug_alias(), p_core_2e_payload____csr__result_24_116, 0));
	items.add(path + "core csrf_rp__data", debug_item(debug_eval_outline, p_core_2e_csrf_2e_rp____data, 0));
	items.add(path + "core payload__pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_24, 0));
	items.add(path + "core payload__pc$24", debug_item(p_core_2e_payload____pc_24_24, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__pc$24$next", debug_item(debug_eval_outline, p_core_2e_payload____pc_24_24_24_next, 0));
	items.add(path + "core payload__pc$25", debug_item(debug_alias(), p_core_2e_payload____pc_24_26, 0));
	items.add(path + "core payload__pc$26", debug_item(p_core_2e_payload____pc_24_26, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__pc$26$next", debug_item(debug_eval_outline, p_core_2e_payload____pc_24_26_24_next, 0));
	items.add(path + "core payload__instruction", debug_item(debug_alias(), p_core_2e_payload____instruction_24_27, 0));
	items.add(path + "core payload__instruction$27", debug_item(p_core_2e_payload____instruction_24_27, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__instruction$27$next", debug_item(debug_eval_outline, p_core_2e_payload____instruction_24_27_24_next, 0));
	items.add(path + "core payload__fetch_error", debug_item(debug_alias(), p_core_2e_payload____fetch__error_24_28, 0));
	items.add(path + "core payload__fetch_error$28", debug_item(p_core_2e_payload____fetch__error_24_28, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fetch_error$28$next", debug_item(debug_eval_outline, p_core_2e_payload____fetch__error_24_28_24_next, 0));
	items.add(path + "core payload__fetch_badaddr", debug_item(debug_alias(), p_core_2e_payload____fetch__badaddr_24_29, 0));
	items.add(path + "core payload__fetch_badaddr$29", debug_item(p_core_2e_payload____fetch__badaddr_24_29, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fetch_badaddr$29$next", debug_item(debug_eval_outline, p_core_2e_payload____fetch__badaddr_24_29_24_next, 0));
	items.add(path + "core payload__pc$30", debug_item(debug_alias(), p_core_2e_payload____pc_24_31, 0));
	items.add(path + "core payload__pc$31", debug_item(p_core_2e_payload____pc_24_31, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__pc$31$next", debug_item(debug_eval_outline, p_core_2e_payload____pc_24_31_24_next, 0));
	items.add(path + "core payload__instruction$32", debug_item(debug_alias(), p_core_2e_payload____instruction_24_33, 0));
	items.add(path + "core payload__instruction$33", debug_item(p_core_2e_payload____instruction_24_33, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__instruction$33$next", debug_item(debug_eval_outline, p_core_2e_payload____instruction_24_33_24_next, 0));
	items.add(path + "core payload__fetch_error$34", debug_item(debug_alias(), p_core_2e_payload____fetch__error_24_35, 0));
	items.add(path + "core payload__fetch_error$35", debug_item(p_core_2e_payload____fetch__error_24_35, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fetch_error$35$next", debug_item(debug_eval_outline, p_core_2e_payload____fetch__error_24_35_24_next, 0));
	items.add(path + "core payload__fetch_badaddr$36", debug_item(debug_alias(), p_core_2e_payload____fetch__badaddr_24_37, 0));
	items.add(path + "core payload__fetch_badaddr$37", debug_item(p_core_2e_payload____fetch__badaddr_24_37, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fetch_badaddr$37$next", debug_item(debug_eval_outline, p_core_2e_payload____fetch__badaddr_24_37_24_next, 0));
	items.add(path + "core payload__illegal", debug_item(debug_alias(), p_core_2e_payload____illegal_24_38, 0));
	items.add(path + "core payload__illegal$38", debug_item(p_core_2e_payload____illegal_24_38, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__illegal$38$next", debug_item(debug_eval_outline, p_core_2e_payload____illegal_24_38_24_next, 0));
	items.add(path + "core payload__rd", debug_item(debug_alias(), p_core_2e_payload____rd_24_39, 0));
	items.add(path + "core payload__rd$39", debug_item(p_core_2e_payload____rd_24_39, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rd$39$next", debug_item(debug_eval_outline, p_core_2e_payload____rd_24_39_24_next, 0));
	items.add(path + "core payload__rs1", debug_item(debug_alias(), p_core_2e_payload____rs1_24_40, 0));
	items.add(path + "core payload__rs1$40", debug_item(p_core_2e_payload____rs1_24_40, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rs1$40$next", debug_item(debug_eval_outline, p_core_2e_payload____rs1_24_40_24_next, 0));
	items.add(path + "core payload__rd_we", debug_item(debug_alias(), p_core_2e_payload____rd__we_24_41, 0));
	items.add(path + "core payload__rd_we$41", debug_item(p_core_2e_payload____rd__we_24_41, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rd_we$41$next", debug_item(debug_eval_outline, p_core_2e_payload____rd__we_24_41_24_next, 0));
	items.add(path + "core payload__rs1_re", debug_item(debug_alias(), p_core_2e_payload____rs1__re_24_42, 0));
	items.add(path + "core payload__rs1_re$42", debug_item(p_core_2e_payload____rs1__re_24_42, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rs1_re$42$next", debug_item(debug_eval_outline, p_core_2e_payload____rs1__re_24_42_24_next, 0));
	items.add(path + "core payload__src1", debug_item(debug_alias(), p_core_2e_payload____src1_24_43, 0));
	items.add(path + "core payload__src1$43", debug_item(p_core_2e_payload____src1_24_43, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__src1$43$next", debug_item(debug_eval_outline, p_core_2e_payload____src1_24_43_24_next, 0));
	items.add(path + "core payload__src2", debug_item(debug_alias(), p_core_2e_payload____src2_24_44, 0));
	items.add(path + "core payload__src2$44", debug_item(p_core_2e_payload____src2_24_44, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__src2$44$next", debug_item(debug_eval_outline, p_core_2e_payload____src2_24_44_24_next, 0));
	items.add(path + "core payload__store_operand", debug_item(debug_alias(), p_core_2e_payload____store__operand_24_45, 0));
	items.add(path + "core payload__store_operand$45", debug_item(p_core_2e_payload____store__operand_24_45, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__store_operand$45$next", debug_item(debug_eval_outline, p_core_2e_payload____store__operand_24_45_24_next, 0));
	items.add(path + "core payload__bypass_x", debug_item(debug_alias(), p_core_2e_payload____bypass__x_24_46, 0));
	items.add(path + "core payload__bypass_x$46", debug_item(p_core_2e_payload____bypass__x_24_46, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__bypass_x$46$next", debug_item(debug_eval_outline, p_core_2e_payload____bypass__x_24_46_24_next, 0));
	items.add(path + "core payload__bypass_m", debug_item(debug_alias(), p_core_2e_payload____bypass__m_24_47, 0));
	items.add(path + "core payload__bypass_m$47", debug_item(p_core_2e_payload____bypass__m_24_47, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__bypass_m$47$next", debug_item(debug_eval_outline, p_core_2e_payload____bypass__m_24_47_24_next, 0));
	items.add(path + "core payload__funct3", debug_item(debug_alias(), p_core_2e_payload____funct3_24_48, 0));
	items.add(path + "core payload__funct3$48", debug_item(p_core_2e_payload____funct3_24_48, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__funct3$48$next", debug_item(debug_eval_outline, p_core_2e_payload____funct3_24_48_24_next, 0));
	items.add(path + "core payload__load", debug_item(debug_alias(), p_core_2e_payload____load_24_49, 0));
	items.add(path + "core payload__load$49", debug_item(p_core_2e_payload____load_24_49, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__load$49$next", debug_item(debug_eval_outline, p_core_2e_payload____load_24_49_24_next, 0));
	items.add(path + "core payload__store", debug_item(debug_alias(), p_core_2e_payload____store_24_50, 0));
	items.add(path + "core payload__store$50", debug_item(p_core_2e_payload____store_24_50, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__store$50$next", debug_item(debug_eval_outline, p_core_2e_payload____store_24_50_24_next, 0));
	items.add(path + "core payload__adder_sub", debug_item(debug_alias(), p_core_2e_payload____adder__sub_24_51, 0));
	items.add(path + "core payload__adder_sub$51", debug_item(p_core_2e_payload____adder__sub_24_51, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__adder_sub$51$next", debug_item(debug_eval_outline, p_core_2e_payload____adder__sub_24_51_24_next, 0));
	items.add(path + "core payload__logic", debug_item(debug_alias(), p_core_2e_payload____logic_24_52, 0));
	items.add(path + "core payload__logic$52", debug_item(p_core_2e_payload____logic_24_52, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__logic$52$next", debug_item(debug_eval_outline, p_core_2e_payload____logic_24_52_24_next, 0));
	static const value<1> const_p_core_2e_payload____multiply = value<1>{0u};
	items.add(path + "core payload__multiply", debug_item(const_p_core_2e_payload____multiply, 0));
	static const value<1> const_p_core_2e_payload____multiply_24_53 = value<1>{0u};
	items.add(path + "core payload__multiply$53", debug_item(const_p_core_2e_payload____multiply_24_53, 0));
	static const value<1> const_p_core_2e_payload____divide = value<1>{0u};
	items.add(path + "core payload__divide", debug_item(const_p_core_2e_payload____divide, 0));
	static const value<1> const_p_core_2e_payload____divide_24_54 = value<1>{0u};
	items.add(path + "core payload__divide$54", debug_item(const_p_core_2e_payload____divide_24_54, 0));
	items.add(path + "core payload__shift", debug_item(debug_alias(), p_core_2e_payload____shift_24_55, 0));
	items.add(path + "core payload__shift$55", debug_item(p_core_2e_payload____shift_24_55, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__shift$55$next", debug_item(debug_eval_outline, p_core_2e_payload____shift_24_55_24_next, 0));
	items.add(path + "core payload__direction", debug_item(debug_alias(), p_core_2e_payload____direction_24_56, 0));
	items.add(path + "core payload__direction$56", debug_item(p_core_2e_payload____direction_24_56, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__direction$56$next", debug_item(debug_eval_outline, p_core_2e_payload____direction_24_56_24_next, 0));
	items.add(path + "core payload__sext", debug_item(debug_alias(), p_core_2e_payload____sext_24_57, 0));
	items.add(path + "core payload__sext$57", debug_item(p_core_2e_payload____sext_24_57, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__sext$57$next", debug_item(debug_eval_outline, p_core_2e_payload____sext_24_57_24_next, 0));
	items.add(path + "core payload__jump", debug_item(debug_alias(), p_core_2e_payload____jump_24_58, 0));
	items.add(path + "core payload__jump$58", debug_item(p_core_2e_payload____jump_24_58, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__jump$58$next", debug_item(debug_eval_outline, p_core_2e_payload____jump_24_58_24_next, 0));
	items.add(path + "core payload__compare", debug_item(debug_alias(), p_core_2e_payload____compare_24_59, 0));
	items.add(path + "core payload__compare$59", debug_item(p_core_2e_payload____compare_24_59, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__compare$59$next", debug_item(debug_eval_outline, p_core_2e_payload____compare_24_59_24_next, 0));
	items.add(path + "core payload__branch", debug_item(debug_alias(), p_core_2e_payload____branch_24_60, 0));
	items.add(path + "core payload__branch$60", debug_item(p_core_2e_payload____branch_24_60, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__branch$60$next", debug_item(debug_eval_outline, p_core_2e_payload____branch_24_60_24_next, 0));
	items.add(path + "core payload__branch_target", debug_item(debug_alias(), p_core_2e_payload____branch__target_24_61, 0));
	items.add(path + "core payload__branch_target$61", debug_item(p_core_2e_payload____branch__target_24_61, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__branch_target$61$next", debug_item(debug_eval_outline, p_core_2e_payload____branch__target_24_61_24_next, 0));
	items.add(path + "core payload__branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_62, 0));
	items.add(path + "core payload__branch_predict_taken$62", debug_item(p_core_2e_payload____branch__predict__taken_24_62, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__branch_predict_taken$62$next", debug_item(debug_eval_outline, p_core_2e_payload____branch__predict__taken_24_62_24_next, 0));
	items.add(path + "core payload__fence_i", debug_item(p_core_2e_payload____fence__i, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fence_i$next", debug_item(debug_eval_outline, p_core_2e_payload____fence__i_24_next, 0));
	items.add(path + "core payload__csr", debug_item(debug_alias(), p_core_2e_payload____csr_24_63, 0));
	items.add(path + "core payload__csr$63", debug_item(p_core_2e_payload____csr_24_63, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr$63$next", debug_item(debug_eval_outline, p_core_2e_payload____csr_24_63_24_next, 0));
	items.add(path + "core payload__csr_adr", debug_item(debug_alias(), p_core_2e_payload____csr__adr_24_64, 0));
	items.add(path + "core payload__csr_adr$64", debug_item(p_core_2e_payload____csr__adr_24_64, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr_adr$64$next", debug_item(debug_eval_outline, p_core_2e_payload____csr__adr_24_64_24_next, 0));
	items.add(path + "core payload__csr_we", debug_item(debug_alias(), p_core_2e_payload____csr__we_24_65, 0));
	items.add(path + "core payload__csr_we$65", debug_item(p_core_2e_payload____csr__we_24_65, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr_we$65$next", debug_item(debug_eval_outline, p_core_2e_payload____csr__we_24_65_24_next, 0));
	items.add(path + "core payload__ecall", debug_item(debug_alias(), p_core_2e_payload____ecall_24_66, 0));
	items.add(path + "core payload__ecall$66", debug_item(p_core_2e_payload____ecall_24_66, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__ecall$66$next", debug_item(debug_eval_outline, p_core_2e_payload____ecall_24_66_24_next, 0));
	items.add(path + "core payload__ebreak", debug_item(debug_alias(), p_core_2e_payload____ebreak_24_67, 0));
	items.add(path + "core payload__ebreak$67", debug_item(p_core_2e_payload____ebreak_24_67, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__ebreak$67$next", debug_item(debug_eval_outline, p_core_2e_payload____ebreak_24_67_24_next, 0));
	items.add(path + "core payload__mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_68, 0));
	items.add(path + "core payload__mret$68", debug_item(p_core_2e_payload____mret_24_68, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__mret$68$next", debug_item(debug_eval_outline, p_core_2e_payload____mret_24_68_24_next, 0));
	items.add(path + "core payload__pc$69", debug_item(debug_alias(), p_core_2e_payload____pc_24_70, 0));
	items.add(path + "core payload__pc$70", debug_item(p_core_2e_payload____pc_24_70, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__pc$70$next", debug_item(debug_eval_outline, p_core_2e_payload____pc_24_70_24_next, 0));
	items.add(path + "core payload__instruction$71", debug_item(debug_alias(), p_core_2e_payload____instruction_24_72, 0));
	items.add(path + "core payload__instruction$72", debug_item(p_core_2e_payload____instruction_24_72, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__instruction$72$next", debug_item(debug_eval_outline, p_core_2e_payload____instruction_24_72_24_next, 0));
	items.add(path + "core payload__fetch_error$73", debug_item(debug_alias(), p_core_2e_payload____fetch__error_24_74, 0));
	items.add(path + "core payload__fetch_error$74", debug_item(p_core_2e_payload____fetch__error_24_74, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fetch_error$74$next", debug_item(debug_eval_outline, p_core_2e_payload____fetch__error_24_74_24_next, 0));
	items.add(path + "core payload__fetch_badaddr$75", debug_item(debug_alias(), p_core_2e_payload____fetch__badaddr_24_76, 0));
	items.add(path + "core payload__fetch_badaddr$76", debug_item(p_core_2e_payload____fetch__badaddr_24_76, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__fetch_badaddr$76$next", debug_item(debug_eval_outline, p_core_2e_payload____fetch__badaddr_24_76_24_next, 0));
	items.add(path + "core payload__illegal$77", debug_item(debug_alias(), p_core_2e_payload____illegal_24_78, 0));
	items.add(path + "core payload__illegal$78", debug_item(p_core_2e_payload____illegal_24_78, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__illegal$78$next", debug_item(debug_eval_outline, p_core_2e_payload____illegal_24_78_24_next, 0));
	items.add(path + "core payload__loadstore_misaligned", debug_item(debug_alias(), p_core_2e_payload____loadstore__misaligned_24_79, 0));
	items.add(path + "core payload__loadstore_misaligned$79", debug_item(p_core_2e_payload____loadstore__misaligned_24_79, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__loadstore_misaligned$79$next", debug_item(debug_eval_outline, p_core_2e_payload____loadstore__misaligned_24_79_24_next, 0));
	items.add(path + "core payload__ecall$80", debug_item(debug_alias(), p_core_2e_payload____ecall_24_81, 0));
	items.add(path + "core payload__ecall$81", debug_item(p_core_2e_payload____ecall_24_81, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__ecall$81$next", debug_item(debug_eval_outline, p_core_2e_payload____ecall_24_81_24_next, 0));
	items.add(path + "core payload__ebreak$82", debug_item(debug_alias(), p_core_2e_payload____ebreak_24_83, 0));
	items.add(path + "core payload__ebreak$83", debug_item(p_core_2e_payload____ebreak_24_83, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__ebreak$83$next", debug_item(debug_eval_outline, p_core_2e_payload____ebreak_24_83_24_next, 0));
	items.add(path + "core payload__rd$84", debug_item(debug_alias(), p_core_2e_payload____rd_24_85, 0));
	items.add(path + "core payload__rd$85", debug_item(p_core_2e_payload____rd_24_85, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rd$85$next", debug_item(debug_eval_outline, p_core_2e_payload____rd_24_85_24_next, 0));
	items.add(path + "core payload__rd_we$86", debug_item(debug_alias(), p_core_2e_payload____rd__we_24_87, 0));
	items.add(path + "core payload__rd_we$87", debug_item(p_core_2e_payload____rd__we_24_87, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rd_we$87$next", debug_item(debug_eval_outline, p_core_2e_payload____rd__we_24_87_24_next, 0));
	items.add(path + "core payload__bypass_m$88", debug_item(debug_alias(), p_core_2e_payload____bypass__m_24_89, 0));
	items.add(path + "core payload__bypass_m$89", debug_item(p_core_2e_payload____bypass__m_24_89, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__bypass_m$89$next", debug_item(debug_eval_outline, p_core_2e_payload____bypass__m_24_89_24_next, 0));
	items.add(path + "core payload__funct3$90", debug_item(debug_alias(), p_core_2e_payload____funct3_24_91, 0));
	items.add(path + "core payload__funct3$91", debug_item(p_core_2e_payload____funct3_24_91, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__funct3$91$next", debug_item(debug_eval_outline, p_core_2e_payload____funct3_24_91_24_next, 0));
	items.add(path + "core payload__result", debug_item(debug_alias(), p_core_2e_payload____result_24_92, 0));
	items.add(path + "core payload__result$92", debug_item(p_core_2e_payload____result_24_92, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__result$92$next", debug_item(debug_eval_outline, p_core_2e_payload____result_24_92_24_next, 0));
	items.add(path + "core payload__shift$93", debug_item(debug_alias(), p_core_2e_payload____shift_24_94, 0));
	items.add(path + "core payload__shift$94", debug_item(p_core_2e_payload____shift_24_94, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__shift$94$next", debug_item(debug_eval_outline, p_core_2e_payload____shift_24_94_24_next, 0));
	items.add(path + "core payload__load$95", debug_item(debug_alias(), p_core_2e_payload____load_24_96, 0));
	items.add(path + "core payload__load$96", debug_item(p_core_2e_payload____load_24_96, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__load$96$next", debug_item(debug_eval_outline, p_core_2e_payload____load_24_96_24_next, 0));
	items.add(path + "core payload__store$97", debug_item(debug_alias(), p_core_2e_payload____store_24_98, 0));
	items.add(path + "core payload__store$98", debug_item(p_core_2e_payload____store_24_98, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__store$98$next", debug_item(debug_eval_outline, p_core_2e_payload____store_24_98_24_next, 0));
	items.add(path + "core payload__store_data", debug_item(debug_alias(), p_core_2e_payload____store__data_24_99, 0));
	items.add(path + "core payload__store_data$99", debug_item(p_core_2e_payload____store__data_24_99, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__store_data$99$next", debug_item(debug_eval_outline, p_core_2e_payload____store__data_24_99_24_next, 0));
	items.add(path + "core payload__compare$100", debug_item(debug_alias(), p_core_2e_payload____compare_24_101, 0));
	items.add(path + "core payload__compare$101", debug_item(p_core_2e_payload____compare_24_101, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__compare$101$next", debug_item(debug_eval_outline, p_core_2e_payload____compare_24_101_24_next, 0));
	static const value<1> const_p_core_2e_payload____multiply_24_102 = value<1>{0u};
	items.add(path + "core payload__multiply$102", debug_item(const_p_core_2e_payload____multiply_24_102, 0));
	static const value<1> const_p_core_2e_payload____multiply_24_103 = value<1>{0u};
	items.add(path + "core payload__multiply$103", debug_item(const_p_core_2e_payload____multiply_24_103, 0));
	static const value<1> const_p_core_2e_payload____divide_24_104 = value<1>{0u};
	items.add(path + "core payload__divide$104", debug_item(const_p_core_2e_payload____divide_24_104, 0));
	static const value<1> const_p_core_2e_payload____divide_24_105 = value<1>{0u};
	items.add(path + "core payload__divide$105", debug_item(const_p_core_2e_payload____divide_24_105, 0));
	items.add(path + "core payload__condition_met", debug_item(debug_alias(), p_core_2e_payload____condition__met_24_106, 0));
	items.add(path + "core payload__condition_met$106", debug_item(p_core_2e_payload____condition__met_24_106, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__condition_met$106$next", debug_item(debug_eval_outline, p_core_2e_payload____condition__met_24_106_24_next, 0));
	items.add(path + "core payload__branch_target$107", debug_item(debug_alias(), p_core_2e_payload____branch__target_24_108, 0));
	items.add(path + "core payload__branch_target$108", debug_item(p_core_2e_payload____branch__target_24_108, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__branch_target$108$next", debug_item(debug_eval_outline, p_core_2e_payload____branch__target_24_108_24_next, 0));
	items.add(path + "core payload__branch_taken", debug_item(p_core_2e_payload____branch__taken, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__branch_taken$next", debug_item(debug_eval_outline, p_core_2e_payload____branch__taken_24_next, 0));
	items.add(path + "core payload__branch_predict_taken$109", debug_item(p_core_2e_payload____branch__predict__taken_24_109, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__branch_predict_taken$109$next", debug_item(debug_eval_outline, p_core_2e_payload____branch__predict__taken_24_109_24_next, 0));
	items.add(path + "core payload__csr$110", debug_item(debug_alias(), p_core_2e_payload____csr_24_111, 0));
	items.add(path + "core payload__csr$111", debug_item(p_core_2e_payload____csr_24_111, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr$111$next", debug_item(debug_eval_outline, p_core_2e_payload____csr_24_111_24_next, 0));
	items.add(path + "core payload__csr_adr$112", debug_item(debug_alias(), p_core_2e_payload____csr__adr_24_113, 0));
	items.add(path + "core payload__csr_adr$113", debug_item(p_core_2e_payload____csr__adr_24_113, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr_adr$113$next", debug_item(debug_eval_outline, p_core_2e_payload____csr__adr_24_113_24_next, 0));
	items.add(path + "core payload__csr_we$114", debug_item(debug_alias(), p_core_2e_payload____csr__we_24_115, 0));
	items.add(path + "core payload__csr_we$115", debug_item(p_core_2e_payload____csr__we_24_115, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr_we$115$next", debug_item(debug_eval_outline, p_core_2e_payload____csr__we_24_115_24_next, 0));
	items.add(path + "core payload__csr_result", debug_item(debug_alias(), p_core_2e_payload____csr__result_24_116, 0));
	items.add(path + "core payload__csr_result$116", debug_item(p_core_2e_payload____csr__result_24_116, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__csr_result$116$next", debug_item(debug_eval_outline, p_core_2e_payload____csr__result_24_116_24_next, 0));
	items.add(path + "core payload__mret$117", debug_item(p_core_2e_payload____mret_24_117, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__mret$117$next", debug_item(debug_eval_outline, p_core_2e_payload____mret_24_117_24_next, 0));
	static const value<1> const_p_core_2e_payload____exception = value<1>{0u};
	items.add(path + "core payload__exception", debug_item(const_p_core_2e_payload____exception, 0));
	static const value<1> const_p_core_2e_payload____exception_24_118 = value<1>{0u};
	items.add(path + "core payload__exception$118", debug_item(const_p_core_2e_payload____exception_24_118, 0));
	items.add(path + "core payload__pc$119", debug_item(debug_alias(), p_core_2e_payload____pc_24_120, 0));
	items.add(path + "core payload__pc$120", debug_item(p_core_2e_payload____pc_24_120, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__pc$120$next", debug_item(debug_eval_outline, p_core_2e_payload____pc_24_120_24_next, 0));
	items.add(path + "core payload__rd$121", debug_item(debug_alias(), p_core_2e_payload____rd_24_122, 0));
	items.add(path + "core payload__rd$122", debug_item(p_core_2e_payload____rd_24_122, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rd$122$next", debug_item(debug_eval_outline, p_core_2e_payload____rd_24_122_24_next, 0));
	items.add(path + "core payload__rd_we$123", debug_item(debug_alias(), p_core_2e_payload____rd__we_24_124, 0));
	items.add(path + "core payload__rd_we$124", debug_item(p_core_2e_payload____rd__we_24_124, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__rd_we$124$next", debug_item(debug_eval_outline, p_core_2e_payload____rd__we_24_124_24_next, 0));
	items.add(path + "core payload__funct3$125", debug_item(debug_alias(), p_core_2e_payload____funct3_24_126, 0));
	items.add(path + "core payload__funct3$126", debug_item(p_core_2e_payload____funct3_24_126, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__funct3$126$next", debug_item(debug_eval_outline, p_core_2e_payload____funct3_24_126_24_next, 0));
	items.add(path + "core payload__result$127", debug_item(debug_alias(), p_core_2e_payload____result_24_128, 0));
	items.add(path + "core payload__result$128", debug_item(p_core_2e_payload____result_24_128, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__result$128$next", debug_item(debug_eval_outline, p_core_2e_payload____result_24_128_24_next, 0));
	items.add(path + "core payload__load$129", debug_item(debug_alias(), p_core_2e_payload____load_24_130, 0));
	items.add(path + "core payload__load$130", debug_item(p_core_2e_payload____load_24_130, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__load$130$next", debug_item(debug_eval_outline, p_core_2e_payload____load_24_130_24_next, 0));
	items.add(path + "core payload__load_data", debug_item(debug_alias(), p_core_2e_payload____load__data_24_131, 0));
	items.add(path + "core payload__load_data$131", debug_item(p_core_2e_payload____load__data_24_131, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core payload__load_data$131$next", debug_item(debug_eval_outline, p_core_2e_payload____load__data_24_131_24_next, 0));
	static const value<1> const_p_core_2e_payload____multiply_24_132 = value<1>{0u};
	items.add(path + "core payload__multiply$132", debug_item(const_p_core_2e_payload____multiply_24_132, 0));
	static const value<1> const_p_core_2e_payload____multiply_24_133 = value<1>{0u};
	items.add(path + "core payload__multiply$133", debug_item(const_p_core_2e_payload____multiply_24_133, 0));
	items.add(path + "core payload__exception$134", debug_item(debug_alias(), p_core_2e_m__payload____exception, 0));
	static const value<32> const_p_core_2e_ibus____dat__w_24_135 = value<32>{0u};
	items.add(path + "core ibus__dat_w$135", debug_item(const_p_core_2e_ibus____dat__w_24_135, 0));
	static const value<1> const_p_core_2e_ibus____we_24_136 = value<1>{0u};
	items.add(path + "core ibus__we$136", debug_item(const_p_core_2e_ibus____we_24_136, 0));
	static const value<3> const_p_core_2e_ibus____cti_24_137 = value<3>{0u};
	items.add(path + "core ibus__cti$137", debug_item(const_p_core_2e_ibus____cti_24_137, 0));
	static const value<2> const_p_core_2e_ibus____bte_24_138 = value<2>{0u};
	items.add(path + "core ibus__bte$138", debug_item(const_p_core_2e_ibus____bte_24_138, 0));
	static const value<3> const_p_core_2e_dbus____cti_24_187 = value<3>{0u};
	items.add(path + "core dbus__cti$187", debug_item(const_p_core_2e_dbus____cti_24_187, 0));
	static const value<2> const_p_core_2e_dbus____bte_24_188 = value<2>{0u};
	items.add(path + "core dbus__bte$188", debug_item(const_p_core_2e_dbus____bte_24_188, 0));
	items.add(path + "core d_raw_rs1_x", debug_item(debug_eval_outline, p_core_2e_d__raw__rs1__x, 0));
	items.add(path + "core d_raw_rs2_x", debug_item(debug_eval_outline, p_core_2e_d__raw__rs2__x, 0));
	items.add(path + "core d_raw_rs1_m", debug_item(debug_eval_outline, p_core_2e_d__raw__rs1__m, 0));
	items.add(path + "core d_raw_rs2_m", debug_item(debug_eval_outline, p_core_2e_d__raw__rs2__m, 0));
	items.add(path + "core d_raw_rs1_w", debug_item(debug_eval_outline, p_core_2e_d__raw__rs1__w, 0));
	items.add(path + "core d_raw_rs2_w", debug_item(debug_eval_outline, p_core_2e_d__raw__rs2__w, 0));
	items.add(path + "core d_raw_csr_x", debug_item(debug_eval_outline, p_core_2e_d__raw__csr__x, 0));
	items.add(path + "core d_raw_csr_m", debug_item(debug_eval_outline, p_core_2e_d__raw__csr__m, 0));
	items.add(path + "core d_lock_x", debug_item(debug_eval_outline, p_core_2e_d__lock__x, 0));
	items.add(path + "core d_lock_m", debug_item(debug_eval_outline, p_core_2e_d__lock__m, 0));
	items.add(path + "core x_result", debug_item(debug_eval_outline, p_core_2e_x__result, 0));
	items.add(path + "core m_result", debug_item(debug_eval_outline, p_core_2e_m__result, 0));
	items.add(path + "core w_result", debug_item(debug_eval_outline, p_core_2e_w__result, 0));
	items.add(path + "core x_csr_result", debug_item(debug_eval_outline, p_core_2e_x__csr__result, 0));
	items.add(path + "core d_src1", debug_item(debug_eval_outline, p_core_2e_d__src1, 0));
	items.add(path + "core d_src2", debug_item(debug_eval_outline, p_core_2e_d__src2, 0));
	items.add(path + "core d_adder_sub", debug_item(debug_eval_outline, p_core_2e_d__adder__sub, 0));
	items.add(path + "core x_bypass_m", debug_item(debug_eval_outline, p_core_2e_x__bypass__m, 0));
	items.add(path + "core x_branch_taken", debug_item(debug_eval_outline, p_core_2e_x__branch__taken, 0));
	items.add(path + "core x_branch_target", debug_item(debug_eval_outline, p_core_2e_x__branch__target, 0));
	items.add(path + "core a kill$10", debug_item(debug_eval_outline, p_core_2e_a_2e_kill_24_10, 0));
	items.add(path + "core a stall$5", debug_item(debug_eval_outline, p_core_2e_a_2e_stall_24_5, 0));
	items.add(path + "core a valid$4", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core a m_raise", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core a valid$3", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core a valid$2", debug_item(debug_eval_outline, p_core_2e_d_2e_valid_24_4, 0));
	items.add(path + "core a d_branch_taken", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__taken, 0));
	static const value<1> const_p_core_2e_a_2e_valid_24_1 = value<1>{0x1u};
	items.add(path + "core a valid$1", debug_item(const_p_core_2e_a_2e_valid_24_1, 0));
	items.add(path + "core a payload__mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core a payload__branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_109, 0));
	items.add(path + "core a payload__branch_taken", debug_item(debug_alias(), p_core_2e_payload____branch__taken, 0));
	items.add(path + "core a payload__fence_i", debug_item(debug_alias(), p_core_2e_payload____fence__i, 0));
	items.add(path + "core a kill", debug_item(debug_eval_outline, p_core_2e_a_2e_kill_24_10, 0));
	items.add(path + "core a stall", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core a valid$next", debug_item(debug_eval_outline, p_core_2e_a_2e_valid_24_next, 0));
	items.add(path + "core a valid", debug_item(p_core_2e_a_2e_valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core a clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core a rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core f kill$16", debug_item(debug_eval_outline, p_core_2e_f_2e_kill_24_16, 0));
	items.add(path + "core f valid$7", debug_item(debug_eval_outline, p_core_2e_f_2e_valid_24_7, 0));
	items.add(path + "core f stall$6", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core f valid$5", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core f m_raise", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core f valid$4", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core f payload__mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core f payload__branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_109, 0));
	items.add(path + "core f payload__branch_taken", debug_item(debug_alias(), p_core_2e_payload____branch__taken, 0));
	items.add(path + "core f payload__fence_i", debug_item(debug_alias(), p_core_2e_payload____fence__i, 0));
	items.add(path + "core f kill$3", debug_item(debug_eval_outline, p_core_2e_f_2e_kill_24_16, 0));
	items.add(path + "core f stall$2", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core f valid$1$next", debug_item(debug_eval_outline, p_core_2e_f_2e_valid_24_1_24_next, 0));
	items.add(path + "core f valid$1", debug_item(p_core_2e_f_2e_valid_24_1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core f kill", debug_item(debug_eval_outline, p_core_2e_a_2e_kill_24_10, 0));
	items.add(path + "core f stall", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	items.add(path + "core f valid", debug_item(debug_alias(), p_core_2e_a_2e_valid, 0));
	items.add(path + "core f clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core f rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core d kill$15", debug_item(debug_eval_outline, p_core_2e_d_2e_kill_24_15, 0));
	items.add(path + "core d d_lock", debug_item(debug_eval_outline, p_core_2e_d__d__lock, 0));
	items.add(path + "core d stall$6", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core d valid$5", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core d m_raise", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core d valid$4", debug_item(debug_eval_outline, p_core_2e_d_2e_valid_24_4, 0));
	items.add(path + "core d payload__mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core d payload__branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_109, 0));
	items.add(path + "core d payload__branch_taken", debug_item(debug_alias(), p_core_2e_payload____branch__taken, 0));
	items.add(path + "core d kill$3", debug_item(debug_eval_outline, p_core_2e_d_2e_kill_24_15, 0));
	items.add(path + "core d stall$2", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core d valid$1$next", debug_item(debug_eval_outline, p_core_2e_d_2e_valid_24_1_24_next, 0));
	items.add(path + "core d valid$1", debug_item(p_core_2e_d_2e_valid_24_1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d kill", debug_item(debug_eval_outline, p_core_2e_f_2e_kill_24_16, 0));
	items.add(path + "core d stall", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core d valid", debug_item(debug_alias(), p_core_2e_f_2e_valid_24_1, 0));
	items.add(path + "core d clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core d rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_core_2e_x_2e_kill_24_14 = value<1>{0u};
	items.add(path + "core x kill$14", debug_item(const_p_core_2e_x_2e_kill_24_14, 0));
	items.add(path + "core x stall$5", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core x valid$4", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	static const value<1> const_p_core_2e_x_2e_kill_24_3 = value<1>{0u};
	items.add(path + "core x kill$3", debug_item(const_p_core_2e_x_2e_kill_24_3, 0));
	items.add(path + "core x stall$2", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core x valid$1$next", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_1_24_next, 0));
	items.add(path + "core x valid$1", debug_item(p_core_2e_x_2e_valid_24_1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x kill", debug_item(debug_eval_outline, p_core_2e_d_2e_kill_24_15, 0));
	items.add(path + "core x stall", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core x valid", debug_item(debug_alias(), p_core_2e_d_2e_valid_24_1, 0));
	items.add(path + "core x clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core x rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core m kill$17", debug_item(debug_eval_outline, p_core_2e_m_2e_kill_24_17, 0));
	items.add(path + "core m m_busy", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__busy, 0));
	items.add(path + "core m x_busy", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "core m f_busy", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__busy, 0));
	items.add(path + "core m a_busy", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	items.add(path + "core m stall$8", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core m valid$7", debug_item(debug_eval_outline, p_core_2e_f_2e_valid_24_7, 0));
	items.add(path + "core m valid$6", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core m valid$5", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	static const value<1> const_p_core_2e_m_2e_valid_24_4 = value<1>{0x1u};
	items.add(path + "core m valid$4", debug_item(const_p_core_2e_m_2e_valid_24_4, 0));
	items.add(path + "core m payload__exception", debug_item(debug_alias(), p_core_2e_m__payload____exception, 0));
	items.add(path + "core m kill$3", debug_item(debug_eval_outline, p_core_2e_m_2e_kill_24_17, 0));
	static const value<1> const_p_core_2e_m_2e_stall_24_2 = value<1>{0u};
	items.add(path + "core m stall$2", debug_item(const_p_core_2e_m_2e_stall_24_2, 0));
	items.add(path + "core m valid$1$next", debug_item(debug_eval_outline, p_core_2e_m_2e_valid_24_1_24_next, 0));
	items.add(path + "core m valid$1", debug_item(p_core_2e_m_2e_valid_24_1, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_m_2e_kill = value<1>{0u};
	items.add(path + "core m kill", debug_item(const_p_core_2e_m_2e_kill, 0));
	items.add(path + "core m stall", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core m valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core m clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core m rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_core_2e_w_2e_stall_24_6 = value<1>{0u};
	items.add(path + "core w stall$6", debug_item(const_p_core_2e_w_2e_stall_24_6, 0));
	items.add(path + "core w valid$1", debug_item(debug_eval_outline, p_core_2e_w_2e_valid_24_1, 0));
	items.add(path + "core w kill", debug_item(debug_eval_outline, p_core_2e_m_2e_kill_24_17, 0));
	static const value<1> const_p_core_2e_w_2e_stall = value<1>{0u};
	items.add(path + "core w stall", debug_item(const_p_core_2e_w_2e_stall, 0));
	items.add(path + "core w valid", debug_item(debug_alias(), p_core_2e_m_2e_valid_24_1, 0));
	items.add(path + "core pc_sel a_pc4", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_a__pc4, 0));
	items.add(path + "core pc_sel m_sel", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_m__sel, 0));
	items.add(path + "core pc_sel m_pc4_a", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_m__pc4__a, 0));
	items.add(path + "core pc_sel a_pc", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_a__pc, 0));
	items.add(path + "core pc_sel mepc_r_base", debug_item(debug_alias(), p_core_2e_exception_2e_mepc____r____base, 0));
	items.add(path + "core pc_sel mtvec_r_base", debug_item(debug_alias(), p_core_2e_exception_2e_mtvec____r____base, 0));
	items.add(path + "core pc_sel m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core pc_sel m_mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core pc_sel m_exception", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core pc_sel m_branch_target", debug_item(debug_alias(), p_core_2e_payload____branch__target_24_108, 0));
	items.add(path + "core pc_sel m_branch_taken", debug_item(debug_alias(), p_core_2e_payload____branch__taken, 0));
	items.add(path + "core pc_sel m_branch_predict_taken", debug_item(debug_alias(), p_core_2e_payload____branch__predict__taken_24_109, 0));
	items.add(path + "core pc_sel x_valid", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core pc_sel x_fence_i", debug_item(debug_alias(), p_core_2e_payload____fence__i, 0));
	items.add(path + "core pc_sel x_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_31, 0));
	items.add(path + "core pc_sel d_valid", debug_item(debug_eval_outline, p_core_2e_d_2e_valid_24_4, 0));
	items.add(path + "core pc_sel d_branch_target", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__target, 0));
	items.add(path + "core pc_sel d_branch_predict_taken", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__taken, 0));
	items.add(path + "core pc_sel d_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_26, 0));
	items.add(path + "core pc_sel f_pc", debug_item(debug_eval_outline, p_core_2e_pc__sel__f__pc, 0));
	items.add(path + "core data_sel w_half", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_w__half, 0));
	items.add(path + "core data_sel w_byte", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_w__byte, 0));
	items.add(path + "core data_sel x_misaligned", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__misaligned, 0));
	items.add(path + "core data_sel w_load_result", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_w__load__result, 0));
	items.add(path + "core data_sel x_store_data", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__store__data, 0));
	items.add(path + "core data_sel x_mask", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__mask, 0));
	items.add(path + "core data_sel w_load_data", debug_item(debug_alias(), p_core_2e_payload____load__data_24_131, 0));
	items.add(path + "core data_sel w_funct3", debug_item(debug_alias(), p_core_2e_payload____funct3_24_126, 0));
	items.add(path + "core data_sel w_offset", debug_item(debug_eval_outline, p_core_2e_data__sel__w__offset, 0));
	items.add(path + "core data_sel x_store_operand", debug_item(debug_alias(), p_core_2e_payload____store__operand_24_45, 0));
	items.add(path + "core data_sel x_funct3", debug_item(debug_alias(), p_core_2e_payload____funct3_24_48, 0));
	items.add(path + "core data_sel x_offset", debug_item(debug_eval_outline, p_core_2e_data__sel__x__offset, 0));
	items.add(path + "core adder x_sub_overflow", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__sub__overflow, 0));
	items.add(path + "core adder x_sub_carry", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__sub__carry, 0));
	items.add(path + "core adder x_sub_result", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__sub__result, 0));
	items.add(path + "core adder x_add_overflow", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__add__overflow, 0));
	items.add(path + "core adder x_add_carry", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__add__carry, 0));
	items.add(path + "core adder x_add_result", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__add__result, 0));
	items.add(path + "core adder x_sub$next", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__sub_24_next, 0));
	items.add(path + "core adder x_sub", debug_item(p_core_2e_adder_2e_x__sub, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core adder x_carry", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__carry, 0));
	items.add(path + "core adder x_overflow", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__overflow, 0));
	items.add(path + "core adder x_result", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__result, 0));
	items.add(path + "core adder x_src2", debug_item(debug_alias(), p_core_2e_payload____src2_24_44, 0));
	items.add(path + "core adder x_src1", debug_item(debug_alias(), p_core_2e_payload____src1_24_43, 0));
	items.add(path + "core adder d_stall", debug_item(debug_eval_outline, p_core_2e_d_2e_stall_24_6, 0));
	items.add(path + "core adder d_sub", debug_item(debug_eval_outline, p_core_2e_adder__d__sub, 0));
	items.add(path + "core adder clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core adder rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core compare condition_met", debug_item(debug_eval_outline, p_core_2e_compare_2e_condition__met, 0));
	items.add(path + "core compare carry", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__carry, 0));
	items.add(path + "core compare overflow", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__overflow, 0));
	items.add(path + "core compare negative", debug_item(debug_eval_outline, p_core_2e_compare__negative, 0));
	items.add(path + "core compare zero", debug_item(debug_eval_outline, p_core_2e_compare__zero, 0));
	items.add(path + "core compare op", debug_item(debug_eval_outline, p_core_2e_compare__op, 0));
	static const value<1> const_p_core_2e_decoder_2e_multiply = value<1>{0u};
	items.add(path + "core decoder multiply", debug_item(const_p_core_2e_decoder_2e_multiply, 0));
	static const value<1> const_p_core_2e_decoder_2e_divide = value<1>{0u};
	items.add(path + "core decoder divide", debug_item(const_p_core_2e_decoder_2e_divide, 0));
	items.add(path + "core decoder privileged", debug_item(debug_eval_outline, p_core_2e_decoder_2e_privileged, 0));
	items.add(path + "core decoder fmt", debug_item(debug_eval_outline, p_core_2e_decoder_2e_fmt, 0));
	items.add(path + "core decoder jimm20", debug_item(debug_eval_outline, p_core_2e_decoder_2e_jimm20, 0));
	items.add(path + "core decoder uimm20", debug_item(debug_eval_outline, p_core_2e_decoder_2e_uimm20, 0));
	items.add(path + "core decoder bimm12", debug_item(debug_eval_outline, p_core_2e_decoder_2e_bimm12, 0));
	items.add(path + "core decoder simm12", debug_item(debug_eval_outline, p_core_2e_decoder_2e_simm12, 0));
	items.add(path + "core decoder iimm12", debug_item(debug_eval_outline, p_core_2e_decoder_2e_iimm12, 0));
	items.add(path + "core decoder funct12", debug_item(debug_eval_outline, p_core_2e_decoder_2e_funct12, 0));
	items.add(path + "core decoder funct7", debug_item(debug_eval_outline, p_core_2e_decoder_2e_funct7, 0));
	items.add(path + "core decoder funct3$1", debug_item(debug_eval_outline, p_core_2e_decoder_2e_funct3_24_1, 0));
	items.add(path + "core decoder opcode", debug_item(debug_eval_outline, p_core_2e_decoder_2e_opcode, 0));
	items.add(path + "core decoder mret", debug_item(debug_eval_outline, p_core_2e_decoder_2e_mret, 0));
	items.add(path + "core decoder ebreak", debug_item(debug_eval_outline, p_core_2e_decoder_2e_ebreak, 0));
	items.add(path + "core decoder ecall", debug_item(debug_eval_outline, p_core_2e_decoder_2e_ecall, 0));
	items.add(path + "core decoder csr_we", debug_item(debug_eval_outline, p_core_2e_decoder_2e_csr__we, 0));
	items.add(path + "core decoder fence_i", debug_item(debug_eval_outline, p_core_2e_decoder_2e_fence__i, 0));
	items.add(path + "core decoder sext", debug_item(debug_eval_outline, p_core_2e_decoder_2e_sext, 0));
	items.add(path + "core decoder direction", debug_item(debug_eval_outline, p_core_2e_decoder_2e_direction, 0));
	items.add(path + "core decoder shift", debug_item(debug_eval_outline, p_core_2e_decoder_2e_shift, 0));
	items.add(path + "core decoder logic", debug_item(debug_eval_outline, p_core_2e_decoder_2e_logic, 0));
	items.add(path + "core decoder store", debug_item(debug_eval_outline, p_core_2e_decoder_2e_store, 0));
	items.add(path + "core decoder load", debug_item(debug_eval_outline, p_core_2e_decoder_2e_load, 0));
	items.add(path + "core decoder funct3", debug_item(debug_eval_outline, p_core_2e_decoder_2e_funct3_24_1, 0));
	items.add(path + "core decoder bypass_m", debug_item(debug_eval_outline, p_core_2e_decoder_2e_bypass__m, 0));
	items.add(path + "core decoder bypass_x", debug_item(debug_eval_outline, p_core_2e_decoder_2e_bypass__x, 0));
	items.add(path + "core decoder rd_we", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rd__we, 0));
	items.add(path + "core decoder rd", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rd, 0));
	items.add(path + "core decoder illegal", debug_item(debug_eval_outline, p_core_2e_decoder_2e_illegal, 0));
	items.add(path + "core decoder jump", debug_item(debug_eval_outline, p_core_2e_decoder_2e_jump, 0));
	items.add(path + "core decoder auipc", debug_item(debug_eval_outline, p_core_2e_decoder_2e_auipc, 0));
	items.add(path + "core decoder lui", debug_item(debug_eval_outline, p_core_2e_decoder_2e_lui, 0));
	items.add(path + "core decoder rs2_re", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs2__re, 0));
	items.add(path + "core decoder rs1_re", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs1__re, 0));
	items.add(path + "core decoder immediate", debug_item(debug_eval_outline, p_core_2e_decoder_2e_immediate, 0));
	items.add(path + "core decoder branch", debug_item(debug_eval_outline, p_core_2e_decoder_2e_branch, 0));
	items.add(path + "core decoder compare", debug_item(debug_eval_outline, p_core_2e_decoder_2e_compare, 0));
	items.add(path + "core decoder adder_sub", debug_item(debug_eval_outline, p_core_2e_decoder_2e_adder__sub, 0));
	items.add(path + "core decoder adder", debug_item(debug_eval_outline, p_core_2e_decoder_2e_adder, 0));
	items.add(path + "core decoder csr", debug_item(debug_eval_outline, p_core_2e_decoder_2e_csr, 0));
	items.add(path + "core decoder rs2", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs2, 0));
	items.add(path + "core decoder rs1", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs1, 0));
	items.add(path + "core decoder instruction", debug_item(debug_alias(), p_core_2e_payload____instruction_24_27, 0));
	items.add(path + "core exception interrupt_pe i", debug_item(debug_eval_outline, p_core_2e_exception_2e_interrupt__pe__i, 0));
	items.add(path + "core exception interrupt_pe n", debug_item(debug_eval_outline, p_core_2e_exception_2e_interrupt__pe_2e_n, 0));
	items.add(path + "core exception interrupt_pe o", debug_item(debug_eval_outline, p_core_2e_exception_2e_interrupt__pe_2e_o, 0));
	items.add(path + "core exception trap_pe i", debug_item(debug_eval_outline, p_core_2e_exception_2e_trap__pe__i, 0));
	items.add(path + "core exception trap_pe n", debug_item(debug_eval_outline, p_core_2e_exception_2e_trap__pe_2e_n, 0));
	items.add(path + "core exception trap_pe o", debug_item(debug_eval_outline, p_core_2e_exception_2e_trap__pe_2e_o, 0));
	items.add(path + "core exception interrupt_pe_o", debug_item(debug_eval_outline, p_core_2e_exception_2e_interrupt__pe_2e_o, 0));
	items.add(path + "core exception interrupt_pe_n", debug_item(debug_eval_outline, p_core_2e_exception_2e_interrupt__pe_2e_n, 0));
	items.add(path + "core exception interrupt_pe_i", debug_item(debug_eval_outline, p_core_2e_exception_2e_interrupt__pe__i, 0));
	items.add(path + "core exception trap_pe_o", debug_item(debug_eval_outline, p_core_2e_exception_2e_trap__pe_2e_o, 0));
	items.add(path + "core exception trap_pe_n", debug_item(debug_eval_outline, p_core_2e_exception_2e_trap__pe_2e_n, 0));
	items.add(path + "core exception trap_pe_i", debug_item(debug_eval_outline, p_core_2e_exception_2e_trap__pe__i, 0));
	items.add(path + "core exception irq_pending__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____w____value, 0));
	static const value<32> const_p_core_2e_exception_2e_irq__pending____r____value_24_next = value<32>{0u};
	items.add(path + "core exception irq_pending__r__value$next", debug_item(const_p_core_2e_exception_2e_irq__pending____r____value_24_next, 0));
	items.add(path + "core exception irq_pending__r__value", debug_item(p_core_2e_exception_2e_irq__pending____r____value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception irq_pending__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____we, 0));
	items.add(path + "core exception irq_mask__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____w____value, 0));
	items.add(path + "core exception irq_mask__r__value$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_irq__mask____r____value_24_next, 0));
	items.add(path + "core exception irq_mask__r__value", debug_item(p_core_2e_exception_2e_irq__mask____r____value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception irq_mask__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____we, 0));
	items.add(path + "core exception mip__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero3, 0));
	items.add(path + "core exception mip__w__meip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____meip, 0));
	items.add(path + "core exception mip__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero2, 0));
	items.add(path + "core exception mip__w__seip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____seip, 0));
	items.add(path + "core exception mip__w__ueip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____ueip, 0));
	items.add(path + "core exception mip__w__mtip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____mtip, 0));
	items.add(path + "core exception mip__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero1, 0));
	items.add(path + "core exception mip__w__stip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____stip, 0));
	items.add(path + "core exception mip__w__utip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____utip, 0));
	items.add(path + "core exception mip__w__msip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____msip, 0));
	items.add(path + "core exception mip__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero0, 0));
	items.add(path + "core exception mip__w__ssip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____ssip, 0));
	items.add(path + "core exception mip__w__usip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____usip, 0));
	items.add(path + "core exception mip__r__zero3$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____zero3_24_next, 0));
	items.add(path + "core exception mip__r__zero3", debug_item(p_core_2e_exception_2e_mip____r____zero3, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__meip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____meip_24_next, 0));
	items.add(path + "core exception mip__r__meip", debug_item(p_core_2e_exception_2e_mip____r____meip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__zero2$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____zero2_24_next, 0));
	items.add(path + "core exception mip__r__zero2", debug_item(p_core_2e_exception_2e_mip____r____zero2, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__seip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____seip_24_next, 0));
	items.add(path + "core exception mip__r__seip", debug_item(p_core_2e_exception_2e_mip____r____seip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__ueip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____ueip_24_next, 0));
	items.add(path + "core exception mip__r__ueip", debug_item(p_core_2e_exception_2e_mip____r____ueip, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_exception_2e_mip____r____mtip_24_next = value<1>{0u};
	items.add(path + "core exception mip__r__mtip$next", debug_item(const_p_core_2e_exception_2e_mip____r____mtip_24_next, 0));
	items.add(path + "core exception mip__r__mtip", debug_item(p_core_2e_exception_2e_mip____r____mtip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__zero1$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____zero1_24_next, 0));
	items.add(path + "core exception mip__r__zero1", debug_item(p_core_2e_exception_2e_mip____r____zero1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__stip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____stip_24_next, 0));
	items.add(path + "core exception mip__r__stip", debug_item(p_core_2e_exception_2e_mip____r____stip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__utip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____utip_24_next, 0));
	items.add(path + "core exception mip__r__utip", debug_item(p_core_2e_exception_2e_mip____r____utip, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_exception_2e_mip____r____msip_24_next = value<1>{0u};
	items.add(path + "core exception mip__r__msip$next", debug_item(const_p_core_2e_exception_2e_mip____r____msip_24_next, 0));
	items.add(path + "core exception mip__r__msip", debug_item(p_core_2e_exception_2e_mip____r____msip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__zero0$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____zero0_24_next, 0));
	items.add(path + "core exception mip__r__zero0", debug_item(p_core_2e_exception_2e_mip____r____zero0, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__ssip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____ssip_24_next, 0));
	items.add(path + "core exception mip__r__ssip", debug_item(p_core_2e_exception_2e_mip____r____ssip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__r__usip$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mip____r____usip_24_next, 0));
	items.add(path + "core exception mip__r__usip", debug_item(p_core_2e_exception_2e_mip____r____usip, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mip__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____we, 0));
	items.add(path + "core exception mtval__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____w____value, 0));
	items.add(path + "core exception mtval__r__value$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mtval____r____value_24_next, 0));
	items.add(path + "core exception mtval__r__value", debug_item(p_core_2e_exception_2e_mtval____r____value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mtval__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____we, 0));
	items.add(path + "core exception mcause__w__interrupt", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____w____interrupt, 0));
	items.add(path + "core exception mcause__w__ecode", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____w____ecode, 0));
	items.add(path + "core exception mcause__r__interrupt$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mcause____r____interrupt_24_next, 0));
	items.add(path + "core exception mcause__r__interrupt", debug_item(p_core_2e_exception_2e_mcause____r____interrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mcause__r__ecode$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mcause____r____ecode_24_next, 0));
	items.add(path + "core exception mcause__r__ecode", debug_item(p_core_2e_exception_2e_mcause____r____ecode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mcause__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____we, 0));
	items.add(path + "core exception mepc__w__base", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____w____base, 0));
	items.add(path + "core exception mepc__w__zero", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____w____zero, 0));
	items.add(path + "core exception mepc__r__zero$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mepc____r____zero_24_next, 0));
	items.add(path + "core exception mepc__r__zero", debug_item(p_core_2e_exception_2e_mepc____r____zero, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mepc__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____we, 0));
	items.add(path + "core exception mscratch__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____w____value, 0));
	items.add(path + "core exception mscratch__r__value$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mscratch____r____value_24_next, 0));
	items.add(path + "core exception mscratch__r__value", debug_item(p_core_2e_exception_2e_mscratch____r____value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mscratch__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____we, 0));
	items.add(path + "core exception mtvec__w__base", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____w____base, 0));
	items.add(path + "core exception mtvec__w__mode", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____w____mode, 0));
	items.add(path + "core exception mtvec__r__mode$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mtvec____r____mode_24_next, 0));
	items.add(path + "core exception mtvec__r__mode", debug_item(p_core_2e_exception_2e_mtvec____r____mode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mtvec__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____we, 0));
	items.add(path + "core exception mie__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero3, 0));
	items.add(path + "core exception mie__w__meie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____meie, 0));
	items.add(path + "core exception mie__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero2, 0));
	items.add(path + "core exception mie__w__seie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____seie, 0));
	items.add(path + "core exception mie__w__ueie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____ueie, 0));
	items.add(path + "core exception mie__w__mtie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____mtie, 0));
	items.add(path + "core exception mie__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero1, 0));
	items.add(path + "core exception mie__w__stie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____stie, 0));
	items.add(path + "core exception mie__w__utie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____utie, 0));
	items.add(path + "core exception mie__w__msie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____msie, 0));
	items.add(path + "core exception mie__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero0, 0));
	items.add(path + "core exception mie__w__ssie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____ssie, 0));
	items.add(path + "core exception mie__w__usie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____usie, 0));
	items.add(path + "core exception mie__r__zero3$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____zero3_24_next, 0));
	items.add(path + "core exception mie__r__zero3", debug_item(p_core_2e_exception_2e_mie____r____zero3, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__meie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____meie_24_next, 0));
	items.add(path + "core exception mie__r__meie", debug_item(p_core_2e_exception_2e_mie____r____meie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__zero2$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____zero2_24_next, 0));
	items.add(path + "core exception mie__r__zero2", debug_item(p_core_2e_exception_2e_mie____r____zero2, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__seie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____seie_24_next, 0));
	items.add(path + "core exception mie__r__seie", debug_item(p_core_2e_exception_2e_mie____r____seie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__ueie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____ueie_24_next, 0));
	items.add(path + "core exception mie__r__ueie", debug_item(p_core_2e_exception_2e_mie____r____ueie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__mtie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____mtie_24_next, 0));
	items.add(path + "core exception mie__r__mtie", debug_item(p_core_2e_exception_2e_mie____r____mtie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__zero1$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____zero1_24_next, 0));
	items.add(path + "core exception mie__r__zero1", debug_item(p_core_2e_exception_2e_mie____r____zero1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__stie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____stie_24_next, 0));
	items.add(path + "core exception mie__r__stie", debug_item(p_core_2e_exception_2e_mie____r____stie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__utie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____utie_24_next, 0));
	items.add(path + "core exception mie__r__utie", debug_item(p_core_2e_exception_2e_mie____r____utie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__msie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____msie_24_next, 0));
	items.add(path + "core exception mie__r__msie", debug_item(p_core_2e_exception_2e_mie____r____msie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__zero0$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____zero0_24_next, 0));
	items.add(path + "core exception mie__r__zero0", debug_item(p_core_2e_exception_2e_mie____r____zero0, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__ssie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____ssie_24_next, 0));
	items.add(path + "core exception mie__r__ssie", debug_item(p_core_2e_exception_2e_mie____r____ssie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__r__usie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mie____r____usie_24_next, 0));
	items.add(path + "core exception mie__r__usie", debug_item(p_core_2e_exception_2e_mie____r____usie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mie__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____we, 0));
	items.add(path + "core exception misa__w__mxl", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____mxl, 0));
	items.add(path + "core exception misa__w__zero", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____zero, 0));
	items.add(path + "core exception misa__w__extensions", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____extensions, 0));
	items.add(path + "core exception misa__r__mxl$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_misa____r____mxl_24_next, 0));
	items.add(path + "core exception misa__r__mxl", debug_item(p_core_2e_exception_2e_misa____r____mxl, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception misa__r__zero$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_misa____r____zero_24_next, 0));
	items.add(path + "core exception misa__r__zero", debug_item(p_core_2e_exception_2e_misa____r____zero, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception misa__r__extensions$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_misa____r____extensions_24_next, 0));
	items.add(path + "core exception misa__r__extensions", debug_item(p_core_2e_exception_2e_misa____r____extensions, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception misa__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____we, 0));
	items.add(path + "core exception mstatus__w__sd", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sd, 0));
	items.add(path + "core exception mstatus__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero3, 0));
	items.add(path + "core exception mstatus__w__tsr", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tsr, 0));
	items.add(path + "core exception mstatus__w__tw", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tw, 0));
	items.add(path + "core exception mstatus__w__tvm", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tvm, 0));
	items.add(path + "core exception mstatus__w__mxr", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mxr, 0));
	items.add(path + "core exception mstatus__w__sum", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sum, 0));
	items.add(path + "core exception mstatus__w__mprv", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mprv, 0));
	items.add(path + "core exception mstatus__w__xs", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____xs, 0));
	items.add(path + "core exception mstatus__w__fs", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____fs, 0));
	items.add(path + "core exception mstatus__w__mpp", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mpp, 0));
	items.add(path + "core exception mstatus__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero2, 0));
	items.add(path + "core exception mstatus__w__spp", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____spp, 0));
	items.add(path + "core exception mstatus__w__mpie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mpie, 0));
	items.add(path + "core exception mstatus__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero1, 0));
	items.add(path + "core exception mstatus__w__spie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____spie, 0));
	items.add(path + "core exception mstatus__w__upie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____upie, 0));
	items.add(path + "core exception mstatus__w__mie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mie, 0));
	items.add(path + "core exception mstatus__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero0, 0));
	items.add(path + "core exception mstatus__w__sie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sie, 0));
	items.add(path + "core exception mstatus__w__uie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____uie, 0));
	items.add(path + "core exception mstatus__r__sd$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____sd_24_next, 0));
	items.add(path + "core exception mstatus__r__sd", debug_item(p_core_2e_exception_2e_mstatus____r____sd, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__zero3$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____zero3_24_next, 0));
	items.add(path + "core exception mstatus__r__zero3", debug_item(p_core_2e_exception_2e_mstatus____r____zero3, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__tsr$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____tsr_24_next, 0));
	items.add(path + "core exception mstatus__r__tsr", debug_item(p_core_2e_exception_2e_mstatus____r____tsr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__tw$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____tw_24_next, 0));
	items.add(path + "core exception mstatus__r__tw", debug_item(p_core_2e_exception_2e_mstatus____r____tw, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__tvm$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____tvm_24_next, 0));
	items.add(path + "core exception mstatus__r__tvm", debug_item(p_core_2e_exception_2e_mstatus____r____tvm, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__mxr$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____mxr_24_next, 0));
	items.add(path + "core exception mstatus__r__mxr", debug_item(p_core_2e_exception_2e_mstatus____r____mxr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__sum$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____sum_24_next, 0));
	items.add(path + "core exception mstatus__r__sum", debug_item(p_core_2e_exception_2e_mstatus____r____sum, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__mprv$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____mprv_24_next, 0));
	items.add(path + "core exception mstatus__r__mprv", debug_item(p_core_2e_exception_2e_mstatus____r____mprv, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__xs$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____xs_24_next, 0));
	items.add(path + "core exception mstatus__r__xs", debug_item(p_core_2e_exception_2e_mstatus____r____xs, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__fs$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____fs_24_next, 0));
	items.add(path + "core exception mstatus__r__fs", debug_item(p_core_2e_exception_2e_mstatus____r____fs, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__mpp$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____mpp_24_next, 0));
	items.add(path + "core exception mstatus__r__mpp", debug_item(p_core_2e_exception_2e_mstatus____r____mpp, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__zero2$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____zero2_24_next, 0));
	items.add(path + "core exception mstatus__r__zero2", debug_item(p_core_2e_exception_2e_mstatus____r____zero2, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__spp$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____spp_24_next, 0));
	items.add(path + "core exception mstatus__r__spp", debug_item(p_core_2e_exception_2e_mstatus____r____spp, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__mpie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____mpie_24_next, 0));
	items.add(path + "core exception mstatus__r__mpie", debug_item(p_core_2e_exception_2e_mstatus____r____mpie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__zero1$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____zero1_24_next, 0));
	items.add(path + "core exception mstatus__r__zero1", debug_item(p_core_2e_exception_2e_mstatus____r____zero1, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__spie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____spie_24_next, 0));
	items.add(path + "core exception mstatus__r__spie", debug_item(p_core_2e_exception_2e_mstatus____r____spie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__upie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____upie_24_next, 0));
	items.add(path + "core exception mstatus__r__upie", debug_item(p_core_2e_exception_2e_mstatus____r____upie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__mie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____mie_24_next, 0));
	items.add(path + "core exception mstatus__r__mie", debug_item(p_core_2e_exception_2e_mstatus____r____mie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__zero0$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____zero0_24_next, 0));
	items.add(path + "core exception mstatus__r__zero0", debug_item(p_core_2e_exception_2e_mstatus____r____zero0, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__sie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____sie_24_next, 0));
	items.add(path + "core exception mstatus__r__sie", debug_item(p_core_2e_exception_2e_mstatus____r____sie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__r__uie$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mstatus____r____uie_24_next, 0));
	items.add(path + "core exception mstatus__r__uie", debug_item(p_core_2e_exception_2e_mstatus____r____uie, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mstatus__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____we, 0));
	items.add(path + "core exception m_ebreak", debug_item(debug_alias(), p_core_2e_payload____ebreak_24_83, 0));
	items.add(path + "core exception m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core exception m_stall", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core exception m_mret", debug_item(debug_alias(), p_core_2e_payload____mret_24_117, 0));
	items.add(path + "core exception m_result", debug_item(debug_alias(), p_core_2e_payload____result_24_92, 0));
	items.add(path + "core exception m_instruction", debug_item(debug_alias(), p_core_2e_payload____instruction_24_72, 0));
	items.add(path + "core exception m_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_70, 0));
	items.add(path + "core exception m_ecall", debug_item(debug_alias(), p_core_2e_payload____ecall_24_81, 0));
	items.add(path + "core exception m_illegal", debug_item(debug_alias(), p_core_2e_payload____illegal_24_78, 0));
	items.add(path + "core exception m_branch_target", debug_item(debug_alias(), p_core_2e_payload____branch__target_24_108, 0));
	items.add(path + "core exception m_loadstore_badaddr", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__badaddr, 0));
	items.add(path + "core exception m_store_error", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__store__error, 0));
	items.add(path + "core exception m_store_misaligned", debug_item(debug_eval_outline, p_core_2e_exception__m__store__misaligned, 0));
	items.add(path + "core exception m_load_error", debug_item(debug_alias(), p_core_2e_loadstore_2e_m__load__error, 0));
	items.add(path + "core exception m_load_misaligned", debug_item(debug_eval_outline, p_core_2e_exception__m__load__misaligned, 0));
	items.add(path + "core exception m_fetch_badaddr", debug_item(debug_alias(), p_core_2e_payload____fetch__badaddr_24_76, 0));
	items.add(path + "core exception m_fetch_error", debug_item(debug_alias(), p_core_2e_payload____fetch__error_24_74, 0));
	items.add(path + "core exception m_fetch_misaligned", debug_item(debug_eval_outline, p_core_2e_exception__m__fetch__misaligned, 0));
	static const value<1> const_p_core_2e_exception_2e_software__interrupt = value<1>{0u};
	items.add(path + "core exception software_interrupt", debug_item(const_p_core_2e_exception_2e_software__interrupt, 0));
	static const value<1> const_p_core_2e_exception_2e_timer__interrupt = value<1>{0u};
	items.add(path + "core exception timer_interrupt", debug_item(const_p_core_2e_exception_2e_timer__interrupt, 0));
	static const value<32> const_p_core_2e_exception_2e_external__interrupt = value<32>{0u};
	items.add(path + "core exception external_interrupt", debug_item(const_p_core_2e_exception_2e_external__interrupt, 0));
	items.add(path + "core exception mepc__r__base$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mepc____r____base_24_next, 0));
	items.add(path + "core exception mepc__r__base", debug_item(p_core_2e_exception_2e_mepc____r____base, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception mtvec__r__base$next", debug_item(debug_eval_outline, p_core_2e_exception_2e_mtvec____r____base_24_next, 0));
	items.add(path + "core exception mtvec__r__base", debug_item(p_core_2e_exception_2e_mtvec____r____base, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core exception m_raise", debug_item(debug_eval_outline, p_core_2e_exception_2e_m__raise, 0));
	items.add(path + "core exception clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core exception rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core logic result", debug_item(debug_eval_outline, p_core_2e_logic_2e_result, 0));
	items.add(path + "core logic src2", debug_item(debug_alias(), p_core_2e_payload____src2_24_44, 0));
	items.add(path + "core logic src1", debug_item(debug_eval_outline, p_core_2e_logic__src1, 0));
	items.add(path + "core logic op", debug_item(debug_eval_outline, p_core_2e_logic__op, 0));
	items.add(path + "core predict d_fetch_misaligned", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__fetch__misaligned, 0));
	items.add(path + "core predict d_rs1_re", debug_item(debug_eval_outline, p_core_2e_decoder_2e_rs1__re, 0));
	items.add(path + "core predict d_pc", debug_item(debug_alias(), p_core_2e_payload____pc_24_26, 0));
	items.add(path + "core predict d_offset", debug_item(debug_eval_outline, p_core_2e_decoder_2e_immediate, 0));
	items.add(path + "core predict d_jump", debug_item(debug_eval_outline, p_core_2e_decoder_2e_jump, 0));
	items.add(path + "core predict d_branch", debug_item(debug_eval_outline, p_core_2e_decoder_2e_branch, 0));
	items.add(path + "core predict d_branch_target", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__target, 0));
	items.add(path + "core predict d_branch_taken", debug_item(debug_eval_outline, p_core_2e_predict_2e_d__branch__taken, 0));
	items.add(path + "core shifter m_result$9$next", debug_item(debug_eval_outline, p_core_2e_shifter_2e_m__result_24_9_24_next, 0));
	items.add(path + "core shifter m_result$9", debug_item(p_core_2e_shifter_2e_m__result_24_9, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core shifter m_direction$next", debug_item(debug_eval_outline, p_core_2e_shifter_2e_m__direction_24_next, 0));
	items.add(path + "core shifter m_direction", debug_item(p_core_2e_shifter_2e_m__direction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core shifter x_filler", debug_item(debug_eval_outline, p_core_2e_shifter_2e_x__filler, 0));
	items.add(path + "core shifter x_operand", debug_item(debug_eval_outline, p_core_2e_shifter_2e_x__operand, 0));
	items.add(path + "core shifter m_result", debug_item(debug_eval_outline, p_core_2e_shifter_2e_m__result, 0));
	items.add(path + "core shifter x_stall", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core shifter x_src1", debug_item(debug_alias(), p_core_2e_payload____src1_24_43, 0));
	items.add(path + "core shifter x_shamt", debug_item(debug_eval_outline, p_core_2e_shifter__x__shamt, 0));
	items.add(path + "core shifter x_sext", debug_item(debug_alias(), p_core_2e_payload____sext_24_57, 0));
	items.add(path + "core shifter x_direction", debug_item(debug_alias(), p_core_2e_payload____direction_24_56, 0));
	items.add(path + "core shifter clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core shifter rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core fetch ibus_rdata$next", debug_item(debug_eval_outline, p_core_2e_fetch_2e_ibus__rdata_24_next, 0));
	items.add(path + "core fetch ibus_rdata", debug_item(p_core_2e_fetch_2e_ibus__rdata, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core fetch f_busy", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__busy, 0));
	items.add(path + "core fetch a_busy", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	items.add(path + "core fetch f_badaddr$next", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__badaddr_24_next, 0));
	items.add(path + "core fetch f_badaddr", debug_item(p_core_2e_fetch_2e_f__badaddr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core fetch f_fetch_error$next", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__fetch__error_24_next, 0));
	items.add(path + "core fetch f_fetch_error", debug_item(p_core_2e_fetch_2e_f__fetch__error, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core fetch f_instruction", debug_item(debug_eval_outline, p_core_2e_fetch_2e_f__instruction, 0));
	static const value<1> const_p_core_2e_fetch_2e_ibus____err = value<1>{0u};
	items.add(path + "core fetch ibus__err", debug_item(const_p_core_2e_fetch_2e_ibus____err, 0));
	items.add(path + "core fetch ibus__ack", debug_item(debug_alias(), p_imem_2e_wbus____ack, 0));
	items.add(path + "core fetch ibus__stb$next", debug_item(debug_eval_outline, p_core_2e_fetch_2e_ibus____stb_24_next, 0));
	items.add(path + "core fetch ibus__stb", debug_item(p_core_2e_fetch_2e_ibus____stb, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core fetch ibus__cyc$next", debug_item(debug_eval_outline, p_core_2e_fetch_2e_ibus____cyc_24_next, 0));
	items.add(path + "core fetch ibus__cyc", debug_item(p_core_2e_fetch_2e_ibus____cyc, 0, debug_item::DRIVEN_SYNC));
	static const value<4> const_p_core_2e_fetch_2e_ibus____sel = value<4>{0xfu};
	items.add(path + "core fetch ibus__sel", debug_item(const_p_core_2e_fetch_2e_ibus____sel, 0));
	items.add(path + "core fetch ibus__dat_r", debug_item(debug_alias(), p_imem_2e_wbus____dat__r, 0));
	items.add(path + "core fetch ibus__adr$next", debug_item(debug_eval_outline, p_core_2e_fetch_2e_ibus____adr_24_next, 0));
	items.add(path + "core fetch ibus__adr", debug_item(p_core_2e_fetch_2e_ibus____adr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core fetch f_valid", debug_item(debug_eval_outline, p_core_2e_f_2e_valid_24_7, 0));
	items.add(path + "core fetch f_stall", debug_item(debug_eval_outline, p_core_2e_f_2e_stall_24_6, 0));
	static const value<1> const_p_core_2e_fetch_2e_a__valid = value<1>{0x1u};
	items.add(path + "core fetch a_valid", debug_item(const_p_core_2e_fetch_2e_a__valid, 0));
	items.add(path + "core fetch a_stall", debug_item(debug_eval_outline, p_core_2e_a_2e_stall_24_5, 0));
	items.add(path + "core fetch a_pc", debug_item(debug_eval_outline, p_core_2e_pc__sel_2e_a__pc, 0));
	items.add(path + "core fetch clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core fetch rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core loadstore m_busy", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__busy, 0));
	items.add(path + "core loadstore x_busy", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "core loadstore m_load_data$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__load__data_24_next, 0));
	items.add(path + "core loadstore m_load_data", debug_item(p_core_2e_loadstore_2e_m__load__data, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_loadstore_2e_dbus____err = value<1>{0u};
	items.add(path + "core loadstore dbus__err", debug_item(const_p_core_2e_loadstore_2e_dbus____err, 0));
	items.add(path + "core loadstore dbus__we$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_dbus____we_24_next, 0));
	items.add(path + "core loadstore dbus__we", debug_item(p_core_2e_loadstore_2e_dbus____we, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore dbus__ack", debug_item(debug_alias(), p_dmem_2e_wbus____ack, 0));
	items.add(path + "core loadstore dbus__stb$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_dbus____stb_24_next, 0));
	items.add(path + "core loadstore dbus__stb", debug_item(p_core_2e_loadstore_2e_dbus____stb, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore dbus__cyc$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_dbus____cyc_24_next, 0));
	items.add(path + "core loadstore dbus__cyc", debug_item(p_core_2e_loadstore_2e_dbus____cyc, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore dbus__sel$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_dbus____sel_24_next, 0));
	items.add(path + "core loadstore dbus__sel", debug_item(p_core_2e_loadstore_2e_dbus____sel, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore dbus__dat_r", debug_item(debug_alias(), p_dmem_2e_wbus____dat__r, 0));
	items.add(path + "core loadstore dbus__dat_w$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_dbus____dat__w_24_next, 0));
	items.add(path + "core loadstore dbus__dat_w", debug_item(p_core_2e_loadstore_2e_dbus____dat__w, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore dbus__adr$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_dbus____adr_24_next, 0));
	items.add(path + "core loadstore dbus__adr", debug_item(p_core_2e_loadstore_2e_dbus____adr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore m_valid", debug_item(debug_alias(), p_core_2e_x_2e_valid_24_1, 0));
	items.add(path + "core loadstore m_stall", debug_item(debug_eval_outline, p_core_2e_m_2e_stall_24_8, 0));
	items.add(path + "core loadstore x_valid", debug_item(debug_eval_outline, p_core_2e_x_2e_valid_24_4, 0));
	items.add(path + "core loadstore x_stall", debug_item(debug_eval_outline, p_core_2e_x_2e_stall_24_5, 0));
	items.add(path + "core loadstore x_store_data", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__store__data, 0));
	items.add(path + "core loadstore x_store", debug_item(debug_alias(), p_core_2e_payload____store_24_50, 0));
	items.add(path + "core loadstore x_load", debug_item(debug_alias(), p_core_2e_payload____load_24_49, 0));
	items.add(path + "core loadstore x_mask", debug_item(debug_eval_outline, p_core_2e_data__sel_2e_x__mask, 0));
	items.add(path + "core loadstore x_addr", debug_item(debug_eval_outline, p_core_2e_adder_2e_x__result, 0));
	items.add(path + "core loadstore m_badaddr$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__badaddr_24_next, 0));
	items.add(path + "core loadstore m_badaddr", debug_item(p_core_2e_loadstore_2e_m__badaddr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore m_store_error$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__store__error_24_next, 0));
	items.add(path + "core loadstore m_store_error", debug_item(p_core_2e_loadstore_2e_m__store__error, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore m_load_error$next", debug_item(debug_eval_outline, p_core_2e_loadstore_2e_m__load__error_24_next, 0));
	items.add(path + "core loadstore m_load_error", debug_item(p_core_2e_loadstore_2e_m__load__error, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core loadstore clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core loadstore rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core gprf mem rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core gprf mem clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core gprf mem rp1__addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp1____addr, 0));
	items.add(path + "core gprf mem rp2__addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp2____addr, 0));
	items.add(path + "core gprf mem wp__en", debug_item(debug_eval_outline, p_core_2e_gprf__wp____en, 0));
	items.add(path + "core gprf mem wp__addr", debug_item(debug_alias(), p_core_2e_payload____rd_24_122, 0));
	items.add(path + "core gprf mem wp__data", debug_item(debug_eval_outline, p_core_2e_w__result, 0));
	items.add(path + "core gprf mem rp1__data", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_rp1____data, 0));
	items.add(path + "core gprf mem rp2__data", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_rp2____data, 0));
	static const value<1> const_p_core_2e_gprf_2e_mem_2e___mem__r__en = value<1>{0x1u};
	items.add(path + "core gprf mem _mem_r_en", debug_item(const_p_core_2e_gprf_2e_mem_2e___mem__r__en, 0));
	items.add(path + "core gprf mem _mem_r_addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp1____addr, 0));
	items.add(path + "core gprf mem _mem_r_data", debug_item(p_core_2e_gprf_2e_mem_2e___mem__r__data, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_gprf_2e_mem_2e___mem__r__en_24_2 = value<1>{0x1u};
	items.add(path + "core gprf mem _mem_r_en$2", debug_item(const_p_core_2e_gprf_2e_mem_2e___mem__r__en_24_2, 0));
	items.add(path + "core gprf mem _mem_r_addr$3", debug_item(debug_eval_outline, p_core_2e_gprf__rp2____addr, 0));
	items.add(path + "core gprf mem _mem_r_data$4", debug_item(p_core_2e_gprf_2e_mem_2e___mem__r__data_24_4, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core gprf mem _mem_w_en", debug_item(debug_eval_outline, p_core_2e_gprf__wp____en, 0));
	items.add(path + "core gprf mem _mem_w_addr", debug_item(debug_alias(), p_core_2e_payload____rd_24_122, 0));
	items.add(path + "core gprf mem _mem_w_data", debug_item(debug_eval_outline, p_core_2e_w__result, 0));
	items.add(path + "core gprf mem fwd_wp_en", debug_item(p_core_2e_gprf_2e_mem_2e_fwd__wp__en, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core gprf mem fwd_wp_en$next", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_fwd__wp__en_24_next, 0));
	items.add(path + "core gprf mem fwd_wp_data", debug_item(p_core_2e_gprf_2e_mem_2e_fwd__wp__data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core gprf mem fwd_wp_data$next", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_fwd__wp__data_24_next, 0));
	items.add(path + "core gprf mem collision", debug_item(p_core_2e_gprf_2e_mem_2e_collision, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core gprf mem collision$next", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_collision_24_next, 0));
	items.add(path + "core gprf rp2__data", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_rp2____data, 0));
	items.add(path + "core gprf rp1__data", debug_item(debug_eval_outline, p_core_2e_gprf_2e_mem_2e_rp1____data, 0));
	items.add(path + "core gprf wp__data", debug_item(debug_eval_outline, p_core_2e_w__result, 0));
	items.add(path + "core gprf wp__addr", debug_item(debug_alias(), p_core_2e_payload____rd_24_122, 0));
	items.add(path + "core gprf wp__en", debug_item(debug_eval_outline, p_core_2e_gprf__wp____en, 0));
	items.add(path + "core gprf rp2__addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp2____addr, 0));
	items.add(path + "core gprf rp1__addr", debug_item(debug_eval_outline, p_core_2e_gprf__rp1____addr, 0));
	items.add(path + "core gprf clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core gprf rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core csrf irq_pending__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____re, 0));
	items.add(path + "core csrf irq_mask__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____re, 0));
	items.add(path + "core csrf mip__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____re, 0));
	items.add(path + "core csrf mtval__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____re, 0));
	items.add(path + "core csrf mcause__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____re, 0));
	items.add(path + "core csrf mepc__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____re, 0));
	items.add(path + "core csrf mscratch__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____re, 0));
	items.add(path + "core csrf mtvec__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____re, 0));
	items.add(path + "core csrf mie__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____re, 0));
	items.add(path + "core csrf misa__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____re, 0));
	items.add(path + "core csrf mstatus__re", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____re, 0));
	items.add(path + "core csrf irq_pending__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____w____value, 0));
	items.add(path + "core csrf irq_pending__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_irq__pending____r____value, 0));
	items.add(path + "core csrf irq_pending__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__pending____we, 0));
	items.add(path + "core csrf irq_mask__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____w____value, 0));
	items.add(path + "core csrf irq_mask__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_irq__mask____r____value, 0));
	items.add(path + "core csrf irq_mask__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_irq__mask____we, 0));
	items.add(path + "core csrf mip__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero3, 0));
	items.add(path + "core csrf mip__w__meip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____meip, 0));
	items.add(path + "core csrf mip__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero2, 0));
	items.add(path + "core csrf mip__w__seip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____seip, 0));
	items.add(path + "core csrf mip__w__ueip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____ueip, 0));
	items.add(path + "core csrf mip__w__mtip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____mtip, 0));
	items.add(path + "core csrf mip__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero1, 0));
	items.add(path + "core csrf mip__w__stip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____stip, 0));
	items.add(path + "core csrf mip__w__utip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____utip, 0));
	items.add(path + "core csrf mip__w__msip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____msip, 0));
	items.add(path + "core csrf mip__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____zero0, 0));
	items.add(path + "core csrf mip__w__ssip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____ssip, 0));
	items.add(path + "core csrf mip__w__usip", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____w____usip, 0));
	items.add(path + "core csrf mip__r__zero3", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero3, 0));
	items.add(path + "core csrf mip__r__meip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____meip, 0));
	items.add(path + "core csrf mip__r__zero2", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero2, 0));
	items.add(path + "core csrf mip__r__seip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____seip, 0));
	items.add(path + "core csrf mip__r__ueip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____ueip, 0));
	items.add(path + "core csrf mip__r__mtip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____mtip, 0));
	items.add(path + "core csrf mip__r__zero1", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero1, 0));
	items.add(path + "core csrf mip__r__stip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____stip, 0));
	items.add(path + "core csrf mip__r__utip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____utip, 0));
	items.add(path + "core csrf mip__r__msip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____msip, 0));
	items.add(path + "core csrf mip__r__zero0", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____zero0, 0));
	items.add(path + "core csrf mip__r__ssip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____ssip, 0));
	items.add(path + "core csrf mip__r__usip", debug_item(debug_alias(), p_core_2e_exception_2e_mip____r____usip, 0));
	items.add(path + "core csrf mip__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mip____we, 0));
	items.add(path + "core csrf mtval__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____w____value, 0));
	items.add(path + "core csrf mtval__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_mtval____r____value, 0));
	items.add(path + "core csrf mtval__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtval____we, 0));
	items.add(path + "core csrf mcause__w__interrupt", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____w____interrupt, 0));
	items.add(path + "core csrf mcause__w__ecode", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____w____ecode, 0));
	items.add(path + "core csrf mcause__r__interrupt", debug_item(debug_alias(), p_core_2e_exception_2e_mcause____r____interrupt, 0));
	items.add(path + "core csrf mcause__r__ecode", debug_item(debug_alias(), p_core_2e_exception_2e_mcause____r____ecode, 0));
	items.add(path + "core csrf mcause__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mcause____we, 0));
	items.add(path + "core csrf mepc__w__base", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____w____base, 0));
	items.add(path + "core csrf mepc__w__zero", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____w____zero, 0));
	items.add(path + "core csrf mepc__r__zero", debug_item(debug_alias(), p_core_2e_exception_2e_mepc____r____zero, 0));
	items.add(path + "core csrf mepc__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mepc____we, 0));
	items.add(path + "core csrf mscratch__w__value", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____w____value, 0));
	items.add(path + "core csrf mscratch__r__value", debug_item(debug_alias(), p_core_2e_exception_2e_mscratch____r____value, 0));
	items.add(path + "core csrf mscratch__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mscratch____we, 0));
	items.add(path + "core csrf mtvec__w__base", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____w____base, 0));
	items.add(path + "core csrf mtvec__w__mode", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____w____mode, 0));
	items.add(path + "core csrf mtvec__r__mode", debug_item(debug_alias(), p_core_2e_exception_2e_mtvec____r____mode, 0));
	items.add(path + "core csrf mtvec__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mtvec____we, 0));
	items.add(path + "core csrf mie__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero3, 0));
	items.add(path + "core csrf mie__w__meie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____meie, 0));
	items.add(path + "core csrf mie__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero2, 0));
	items.add(path + "core csrf mie__w__seie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____seie, 0));
	items.add(path + "core csrf mie__w__ueie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____ueie, 0));
	items.add(path + "core csrf mie__w__mtie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____mtie, 0));
	items.add(path + "core csrf mie__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero1, 0));
	items.add(path + "core csrf mie__w__stie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____stie, 0));
	items.add(path + "core csrf mie__w__utie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____utie, 0));
	items.add(path + "core csrf mie__w__msie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____msie, 0));
	items.add(path + "core csrf mie__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____zero0, 0));
	items.add(path + "core csrf mie__w__ssie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____ssie, 0));
	items.add(path + "core csrf mie__w__usie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____w____usie, 0));
	items.add(path + "core csrf mie__r__zero3", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero3, 0));
	items.add(path + "core csrf mie__r__meie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____meie, 0));
	items.add(path + "core csrf mie__r__zero2", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero2, 0));
	items.add(path + "core csrf mie__r__seie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____seie, 0));
	items.add(path + "core csrf mie__r__ueie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____ueie, 0));
	items.add(path + "core csrf mie__r__mtie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____mtie, 0));
	items.add(path + "core csrf mie__r__zero1", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero1, 0));
	items.add(path + "core csrf mie__r__stie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____stie, 0));
	items.add(path + "core csrf mie__r__utie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____utie, 0));
	items.add(path + "core csrf mie__r__msie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____msie, 0));
	items.add(path + "core csrf mie__r__zero0", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____zero0, 0));
	items.add(path + "core csrf mie__r__ssie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____ssie, 0));
	items.add(path + "core csrf mie__r__usie", debug_item(debug_alias(), p_core_2e_exception_2e_mie____r____usie, 0));
	items.add(path + "core csrf mie__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mie____we, 0));
	items.add(path + "core csrf misa__w__mxl", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____mxl, 0));
	items.add(path + "core csrf misa__w__zero", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____zero, 0));
	items.add(path + "core csrf misa__w__extensions", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____w____extensions, 0));
	items.add(path + "core csrf misa__r__mxl", debug_item(debug_alias(), p_core_2e_exception_2e_misa____r____mxl, 0));
	items.add(path + "core csrf misa__r__zero", debug_item(debug_alias(), p_core_2e_exception_2e_misa____r____zero, 0));
	items.add(path + "core csrf misa__r__extensions", debug_item(debug_alias(), p_core_2e_exception_2e_misa____r____extensions, 0));
	items.add(path + "core csrf misa__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_misa____we, 0));
	items.add(path + "core csrf mstatus__w__sd", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sd, 0));
	items.add(path + "core csrf mstatus__w__zero3", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero3, 0));
	items.add(path + "core csrf mstatus__w__tsr", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tsr, 0));
	items.add(path + "core csrf mstatus__w__tw", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tw, 0));
	items.add(path + "core csrf mstatus__w__tvm", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____tvm, 0));
	items.add(path + "core csrf mstatus__w__mxr", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mxr, 0));
	items.add(path + "core csrf mstatus__w__sum", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sum, 0));
	items.add(path + "core csrf mstatus__w__mprv", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mprv, 0));
	items.add(path + "core csrf mstatus__w__xs", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____xs, 0));
	items.add(path + "core csrf mstatus__w__fs", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____fs, 0));
	items.add(path + "core csrf mstatus__w__mpp", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mpp, 0));
	items.add(path + "core csrf mstatus__w__zero2", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero2, 0));
	items.add(path + "core csrf mstatus__w__spp", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____spp, 0));
	items.add(path + "core csrf mstatus__w__mpie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mpie, 0));
	items.add(path + "core csrf mstatus__w__zero1", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero1, 0));
	items.add(path + "core csrf mstatus__w__spie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____spie, 0));
	items.add(path + "core csrf mstatus__w__upie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____upie, 0));
	items.add(path + "core csrf mstatus__w__mie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____mie, 0));
	items.add(path + "core csrf mstatus__w__zero0", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____zero0, 0));
	items.add(path + "core csrf mstatus__w__sie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____sie, 0));
	items.add(path + "core csrf mstatus__w__uie", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____w____uie, 0));
	items.add(path + "core csrf mstatus__r__sd", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____sd, 0));
	items.add(path + "core csrf mstatus__r__zero3", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero3, 0));
	items.add(path + "core csrf mstatus__r__tsr", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____tsr, 0));
	items.add(path + "core csrf mstatus__r__tw", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____tw, 0));
	items.add(path + "core csrf mstatus__r__tvm", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____tvm, 0));
	items.add(path + "core csrf mstatus__r__mxr", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mxr, 0));
	items.add(path + "core csrf mstatus__r__sum", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____sum, 0));
	items.add(path + "core csrf mstatus__r__mprv", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mprv, 0));
	items.add(path + "core csrf mstatus__r__xs", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____xs, 0));
	items.add(path + "core csrf mstatus__r__fs", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____fs, 0));
	items.add(path + "core csrf mstatus__r__mpp", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mpp, 0));
	items.add(path + "core csrf mstatus__r__zero2", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero2, 0));
	items.add(path + "core csrf mstatus__r__spp", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____spp, 0));
	items.add(path + "core csrf mstatus__r__mpie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mpie, 0));
	items.add(path + "core csrf mstatus__r__zero1", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero1, 0));
	items.add(path + "core csrf mstatus__r__spie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____spie, 0));
	items.add(path + "core csrf mstatus__r__upie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____upie, 0));
	items.add(path + "core csrf mstatus__r__mie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____mie, 0));
	items.add(path + "core csrf mstatus__r__zero0", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____zero0, 0));
	items.add(path + "core csrf mstatus__r__sie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____sie, 0));
	items.add(path + "core csrf mstatus__r__uie", debug_item(debug_alias(), p_core_2e_exception_2e_mstatus____r____uie, 0));
	items.add(path + "core csrf mstatus__we", debug_item(debug_eval_outline, p_core_2e_csrf_2e_mstatus____we, 0));
	items.add(path + "core csrf rp__data", debug_item(debug_eval_outline, p_core_2e_csrf_2e_rp____data, 0));
	items.add(path + "core csrf wp__data", debug_item(debug_alias(), p_core_2e_payload____csr__result_24_116, 0));
	items.add(path + "core csrf wp__addr", debug_item(debug_eval_outline, p_core_2e_csrf__wp____addr, 0));
	items.add(path + "core csrf wp__en", debug_item(debug_eval_outline, p_core_2e_csrf__wp____en, 0));
	items.add(path + "core csrf rp__en", debug_item(debug_eval_outline, p_core_2e_csrf__rp____en, 0));
	items.add(path + "core csrf rp__addr", debug_item(debug_alias(), p_core_2e_csrf__rp____addr, 0));
	items.add(path + "core csrf mepc__r__base", debug_item(debug_alias(), p_core_2e_exception_2e_mepc____r____base, 0));
	items.add(path + "core csrf mtvec__r__base", debug_item(debug_alias(), p_core_2e_exception_2e_mtvec____r____base, 0));
	items.add(path + "dmem wbus__adr", debug_item(debug_eval_outline, p_dmem__wbus____adr, 0));
	items.add(path + "dmem wbus__dat_r", debug_item(p_dmem_2e_wbus____dat__r, 0, debug_item::DRIVEN_SYNC));
	static const value<32> const_p_dmem_2e_wbus____dat__r_24_next = value<32>{0u};
	items.add(path + "dmem wbus__dat_r$next", debug_item(const_p_dmem_2e_wbus____dat__r_24_next, 0));
	items.add(path + "dmem wbus__sel", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____sel, 0));
	items.add(path + "dmem wbus__cyc", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "dmem wbus__stb", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____stb, 0));
	items.add(path + "dmem wbus__ack", debug_item(p_dmem_2e_wbus____ack, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "dmem wbus__ack$next", debug_item(debug_eval_outline, p_dmem_2e_wbus____ack_24_next, 0));
	items.add(path + "dmem wbus__we", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____we, 0));
	items.add(path + "dmem rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "dmem clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "dmem valid", debug_item(debug_eval_outline, p_dmem_2e_valid, 0));
	items.add(path + "dmem adr_r", debug_item(p_dmem_2e_adr__r, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "dmem adr_r$next", debug_item(debug_eval_outline, p_dmem_2e_adr__r_24_next, 0));
	items.add(path + "dmem ram_we", debug_item(debug_eval_outline, p_dmem_2e_ram__we, 0));
	items.add(path + "dmem waddr", debug_item(debug_eval_outline, p_dmem_2e_waddr, 0));
	items.add(path + "dmem raddr", debug_item(debug_eval_outline, p_dmem_2e_raddr, 0));
	items.add(path + "dmem we", debug_item(debug_eval_outline, p_dmem_2e_we, 0));
	items.add(path + "dmem raddr2", debug_item(debug_eval_outline, p_dmem_2e_raddr2, 0));
	items.add(path + "dmem waddr2", debug_item(debug_eval_outline, p_dmem_2e_waddr2, 0));
	items.add(path + "imem wbus__adr", debug_item(debug_eval_outline, p_imem__wbus____adr, 0));
	items.add(path + "imem wbus__dat_r", debug_item(p_imem_2e_wbus____dat__r, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "imem wbus__dat_r$next", debug_item(debug_eval_outline, p_imem_2e_wbus____dat__r_24_next, 0));
	static const value<4> const_p_imem_2e_wbus____sel = value<4>{0xfu};
	items.add(path + "imem wbus__sel", debug_item(const_p_imem_2e_wbus____sel, 0));
	items.add(path + "imem wbus__cyc", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	items.add(path + "imem wbus__stb", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____stb, 0));
	items.add(path + "imem wbus__ack", debug_item(p_imem_2e_wbus____ack, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "imem wbus__ack$next", debug_item(debug_eval_outline, p_imem_2e_wbus____ack_24_next, 0));
	static const value<1> const_p_imem_2e_wbus____we = value<1>{0u};
	items.add(path + "imem wbus__we", debug_item(const_p_imem_2e_wbus____we, 0));
	items.add(path + "imem rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "imem clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "imem valid", debug_item(debug_eval_outline, p_imem_2e_valid, 0));
	items.add(path + "imem adr_r", debug_item(p_imem_2e_adr__r, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "imem adr_r$next", debug_item(debug_eval_outline, p_imem_2e_adr__r_24_next, 0));
	static const value<1> const_p_imem_2e_ram__we = value<1>{0u};
	items.add(path + "imem ram_we", debug_item(const_p_imem_2e_ram__we, 0));
	items.add(path + "imem waddr", debug_item(debug_eval_outline, p_imem_2e_waddr, 0));
	items.add(path + "imem raddr", debug_item(debug_eval_outline, p_imem_2e_raddr, 0));
	static const value<4> const_p_imem_2e_we = value<4>{0u};
	items.add(path + "imem we", debug_item(const_p_imem_2e_we, 0));
	items.add(path + "imem raddr2", debug_item(debug_eval_outline, p_imem_2e_raddr2, 0));
	items.add(path + "imem waddr2", debug_item(debug_eval_outline, p_imem_2e_waddr2, 0));
	items.add(path + "dummy$next", debug_item(debug_eval_outline, p_dummy_24_next, 0));
	items.add(path + "dummy", debug_item(p_dummy, 0, debug_item::DRIVEN_SYNC));
	static const value<32> const_p_ext__intr = value<32>{0u};
	items.add(path + "ext_intr", debug_item(const_p_ext__intr, 0));
	static const value<1> const_p_t__intr = value<1>{0u};
	items.add(path + "t_intr", debug_item(const_p_t__intr, 0));
	static const value<1> const_p_s__intr = value<1>{0u};
	items.add(path + "s_intr", debug_item(const_p_s__intr, 0));
	static const value<1> const_p_wbus____err_24_8 = value<1>{0u};
	items.add(path + "wbus__err$8", debug_item(const_p_wbus____err_24_8, 0));
	static const value<2> const_p_wbus____bte_24_7 = value<2>{0u};
	items.add(path + "wbus__bte$7", debug_item(const_p_wbus____bte_24_7, 0));
	static const value<3> const_p_wbus____cti_24_6 = value<3>{0u};
	items.add(path + "wbus__cti$6", debug_item(const_p_wbus____cti_24_6, 0));
	items.add(path + "wbus__dat_w$5", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____dat__w, 0));
	static const value<1> const_p_wbus____err = value<1>{0u};
	items.add(path + "wbus__err", debug_item(const_p_wbus____err, 0));
	static const value<2> const_p_wbus____bte = value<2>{0u};
	items.add(path + "wbus__bte", debug_item(const_p_wbus____bte, 0));
	static const value<3> const_p_wbus____cti = value<3>{0u};
	items.add(path + "wbus__cti", debug_item(const_p_wbus____cti, 0));
	static const value<32> const_p_wbus____dat__w = value<32>{0u};
	items.add(path + "wbus__dat_w", debug_item(const_p_wbus____dat__w, 0));
	static const value<32> const_p_core__external__interrupt = value<32>{0u};
	items.add(path + "core_external_interrupt", debug_item(const_p_core__external__interrupt, 0));
	static const value<1> const_p_core__timer__interrupt = value<1>{0u};
	items.add(path + "core_timer_interrupt", debug_item(const_p_core__timer__interrupt, 0));
	static const value<1> const_p_core__software__interrupt = value<1>{0u};
	items.add(path + "core_software_interrupt", debug_item(const_p_core__software__interrupt, 0));
	static const value<1> const_p_core__dbus____err = value<1>{0u};
	items.add(path + "core_dbus__err", debug_item(const_p_core__dbus____err, 0));
	static const value<2> const_p_core__dbus____bte = value<2>{0u};
	items.add(path + "core_dbus__bte", debug_item(const_p_core__dbus____bte, 0));
	static const value<3> const_p_core__dbus____cti = value<3>{0u};
	items.add(path + "core_dbus__cti", debug_item(const_p_core__dbus____cti, 0));
	items.add(path + "core_dbus__we", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____we, 0));
	items.add(path + "core_dbus__ack", debug_item(debug_alias(), p_dmem_2e_wbus____ack, 0));
	items.add(path + "core_dbus__stb", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____stb, 0));
	items.add(path + "core_dbus__cyc", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "core_dbus__sel", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____sel, 0));
	items.add(path + "core_dbus__dat_r", debug_item(debug_alias(), p_dmem_2e_wbus____dat__r, 0));
	items.add(path + "core_dbus__dat_w", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____dat__w, 0));
	items.add(path + "core_dbus__adr", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____adr, 0));
	static const value<1> const_p_core__ibus____err = value<1>{0u};
	items.add(path + "core_ibus__err", debug_item(const_p_core__ibus____err, 0));
	static const value<2> const_p_core__ibus____bte = value<2>{0u};
	items.add(path + "core_ibus__bte", debug_item(const_p_core__ibus____bte, 0));
	static const value<3> const_p_core__ibus____cti = value<3>{0u};
	items.add(path + "core_ibus__cti", debug_item(const_p_core__ibus____cti, 0));
	static const value<1> const_p_core__ibus____we = value<1>{0u};
	items.add(path + "core_ibus__we", debug_item(const_p_core__ibus____we, 0));
	items.add(path + "core_ibus__ack", debug_item(debug_alias(), p_imem_2e_wbus____ack, 0));
	items.add(path + "core_ibus__stb", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____stb, 0));
	items.add(path + "core_ibus__cyc", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	static const value<4> const_p_core__ibus____sel = value<4>{0xfu};
	items.add(path + "core_ibus__sel", debug_item(const_p_core__ibus____sel, 0));
	items.add(path + "core_ibus__dat_r", debug_item(debug_alias(), p_imem_2e_wbus____dat__r, 0));
	static const value<32> const_p_core__ibus____dat__w = value<32>{0u};
	items.add(path + "core_ibus__dat_w", debug_item(const_p_core__ibus____dat__w, 0));
	items.add(path + "core_ibus__adr", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____adr, 0));
	items.add(path + "dmem_wbus__we", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____we, 0));
	items.add(path + "dmem_wbus__ack", debug_item(debug_alias(), p_dmem_2e_wbus____ack, 0));
	items.add(path + "dmem_wbus__stb", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____stb, 0));
	items.add(path + "dmem_wbus__cyc", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____cyc, 0));
	items.add(path + "dmem_wbus__sel", debug_item(debug_alias(), p_core_2e_loadstore_2e_dbus____sel, 0));
	items.add(path + "dmem_wbus__dat_r", debug_item(debug_alias(), p_dmem_2e_wbus____dat__r, 0));
	items.add(path + "dmem_wbus__adr", debug_item(debug_eval_outline, p_dmem__wbus____adr, 0));
	static const value<1> const_p_imem__wbus____we = value<1>{0u};
	items.add(path + "imem_wbus__we", debug_item(const_p_imem__wbus____we, 0));
	items.add(path + "imem_wbus__ack", debug_item(debug_alias(), p_imem_2e_wbus____ack, 0));
	items.add(path + "imem_wbus__stb", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____stb, 0));
	items.add(path + "imem_wbus__cyc", debug_item(debug_alias(), p_core_2e_fetch_2e_ibus____cyc, 0));
	static const value<4> const_p_imem__wbus____sel = value<4>{0xfu};
	items.add(path + "imem_wbus__sel", debug_item(const_p_imem__wbus____sel, 0));
	items.add(path + "imem_wbus__dat_r", debug_item(debug_alias(), p_imem_2e_wbus____dat__r, 0));
	items.add(path + "imem_wbus__adr", debug_item(debug_eval_outline, p_imem__wbus____adr, 0));
	items.add(path + "rst", debug_item(p_rst, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "clk", debug_item(p_clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "core gprf mem _mem", debug_item(memory_p_core_2e_gprf_2e_mem_2e___mem, 0));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_top>(new cxxrtl_design::p_top) };
}
