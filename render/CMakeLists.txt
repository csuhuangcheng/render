cmake_minimum_required(VERSION 2.6)

if (MSVC)
	set (CMAKE_CXX_FLAGS "/Wall /WX")
else (MSVC)
	set (CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -std=c++11")
endif (MSVC)

add_library("render"
	"coordinate.cpp"
	"image.cpp"
	"primitive.cpp"
	"line.cpp"
	"point.cpp"
	"target.cpp"
	"vector.cpp")

enable_testing()

add_executable("vector-test" "vector-test.cpp")

target_link_libraries("vector-test" "render")

add_test(NAME "vector-test" COMMAND "$<TARGET_FILE:vector-test>")

