// 
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// Circle.h, 2021-11-23 - 2021-12-02
// Circle-class
//

#ifndef LABB2_CIRCLE_H
#define LABB2_CIRCLE_H

#include "shape.h"

class Circle: public Shape {
private:
    double diameter = 0;
public:
    Circle() = delete;
    Circle(double diameter, char* color);
    double getArea() const override;
};


#endif //LABB2_CIRCLE_H
