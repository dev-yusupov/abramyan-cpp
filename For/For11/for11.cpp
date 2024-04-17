#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cin >> n;

    int doubledN = n * 2;
    int sum = 0;

    for (int i = n; i <= doubledN; i++) {
        sum += std::pow(i, 2);
    }

    std::cout << sum;

    return 0;
}