#pragma once

#include "gui_element_types.hpp"

namespace ui {

class investment_window : public window_element_base {
public:
	void on_create(sys::state& state) noexcept override {
		window_element_base::on_create(state);
		set_visible(state, false);
	}

	std::unique_ptr<element_base> make_child(sys::state& state, std::string_view name, dcon::gui_def_id id) noexcept override {
		if(name == "filter_all") {
			auto ptr = make_element_by_type<button_element_base>(state, id);
			return ptr;
		} else if(name == "filter_north_america") {
			auto ptr = make_element_by_type<button_element_base>(state, id);
			return ptr;
		} else if(name == "filter_south_america") {
			auto ptr = make_element_by_type<button_element_base>(state, id);
			return ptr;
		} else {
			return nullptr;
		}
	}
};

}
