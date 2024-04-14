#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int n = 0;

    for (int i = b; a < i; i--) {
        n += 1;
        std::cout << i << std::endl;
    }

    std::cout << "Number of integers: " << n << std::endl;

    return 0;
}