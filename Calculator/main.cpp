#include <iostream>

#include "exceptions.h"

class Calculator {
public:
    Calculator() {}

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            throw DivisionByZeroException();
        }

        return a / b;
    }
    
}

int main() {
    return 0;
}