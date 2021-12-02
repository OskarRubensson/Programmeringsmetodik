// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Rounded_rectangle.h, 2021-12-02 - 2021-12-02
// Rounded Rectangle class.

//
// Created by oskar231@hotmail.com on 2021-12-02.
//

#ifndef LABB2_ROUNDED_RECTANGLE_H
#define LABB2_ROUNDED_RECTANGLE_H

#include "Rectangle.h"

class Rounded_rectangle: public Rectangle {
private:
    double corner_radius;
public:
    Rounded_rectangle() = delete;
    Rounded_rectangle(Rectangle rectangle, double corner_radius);

    [[nodiscard]] double getCornerRadius() const;
    [[nodiscard]] double getArea() const override;
};


#endif //LABB2_ROUNDED_RECTANGLE_H
