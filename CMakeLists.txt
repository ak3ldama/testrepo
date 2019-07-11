cmake_minimum_required(VERSION 3.14)

project (test VERSION 1.0.0 DESCRIPTION "test project")

add_library(test STATIC
	src/foo.cpp
)

set_target_properties(test PROPERTIES PUBLIC_HEADER
	include/foo.h
)

target_include_directories(test PRIVATE .)

