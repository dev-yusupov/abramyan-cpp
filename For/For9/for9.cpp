#include <iostream>
#include <cmath>

int main() {
    int a, b;

    std::cin >> a >> b;

    int s = 0;

    for (int i = a; i <= b; i++) {
        s += std::pow(i, 2);
    }

    std::cout << s << std::endl;

    return 0;
}