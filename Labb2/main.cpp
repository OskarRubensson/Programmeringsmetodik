// Labb2, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// main.cpp, 2021-12-02 - 2021-12-02
// We do some fun stuff with our shapes. This is the file for the main-function.

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "shapes/shape.h"
#include "shapes/Circle.h"
#include "shapes/Cylinder.h"
#include "shapes/Rectangle.h"
#include "shapes/Parallelepiped.h"
#include "shapes/Rounded_rectangle.h"

void getData(std::vector<Shape*> shapes) {
    double totalArea = 0;
    std::map<std::string, size_t> colors;

    for (auto s: shapes) {
        std::cout << s->getArea() << " - " << s->getColor() << std::endl;
        totalArea += s->getArea();

            // Get color in lower-case
        std::string color = s->getColor();
        std::transform(color.begin(), color.end(), color.begin(), ::tolower);

            // Increase counter for this color
        colors[color]++;
    }

    std::cout << "----------" << std::endl
    << "Total area: " << totalArea << std::endl
    << "Colors:";

    for (auto c: colors) {
        std::cout << "\t" << c.first << ": " << c.second << std::endl;
    }
}

int main() {
    std::vector<Shape*> shapes(5, nullptr);

    shapes[0] = new Circle(1.1, (char*)("white"));
    shapes[1] = new Cylinder(Circle(1.3, (char*)("red")), 1.2);
    shapes[2] = new Parallelepiped(Rectangle(1.4, 1.3, (char*)("green")), 1.1);
    shapes[3] = new Rectangle(1.5, 1.5, (char*)("blue"));
    shapes[4] = new Rounded_rectangle(Rectangle(2, 2, (char*)("blue")), 1);


    getData(shapes);
    return 0;
}
