//
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// shape.h, 2021-11-23 - 2021-11-23
// The abstract shape-class that all other shapes inherit its basic interface from.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H

#define M_PI           3.14159265358979323846  /* pi */

class Shape {
public:
    [[nodiscard]] virtual char* getColor() const = 0;
    [[nodiscard]] virtual double getArea() const = 0;
};

#endif //LABB2_SHAPE_H
