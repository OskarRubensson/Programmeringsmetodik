// Labb5, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Hero.cpp, 2021-12-13 - 2021-12-13
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-13.
//

#include "Hero.h"

bool Hero::operator==(const Hero& rhs) const{
    return name == rhs.getName();
}