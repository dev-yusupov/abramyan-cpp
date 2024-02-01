#include <iostream>

int findOddOneOut(int a, int b, int c, int d) {
    if (a != b && a != c && a != d) {
        return 1; // a differs from the others
    } else if (b != a && b != c && b != d) {
        return 2; // b differs from the others
    } else if (c != a && c != b && c != d) {
        return 3; // c differs from the others
    } else {
        return 4; // d differs from the others
    }
}

int main() {
    // Example values
    int num1 = 5, num2 = 5, num3 = 3, num4 = 5;

    // Display the original values
    std::cout << "Original values: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << std::endl;

    // Find the order number of the integer that differs from the others
    int orderNumber = findOddOneOut(num1, num2, num3, num4);

    // Display the result
    std::cout << "The integer at position " << orderNumber << " differs from the others." << std::endl;

    return 0;
}
