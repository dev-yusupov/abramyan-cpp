#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        for (int j=1; j <= i; j++) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}