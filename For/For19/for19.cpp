#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cin >> n;

    int factorialResult = 1;

    for (int number=1; number <= n; number++) {
        factorialResult *= number;
    }

    std::cout << factorialResult;

    return 0;
}