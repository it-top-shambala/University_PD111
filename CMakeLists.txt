cmake_minimum_required(VERSION 3.22)
project(university)

set(CMAKE_CXX_STANDARD 14)

add_executable(university Contacts.h Date.h Person.h Progress.h Staff.h Student.h Teacher.h main.cpp)
