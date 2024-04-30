#include <iostream>

int main() {
    int n, k;

    std::cin >> n;

    double sum = 1.0;
    k = 1;

    while (sum < n) {
        sum += (1.0 / k);
        k++;
    }

    std::cout << k - 1;

    return 0;
}