#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int product = 1;

    for (int i = a; i <= b; i++) {
        product *= i;
    }

    std::cout << product << std::endl;

    return 0;
}