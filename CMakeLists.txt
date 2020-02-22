cmake_minimum_required(VERSION 3.16)
project(e621 LANGUAGES CXX)

# Enable ccache if available
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

add_subdirectory(godot-cpp)

add_library(e621 SHARED native/E621.cpp)
target_link_libraries(e621 godot-cpp)
set_target_properties(e621 PROPERTIES
    CXX_STD 17
    CXX_EXTENSIONS OFF
    POSITION_INDEPENDENT_CODE ON
)