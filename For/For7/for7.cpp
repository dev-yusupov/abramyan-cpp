#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int s = 0;

    for (int i = a; i <= b; i++) {
        s += i;
    }

    std::cout << s << std::endl;

    return 0;
}