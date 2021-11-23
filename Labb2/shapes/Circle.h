// 
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// Circle.h, 2021-11-23 - 2021-11-23
// kortfattat vad filen innehåller
//

#ifndef LABB2_CIRCLE_H
#define LABB2_CIRCLE_H
#include "shape.h"


class Circle: Shape {
private:
    int area = 0;
public:
    Circle();
    char* getColor();
    int getArea();
};


#endif //LABB2_CIRCLE_H
