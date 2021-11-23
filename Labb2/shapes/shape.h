//
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// shape.h, 2021-11-23 - 2021-11-23
// The abstract shape-class that all other shapes inherit its basic interface from.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H

class Shape {
    char* color[6];
public:
    virtual char* getColor() = 0;
    virtual int getArea() = 0;
};

#endif //LABB2_SHAPE_H
