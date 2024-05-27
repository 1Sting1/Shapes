#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include "triangle/triangle.h"
#include "rectangle/rectangle.h"
#include "elips/elips.h"
#include "circle/circle.h"
#include "polygon/polygon.h"

std::vector<std::pair<double, double>> readVerticesFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        exit(1);
    }
    size_t numVertices;
    file >> numVertices;
    std::vector<std::pair<double, double>> vertices;
    for (size_t i = 0; i < numVertices; ++i) {
        double x, y;
        file >> x >> y;
        vertices.push_back(std::make_pair(x, y));
    }
    file.close();
    return vertices;
}

int main() {
    Triangle t(6, 5, 2.2);
    std::cout << "Triangle perimeter: " << t.perimeter() << '\n';
    std::cout << "Triangle area: " << t.area() << '\n';
    std::cout << "\n";

    Rectangle r(5, 5);
    std::cout << "Rectangle perimeter: " << r.perimeter() << '\n';
    std::cout << "Rectangle area: " << r.area() << '\n';
    std::cout << "\n";

    Elips e(2, 4);
    std::cout << "Ellipse perimeter: " << e.perimeter() << '\n';
    std::cout << "Ellipse area: " << e.area() << '\n';
    std::cout << "\n";

    Circle c(5);
    std::cout << "Circle perimeter: " << c.perimeter() << '\n';
    std::cout << "Circle area: " << c.area() << '\n';
    std::cout << "\n";

    std::string filename = "oop.txt";
    std::vector<std::pair<double, double>> vertices = readVerticesFromFile(filename);
    Polygon polygon(vertices);
    std::cout << "Polygon perimeter: " << polygon.perimeter() << std::endl;
    std::cout << "Polygon area: " << polygon.area() << std::endl;

    return 0;
}
