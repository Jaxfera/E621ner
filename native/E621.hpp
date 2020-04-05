#ifndef E621_HPP
#define E621_HPP

#include <Godot.hpp>
#include <Reference.hpp>

extern "C" {
void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o);
void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o);
void GDN_EXPORT godot_nativescript_init(void *handle);
}

class E621: public godot::Reference {
GODOT_CLASS(E621, Reference)

public:
	static void _register_methods();
	void _init();
};

#endif
