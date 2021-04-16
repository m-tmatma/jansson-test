cmake_minimum_required(VERSION 2.6.4)

# define a variable of project name
set( project_name "jansson-test")

add_subdirectory(jansson)
add_subdirectory(test-read)

# define a project name
project (${project_name})
