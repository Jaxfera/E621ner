
add_library(e621 SHARED E621.cpp)

target_link_libraries(e621 PRIVATE
    godot-cpp
    project_options
    project_warnings
)

target_include_directories(e621 PRIVATE
	"${CMAKE_SOURCE_DIR}/native"
)

set_target_properties(e621 PROPERTIES
    CXX_EXTENSIONS OFF
    POSITION_INDEPENDENT_CODE ON
)