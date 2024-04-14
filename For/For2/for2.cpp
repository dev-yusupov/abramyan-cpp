#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int n = 0;

    for (int i=a; i < b; i++) {
        n += 1;
        std::cout << i << std::endl;
    }

    std::cout << "Total N: " << n << std::endl;
}