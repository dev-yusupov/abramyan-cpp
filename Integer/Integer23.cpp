#include <iostream>

int main() {
    int seconds;
    std::cin >> seconds;

    std::cout << (seconds % 3600) / 60 << std::endl;

    return 0;
}
