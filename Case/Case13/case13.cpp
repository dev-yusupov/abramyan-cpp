#include <iostream>
#include <cmath>
#include "case13.h"

// Constructor definition
RightIsoscelesTriangle::RightIsoscelesTriangle(double a) : leg(a) {
    hypotenuse = a * std::sqrt(2);
    altitude = hypotenuse / 2;
    area = hypotenuse * altitude / 2;
}

// Getter functions
double RightIsoscelesTriangle::getLeg() const {
    return leg;
}
double RightIsoscelesTriangle::getHypotenuse() const {
    return hypotenuse;
}
double RightIsoscelesTriangle::getAltitude() const {
    return altitude;
}
double RightIsoscelesTriangle::getArea() const {
    return area;
}

int main() {
    int elementNumber;
    double value;
    
    // Input element number and its value
    std::cout << "Enter the element number: ";
    std::cin >> elementNumber;
    std::cout << "Enter the value of the element: ";
    std::cin >> value;
    
    // Create object based on given element
    RightIsoscelesTriangle triangle(0); // Initialize with dummy value
    switch(elementNumber) {
        case 1: triangle = RightIsoscelesTriangle(value); break; // leg a
        case 2: triangle = RightIsoscelesTriangle(value / std::sqrt(2)); break; // hypotenuse c
        case 3: triangle = RightIsoscelesTriangle(value * 2); break; // altitude h
        case 4: triangle = RightIsoscelesTriangle(std::sqrt(value * 2)); break; // area S
        default:
            std::cout << "Invalid element number!" << std::endl;
            return 1;
    }

    // Output values of other elements
    std::cout << "1: " << triangle.getLeg() << std::endl;
    std::cout << "2: " << triangle.getHypotenuse() << std::endl;
    std::cout << "3: " << triangle.getAltitude() << std::endl;
    std::cout << "4: " << triangle.getArea() << std::endl;

    return 0;
}
