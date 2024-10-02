#include <iostream>

int main() {
    int p, k;

    std::cin >> p;

    int initialDistance = 10;
    k = 0;

    while (initialDistance <= 200) {
        double result = initialDistance * p / 100;
        initialDistance += result;

        k++;
    }

    std::cout << k << std::endl;

    return 0;
}