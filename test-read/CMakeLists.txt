cmake_minimum_required(VERSION 3.13)

# define a variable of project name
set( project_name "test-read")

# set the project as the startup project
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT ${project_name} )

# define a project name
project (${project_name})

# define a variable SRC with file GLOB
file(GLOB SRC *.c)

# define sources files of an executable
add_executable(${project_name} ${SRC})

include_directories(${jansson_BINARY_DIR}/include)
target_link_directories(${project_name} PUBLIC ${jansson_BINARY_DIR})
target_link_libraries(${project_name} PUBLIC "jansson")
