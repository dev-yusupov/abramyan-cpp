#include <iostream>
#include <cmath>

int main() {
    int n, k;

    std::cin >> n;
    k = 0;

    while (true) {
        if (std::pow(3, k) >= n) {
            break;
        } else {
            k++;
        }
    }

    // To get the largest K such that 3^K < N, decrement k by 1
    if (k > 0) {
        k--;
    }

    std::cout << k;

    return 0;
}
