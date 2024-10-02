#include <iostream>
#include <exception>

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Division by zero is not allowed!";
    }
}