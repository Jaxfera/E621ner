cmake_minimum_required(VERSION 3.16)

project(e621 CXX)

# Set project options
include(cmake/StandardProjectSettings.cmake)
add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_17)

# Set project warnings
add_library(project_warnings INTERFACE)
include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

# Enable sanitizers
include(cmake/Sanitizers.cmake)
enable_sanitizers(project_options)

# Enable doxygen
include(cmake/Doxygen.cmake)
enable_doxygen()

# Allow static analysis options
include(cmake/StaticAnalyzers.cmake)
option(BUILD_SHARED_LIBS "Enable compilation of shared libraries" OFF)

# Set up some extra Conan dependencies based on our needs
# before loading Conan
set(CONAN_EXTRA_REQUIRES "")
set(CONAN_EXTRA_OPTIONS "")

include(cmake/Conan.cmake)
run_conan()

add_subdirectory(extern/godot-cpp)
add_subdirectory(extern/curlpp)
add_subdirectory(native)
