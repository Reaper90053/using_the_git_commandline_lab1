cmake_minimum_required(VERSION 4.1)
project(LibraryLab2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LibraryLab2
        Book.cpp
        Book.h
        Library.cpp
        Library.h
        main.cpp
        Reader.cpp
        Reader.h)
