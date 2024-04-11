#ifndef CASE13_H
#define CASE13_H

#include <cmath>

class RightIsoscelesTriangle {
private:
    double leg;
    double hypotenuse;
    double altitude;
    double area;

public:
    // Constructor
    RightIsoscelesTriangle(double a);

    // Getter functions
    double getLeg() const;
    double getHypotenuse() const;
    double getAltitude() const;
    double getArea() const;
};

#endif // CASE13_H
