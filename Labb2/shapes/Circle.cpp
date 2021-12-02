// 
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// Circle.cpp, 2021-11-23 - 2021-11-23
// Circle class implementation
//

#include "Circle.h"

Circle::Circle(double diameter, char* color): diameter(diameter), Shape(color){

}

double Circle::getArea() const{
    return (diameter / 2) * (diameter / 2) * M_PI;
}
