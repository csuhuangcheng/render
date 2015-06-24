cmake_minimum_required(VERSION 2.6)

if (MSVC)
	set (CMAKE_CXX_FLAGS "/Wall /WX")
else (MSVC)
	set (CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -std=c++11")
endif (MSVC)

add_library("render"
	"coordinate.cpp"
	"color.cpp"
	"drawable.cpp"
	"image.cpp"
	"primitive.cpp"
	"line.cpp"
	"point.cpp"
	"target.cpp"
	"vector.cpp")

enable_testing()

add_executable("point-test" "point-test.cpp")

target_link_libraries("point-test" "render")

add_test(NAME "point-test" COMMAND "$<TARGET_FILE:point-test>")

add_executable("vector-test" "vector-test.cpp")

target_link_libraries("vector-test" "render")

add_test(NAME "vector-test" COMMAND "$<TARGET_FILE:vector-test>")

