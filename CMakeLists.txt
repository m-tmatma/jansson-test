cmake_minimum_required(VERSION 3.13)

# define a variable of project name
set( project_name "jansson-test")

set( outputdir ${CMAKE_BINARY_DIR}/bin)

# set Target Directories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${outputdir})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${outputdir})

add_subdirectory(jansson)
add_subdirectory(test-read)
add_subdirectory(test-write)
add_subdirectory(test-overwrite)

# define a project name
project (${project_name})
