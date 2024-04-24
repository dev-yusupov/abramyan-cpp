#include <iostream>

int factorial(int n) {
    int factorialResult = 1;

    for (int number=1; number <= n; number++) {
        factorialResult *= number;
    }

    return factorialResult;
}

int main() {
    int n;

    std::cin >> n;
    int sum = 0;

    for (int i=1; i <= n; i++) {
        sum += factorial(i);
    }

    std::cout << sum << std::endl;

    return 0;
}