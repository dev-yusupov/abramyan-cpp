#include <iostream>
#include <cmath>
#include "case14.h"

EquilateralTriangle::EquilateralTriangle(double a) : side(a) {
    radius1 = a * std::sqrt(3) / 6;
    radius2 = 2 * radius1;
    area = std::pow(a, 2) * std::sqrt(3) / 4;
}

double EquilateralTriangle::getSideLength() const {
    return side;
}

double EquilateralTriangle::getRadius1() const {
    return radius1;
}

double EquilateralTriangle::getRadius2() const {
    return radius2;
}

double EquilateralTriangle::getArea() const {
    return area;
}


int main() {
    int elementNumber;
    double value;

    std::cin >> elementNumber >> value;

    EquilateralTriangle triangle(0);
    
    double sideLength;

    switch (elementNumber) {
        case 1: triangle = EquilateralTriangle(value); break;
        case 2: triangle = EquilateralTriangle(value / std::sqrt(3) * 6); break;
        case 3:
            sideLength = 2 * value / std::sqrt(3);

            triangle = EquilateralTriangle(sideLength);
            break;
        
        case 4:
            triangle = EquilateralTriangle(std::pow(value, 2) * std::sqrt(3) / 4);
            break;

        default:
            std::cout << "Invalid element number!" << std::endl;
            return 1;
    }

    std::cout << "1: " << triangle.getSideLength() << std::endl;
    std::cout << "2: " << triangle.getRadius1() << std::endl;
    std::cout << "3: " << triangle.getRadius2() << std::endl;
    std::cout << "4: " << triangle.getArea() << std::endl;

    return 0;
}