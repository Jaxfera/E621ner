#include <Godot.hpp>
#include <Reference.hpp>

using namespace godot;

class E621 : public Reference
{
    GODOT_CLASS(E621, Reference);

public:
    E621() {}

    void _init() {
        test_void_method();
    }
    
    void test_void_method()
    {
        Godot::print("This is a test!");
    }

    Variant method(Variant arg)
    {
        Variant ret;
        ret = arg;
        return ret;
    }

    static void _register_methods()
    {
        register_method("method", &E621::method);
        register_property<E621, String>("base/name", &E621::_name, String("E621"));
        register_property<E621, int>("base/value", &E621::set_value, &E621::get_value, 0);
    }

    String _name;
    int _value;

    void set_value(int p_value)
    {
        _value = p_value;
    }

    int get_value() const
    {
        return _value;
    }
};

extern "C"
{
    void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options* o)
    {
        Godot::gdnative_init(o);
    }

    void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options* o)
    {
        Godot::gdnative_terminate(o);
    }

    void GDN_EXPORT godot_nativescript_init(void* handle)
    {
        Godot::nativescript_init(handle);
        register_class<E621>();
    }
}
