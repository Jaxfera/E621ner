
add_library(e621 SHARED E621.cpp)

target_link_libraries(e621 PRIVATE
    godot-cpp
    curlpp
    project_options
    project_warnings
)

target_include_directories(e621 PRIVATE
    "${CMAKE_SOURCE_DIR}/native"
    "${CMAKE_SOURCE_DIR}/extern/curlpp/include"
)

set_target_properties(e621 PROPERTIES
    CXX_EXTENSIONS OFF
    POSITION_INDEPENDENT_CODE ON
)