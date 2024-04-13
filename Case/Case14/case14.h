// case14.h
#ifndef CASE_14
#define CASE_14

#include <cmath>

class EquilateralTriangle {
private:
    double side;
    double radius1;
    double radius2;
    double area;

public:
    EquilateralTriangle(double a);

    // Getters
    double getSideLength() const;
    double getRadius1() const;
    double getRadius2() const;
    double getArea() const;
};

#endif // CASE_14