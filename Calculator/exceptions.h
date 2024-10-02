#ifdef DIVISION_BY_ZERO_EXCEPTION_H
#define DIVISION_BY_ZERO_EXCEPTION_H

#include <iostream>
#include <exception>

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Division by zero is not allowed!";
    }
}

#endif //DIVISION_BY_ZERO_H
