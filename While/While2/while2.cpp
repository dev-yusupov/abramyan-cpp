#include <iostream>

double findNumberOfB(double a, double b) {
    int sum = 0;
    while (a >= b) {
        a -= b;
        sum += 1;
    }

    return sum;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    double result = findNumberOfB(a, b);

    std::cout << result;

    return 0;
}