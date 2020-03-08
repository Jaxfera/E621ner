
add_library(e621 SHARED E621.cpp)

target_link_libraries(e621 PRIVATE
    CONAN_PKG::cpprestsdk
    godot-cpp
    project_options
    project_warnings
)

set_target_properties(e621 PROPERTIES
    CXX_EXTENSIONS OFF
    POSITION_INDEPENDENT_CODE ON
)