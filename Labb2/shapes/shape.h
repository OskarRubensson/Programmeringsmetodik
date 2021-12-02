//
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// shape.h, 2021-11-23 - 2021-12-02
// The shape-class that all other shapes inherit from.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H

#define M_PI           3.14159265358979323846  /* pi */

class Shape {
    char* color;
public:
    Shape() = delete;
    Shape(char* color):color(color){};
    [[nodiscard]] virtual double getArea() const = 0;   // Pure virtual
    [[nodiscard]] char* getColor() const { return color; }
};

#endif //LABB2_SHAPE_H
