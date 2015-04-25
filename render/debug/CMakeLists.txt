cmake_minimum_required(VERSION 2.6)

add_library("render-debug" "image.cpp")

target_link_libraries("render-debug" "render")
