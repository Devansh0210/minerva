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

// \top: 1
// \src: adder.v:1.1-24.10
struct p_adder : public module {
	// \src: adder.v:6.16-6.19
	/*input*/ value<1> p_clk;
	value<1> prev_p_clk;
	bool posedge_p_clk() const {
		return !prev_p_clk.slice<0>().val() && p_clk.slice<0>().val();
	}
	// \src: adder.v:5.16-5.21
	/*output*/ wire<1> p_carry;
	// \src: adder.v:4.22-4.25
	/*output*/ wire<4> p_res;
	// \src: adder.v:3.22-3.23
	/*input*/ value<4> p_b;
	// \src: adder.v:2.22-2.23
	/*input*/ value<4> p_a;
	// \hdlname: inst_comb_add res
	// \src: adder.v:12.14-17.6|adder.v:31.23-31.26
	/*outline*/ value<4> p_inst__comb__add_2e_res;
	// \hdlname: inst_comb_add carry
	// \src: adder.v:12.14-17.6|adder.v:32.17-32.22
	/*outline*/ value<1> p_inst__comb__add_2e_carry;
	p_adder(interior) {}
	p_adder() {
		reset();
	};

	void reset() override;
	bool eval() override;
	bool commit() override;

	void debug_eval();
	debug_outline debug_eval_outline { std::bind(&p_adder::debug_eval, this) };

	void debug_info(debug_items &items, std::string path = "") override;
}; // struct p_adder

void p_adder::reset() {
}

bool p_adder::eval() {
	bool converged = true;
	bool posedge_p_clk = this->posedge_p_clk();
	// \src: adder.v:12.14-17.6|adder.v:35.27-35.32
	value<5> i_flatten_5c_inst__comb__add_2e__24_add_24_adder_2e_v_3a_35_24_2__Y;
	// \src: adder.v:12.14-17.6|adder.v:35.27-35.32
	// cell $flatten\inst_comb_add.$add$adder.v:35$2
	i_flatten_5c_inst__comb__add_2e__24_add_24_adder_2e_v_3a_35_24_2__Y = add_uu<5>(p_a, p_b);
	// \src: adder.v:19.5-22.8
	// cell $procdff$3
	if (posedge_p_clk) {
		p_res.next = i_flatten_5c_inst__comb__add_2e__24_add_24_adder_2e_v_3a_35_24_2__Y.slice<3,0>().val();
	}
	// \src: adder.v:19.5-22.8
	// cell $procdff$4
	if (posedge_p_clk) {
		p_carry.next = i_flatten_5c_inst__comb__add_2e__24_add_24_adder_2e_v_3a_35_24_2__Y.slice<4>().val();
	}
	return converged;
}

bool p_adder::commit() {
	bool changed = false;
	prev_p_clk = p_clk;
	if (p_carry.commit()) changed = true;
	if (p_res.commit()) changed = true;
	return changed;
}

void p_adder::debug_eval() {
	// connection
	p_inst__comb__add_2e_carry.concat(p_inst__comb__add_2e_res) = add_uu<5>(p_a, p_b);
}

CXXRTL_EXTREMELY_COLD
void p_adder::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	items.add(path + "inst_comb_add a", debug_item(debug_alias(), p_a, 0));
	items.add(path + "inst_comb_add b", debug_item(debug_alias(), p_b, 0));
	items.add(path + "inst_comb_add res", debug_item(debug_eval_outline, p_inst__comb__add_2e_res, 0));
	items.add(path + "inst_comb_add carry", debug_item(debug_eval_outline, p_inst__comb__add_2e_carry, 0));
	items.add(path + "temp_carry", debug_item(debug_eval_outline, p_inst__comb__add_2e_carry, 0));
	items.add(path + "temp_res", debug_item(debug_eval_outline, p_inst__comb__add_2e_res, 0));
	items.add(path + "clk", debug_item(p_clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "carry", debug_item(p_carry, 0, debug_item::OUTPUT|debug_item::DRIVEN_SYNC));
	items.add(path + "res", debug_item(p_res, 0, debug_item::OUTPUT|debug_item::DRIVEN_SYNC));
	items.add(path + "b", debug_item(p_b, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "a", debug_item(p_a, 0, debug_item::INPUT|debug_item::UNDRIVEN));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_adder>(new cxxrtl_design::p_adder) };
}
