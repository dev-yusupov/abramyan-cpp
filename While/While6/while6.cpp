#include <iostream>

int main() {
    int N; // Initialize N integer
    std::cin >> N; // Input N

    int prod = 1;

    while (N > 0) {
        prod *= N;
        N -= 2;
    }

    std::cout << prod;

    return 0;
}