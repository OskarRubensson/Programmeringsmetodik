// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Rounded_rectangle.cpp, 2021-12-02 - 2021-12-02
// Rounded Rectangle class implementation

#include "Rounded_rectangle.h"

Rounded_rectangle::Rounded_rectangle(Rectangle rectangle, double corner_radius): Rectangle(rectangle), corner_radius(corner_radius) {

}

double Rounded_rectangle::getCornerRadius() const {
    return corner_radius;
}

double Rounded_rectangle::getArea() const {
    const int corner_areas = corner_radius * corner_radius * M_PI;
    const int square_corner_areas = corner_radius * corner_radius * 4;

    return Rectangle::getArea() - square_corner_areas + corner_radius;
}