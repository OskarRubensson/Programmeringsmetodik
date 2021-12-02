// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Rectangle.cpp, 2021-12-02 - 2021-12-02
// Rectangle-class implementation

#include "Rectangle.h"

Rectangle::Rectangle(double width, double height, char* color): width(width), height(height), Shape(color)
{}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::getArea() const{
    return width * height;
}