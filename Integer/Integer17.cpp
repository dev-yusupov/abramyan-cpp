#include <iostream>

int main() {
    int number;

    // Input an integer greater than 999
    std::cout << "Enter an integer greater than 999: ";
    std::cin >> number;

    // Extract the hundreds digit using integer division and remainder
    int hundredsDigit = (number / 100) % 10;

    // Output the result
    std::cout << "Hundreds digit: " << hundredsDigit << std::endl;

    return 0;
}
