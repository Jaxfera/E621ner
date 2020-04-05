#include "E621.hpp"

using namespace godot;

void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o)
{
	Godot::gdnative_init(o);
}

void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o)
{
	Godot::gdnative_terminate(o);
}

void GDN_EXPORT godot_nativescript_init(void *handle)
{
	Godot::nativescript_init(handle);
	register_class<E621>();
}

void E621::_register_methods()
{
}

void E621::_init()
{
	
}
