cmake_minimum_required(VERSION 3.20)
project(Labb2)

set(CMAKE_CXX_STANDARD 14)

include_directories(shapes)

add_executable(Labb2
        shapes/Rectangle.cpp
        shapes/Rectangle.h
        shapes/Circle.cpp
        shapes/Circle.h
        shapes/Cylinder.cpp
        shapes/Cylinder.h
        shapes/shape.h
        main.cpp shapes/Parallelepiped.cpp shapes/Parallelepiped.h shapes/Rounded_rectangle.cpp shapes/Rounded_rectangle.h)
