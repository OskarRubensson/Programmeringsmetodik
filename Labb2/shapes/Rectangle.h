// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Rectangle.h, 2021-12-02 - 2021-12-02
// Rectangle-class

#ifndef LABB2_RECTANGLE_H
#define LABB2_RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape {
private:
    double width;
    double height;
public:
    Rectangle() = delete;
    Rectangle(double width, double height, char* color);

    double getWidth() const;
    double getHeight() const;
    virtual double getArea() const;
};


#endif //LABB2_RECTANGLE_H
