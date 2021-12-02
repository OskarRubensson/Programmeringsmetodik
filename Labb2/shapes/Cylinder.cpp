// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Cylinder.cpp, 2021-12-01 - 2021-12-01
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-01.
//

#include "Cylinder.h"

Cylinder::Cylinder(Circle c, double height):Circle(c), height(height) {}
Cylinder::Cylinder(double radius, char* color, double height):Circle(radius, color), height(height) {}

double Cylinder::getHeight(){
    return height;
}

double Cylinder::getVolume(){
    return Circle::getArea() * height;
}