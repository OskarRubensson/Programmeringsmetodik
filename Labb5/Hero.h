// Labb5, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Hero.h, 2021-12-13 - 2021-12-13
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-13.
//

#ifndef LABB5_HERO_H
#define LABB5_HERO_H

#include <string>

class Hero {
private:
    std::string name;
    double rating;
public:
    Hero() = delete;
    Hero(std::string name, double rating): name(name), rating(rating) {};

    [[nodiscard]] std::string getName() { return name; }
    [[nodiscard]] double getRating() { return rating; }
    [[nodiscard]] std::string getName() const { return name; }
    [[nodiscard]] double getRating() const { return rating; }

    bool operator==(const Hero& rhs) const{
        return name == rhs.getName();
    };
};

#endif //LABB5_HERO_H
