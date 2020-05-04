cmake_minimum_required(VERSION 3.15)
project(APHW5)

set(CMAKE_CXX_STANDARD 17)

add_executable(APHW5 cpp/main.cpp h/apqueue.hpp h/apqueue.h cpp/student.cpp h/student.h cpp/normalstudent.cpp h/normalstudent.h cpp/exponentialstudent.cpp h/exponentialstudent.h h/apmidterm.h cpp/apmidterm.cpp)