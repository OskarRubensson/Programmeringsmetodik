// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Parallelepiped.h, 2021-12-02 - 2021-12-02
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-02.
//

#ifndef LABB2_PARALLELEPIPED_H
#define LABB2_PARALLELEPIPED_H

#include "Rectangle.h"

class Parallelepiped: public Rectangle {
private:
    double depth;
public:
    Parallelepiped() = delete;
    Parallelepiped(Rectangle rectangle, double depth);
    Parallelepiped(double width, double height, double depth, char* color);

    [[nodiscard]] double getDepth() const;
    [[nodiscard]] double getVolume() const;
};


#endif //LABB2_PARALLELEPIPED_H
