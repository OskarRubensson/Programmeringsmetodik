// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Parallelepiped.cpp, 2021-12-02 - 2021-12-02
// Parallelepiped-class implementation


#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(Rectangle rectangle, double depth): Rectangle(rectangle), depth(depth)
{}

Parallelepiped::Parallelepiped(double width, double height, double depth, char* color): Rectangle(width, height, color), depth(depth)
{}

double Parallelepiped::getDepth() const {
    return depth;
}

double Parallelepiped::getVolume() const {
    return Rectangle::getArea() * depth;
}