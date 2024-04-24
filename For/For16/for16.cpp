#include <iostream>
#include <cmath>

int main() {
    int a, n;

    std::cin >> a >> n;

    for (int exponent=1; exponent <= n; exponent++) {
        std::cout << std::pow(a, exponent) << std::endl;
    }

    return 0;
}