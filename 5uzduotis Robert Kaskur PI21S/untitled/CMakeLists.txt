cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

find_package(/usr/local/include/json.hpp)

add_executable(untitled main.cpp CsvReader.cpp CsvReader.h CsvLine.cpp CsvLine.h)
