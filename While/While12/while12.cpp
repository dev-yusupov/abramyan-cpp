#include <iostream>

int main() {
    int n, k;

    std::cin >> n;

    int sum = 0;
    k = 1;

    while (sum + k <= n) {
        sum += k;
        k++;
    }

    std::cout << k - 1;

    return 0;
}