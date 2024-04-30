#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int k = 1;

    while (k * k < n) {
        k++;
    }

    std::cout << k;

    return 0;
}