#include <iostream>

int findExponent(int N) {
    int exponent = 0;

    while (N > 1) {
        if (N % 2 != 0) {
            return -1;
        }

        N /= 2;
        exponent++;
    }

    return exponent;
}

int main() {
    int N;

    std::cin >> N;

    int result = findExponent(N);

    std::cout << result;

    return 0;
}