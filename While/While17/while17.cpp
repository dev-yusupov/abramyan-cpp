#include <iostream>

int main() {
    int n;

    std::cin >> n;
    int initial = 10;

    while (initial <= n) {
        int quotient = n % initial;

        std::cout << quotient;
        initial *= 10;

    }

    return 0;
}