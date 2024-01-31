#include <iostream>

#include "minmax.h"

// Function to find the minimum of two numbers
int min(int num1, int num2) {
    // Use a ternary operator to find the minimum number
    int maximum = (num1 < num2) ? num1 : num2;

    return maximum; // Return the maximum number
}

// Function to find the maximum of two numbers
int max(int num1, int num2) {
    // Use a ternary operator to find the maximum number
    int maximum = (num1 > num2) ? num1 : num2;

    return maximum; // Return the maximum number
}

int main() {
    int a, b;

    // Input two numbers
    std::cout << "Enter two numbers separated by spaces: ";
    std::cin >> a >> b;

    // Output the maximum of the two numbers
    std::cout << "Minimum of " << a << " and " << b << " is: " << min(a, b) << std::endl;
    std::cout << "Maximum of " << a << " and " << b << " is: " << max(a, b) << std::endl;

    return 0;
}
