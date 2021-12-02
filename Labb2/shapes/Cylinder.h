// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Cylinder.h, 2021-12-01 - 2021-12-02
// Cylinder

#ifndef LABB2_CYLINDER_H
#define LABB2_CYLINDER_H

#include "Circle.h"

class Cylinder: public Circle {
private:
    double height;
public:
    Cylinder() = delete;
    Cylinder(Circle c, double height);
    Cylinder(double radius, char* color, double height);

    double getHeight();
    double getVolume();
};


#endif //LABB2_CYLINDER_H
