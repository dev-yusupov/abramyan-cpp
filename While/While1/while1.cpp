#include <iostream>

double findUnusedLength(double a, double b) {
    double unusedLength = a;
    while (unusedLength >= b) {
        unusedLength -= b;
    }

    return unusedLength;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    double result = findUnusedLength(a, b);

    std::cout << result;

    return 0;
}