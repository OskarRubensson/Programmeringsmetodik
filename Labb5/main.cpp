#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <numeric>
#include <iterator>
#include "Hero.h"

struct MyPrint {
    void operator()(const Hero& hero){
        std::cout << hero.getName() << ", " << hero.getRating() << std::endl;
    };
};

struct Greater {
private:
    double rating;
public:
    Greater() = delete;
    explicit Greater(double rating): rating(rating) {};
    bool operator()(const Hero& hero) const{
        return hero.getRating() >= rating;
    }
};

struct Same_Name{
    bool operator()(const Hero& lhs, const Hero& rhs){
        return lhs == rhs;
    }
};

struct Searcher{
    bool operator()(const Hero& lhs, const Hero& rhs){
        return lhs == rhs;
    }
};

struct MyBinOp{
    size_t size;

    explicit MyBinOp(size_t size): size(size) {};

    double operator()(double x, const Hero& hero) const{
        return x += hero.getRating() / size;
    }
};

struct MyUnaryOp{
    double operator()(const Hero& hero){
        return hero.getRating() * 2;
    }
};

struct MyFunc{
    double mean;
    MyFunc() = delete;
    explicit MyFunc(double mean): mean(mean) {}
    double operator()(const double& rating) const{
        return rating - mean;
    }
};

int main() {
    std::array<Hero, 6> heroArr = {
            Hero("Spiderman", 9.5),
            Hero("Batman", 7),
            Hero("Iron Man", 9.3),
            Hero("Superman", 7.6),
            Hero("Superman2", 7.3),
            Hero("Captain America", 8.8)
    };

    // Copy construct from array
    std::vector<Hero> heroes(heroArr.begin(), heroArr.end());

    std::cout << std::endl << "(1) Use for_each to print" << std::endl;
    MyPrint printer;
    std::for_each(heroes.begin(), heroes.end(), printer);

    std::cout << std::endl << "(2) Use find_if (first hero-rating above 9)" << std::endl;
    Greater greater(9);
    auto over_nine = std::find_if(heroes.begin(), heroes.end(), greater);
    printer(*over_nine);

    std::cout << std::endl << "(3) Use adjacent_find" << std::endl;
    Same_Name same;
    auto duplicate = std::adjacent_find(heroes.begin(), heroes.end(), same);
    printer(*duplicate);
    printer(*(duplicate + 1));

    std::cout << std::endl << "(4) Use std::equal" << std::endl;
    std::cout << (std::equal(heroes.begin(), heroes.end(), heroArr.begin(), heroArr.end()) ? "Equal" : "Not equal") << std::endl;

    std::cout << std::endl << "(5) Use std::search" << std::endl;
    auto found = std::search(heroes.begin(), heroes.end(), heroes.begin() + 1, heroes.begin() + 4);
    if (found != heroes.end())
        std::for_each(found, found + 3, printer);


    std::cout << std::endl << "(6) Use std::accumulate" << std::endl;
    MyBinOp binOp(heroes.size());
    auto mean = std::accumulate(heroes.begin(), heroes.end(), 0.0, binOp);
    std::cout << mean << std::endl;

    std::cout << std::endl << "(7) Use std::transform (create v2)" << std::endl;
    std::vector<double> v2(heroes.size());
    MyUnaryOp unaryOp;
    std::transform(heroes.begin(), heroes.end(), v2.begin(), unaryOp);
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<double>(std::cout, "\n"));

    std::cout << std::endl << "(8) Use std::transform (transform v2 values)" << std::endl;
    MyFunc func(mean);
    std::transform(v2.begin(), v2.end(), v2.begin(), func);
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<double>(std::cout, "\n"));


    std::cout << std::endl << "(9) Use std::sort" << std::endl;
    std:sort(v2.begin(), v2.end(), [](const double& a, const double& b){ return a < b; } );
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<double>(std::cout, "\n"));

    return 0;
}
