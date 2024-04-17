#include <iostream>

double calculateSquare(int number) {
    int doubleValue = 2 * number - 1;
    double squareValue = 0;

    for (int i=1; i<=doubleValue; i+=2) {
        squareValue += i;
    }

    return squareValue;
}

int main() {
    int number;
    std::cin >> number;

    for (int i=1; i <= number; i+=2) {
        double result = calculateSquare(i);
        std::cout << result << std::endl;
    }


    return 0;
}