#include <iostream>
#include <cmath>

int main() {
    int n, k;
    std::cin >> n;
    k = 0;

    while (true) {
        std::cout << k << std::endl;

        if (std::pow(3, k) > n) {
            break;
        } else {
            k++;
        }
    }

    std::cout << k;

    return 0;
}