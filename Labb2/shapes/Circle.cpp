// 
// Labb2, Programmeringsmetodik (DT047G)
// Oskar Rubensson (osru1900) 
// Circle.cpp, 2021-11-23 - 2021-11-23
// kortfattat vad filen innehåller
//

#include "Circle.h"

Circle::Circle():diameter(0.0), color("black") {

}

Circle::Circle(double diameter, char* color): diameter(diameter), color(color){

}

double Circle::getArea() const{
    return (diameter / 2) * (diameter / 2) * M_PI;
}

char* Circle::getColor() const{
    return color;
}
