#include <iostream>

int findOddOneOut(int a, int b, int c) {
    if (a != b && a != c) {
        return 1; // a differs from the others
    } else if (b != a && b != c) {
        return 2; // b differs from the others
    } else {
        return 3; // c differs from the others
    }
}

int main() {
    // Example values
    int num1 = 5, num2 = 3, num3 = 5;

    // Display the original values
    std::cout << "Original values: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    // Find the order number of the integer that differs from the others
    int orderNumber = findOddOneOut(num1, num2, num3);

    // Display the result
    std::cout << "The integer at position " << orderNumber << " differs from the others." << std::endl;

    return 0;
}
