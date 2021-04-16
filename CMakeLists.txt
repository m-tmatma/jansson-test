cmake_minimum_required(VERSION 2.6.4)

# define a variable of project name
set( project_name "jansson-test")

set( outputdir ${CMAKE_BINARY_DIR}/bin)

# set Target Directories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${outputdir})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${outputdir})

add_subdirectory(jansson)
add_subdirectory(test-read)

# define a project name
project (${project_name})
