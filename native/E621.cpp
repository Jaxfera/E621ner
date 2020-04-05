#include "E621.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <exception>
#include <sstream>
#include <string>

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
	// Download a random image from e621
	try
	{
		namespace opt = curlpp::Options;
		std::ostringstream out;
		curlpp::Easy request;
		request.setOpt(opt::Url("https://e621.net/posts.json?limit=1"));
		request.setOpt(opt::Verbose(true));
		request.setOpt(opt::UserAgent("E621ner/1.0 (by 3D Printer"));
		out << request;
		Godot::print(out.str().c_str());
	}
	catch (const std::exception &e)
	{
		Godot::print_error(e.what(), "_init", __FILE__, __LINE__);
	}
}
