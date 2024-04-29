#include <iostream>

int findQuotient(int a, int b) {
    int quotient = a;
    while (quotient >= b) {
        quotient -= b;
    }

    return quotient;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    int quotient = findQuotient(a, b);

    std::cout << quotient;

    return 0;
}