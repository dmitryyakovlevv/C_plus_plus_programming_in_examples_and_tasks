cmake_minimum_required(VERSION 3.17)
project(Chapter5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter5  1.cpp
        Geometry.cpp
        Geometry.h
        MGeometry.cpp
        MGeometry.h)