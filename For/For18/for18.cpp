#include <iostream>
#include <cmath>

int main() {
    int a, n;

    std::cin >> a >> n;

    int sum = 0;

    for (int exponent=0; exponent <= n; exponent++) {
        int result = std::pow(a, exponent) * std::pow(-1, exponent);
        sum += result;
    }

    std::cout << sum;

    return 0;
}