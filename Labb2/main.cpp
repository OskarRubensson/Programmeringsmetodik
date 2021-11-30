#include <iostream>
#include "shapes/Circle.h"

int main() {
    Circle c(1.5, "black");
    std::cout << "Circle: " << c.getArea() << ", " << c.getColor() << std::endl;
    return 0;
}
