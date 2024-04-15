#include <iostream>

int main() {
    double price;

    std::cin >> price;

    double kilos = 1.0;

    for (int i = 1; i <= 5; i++) {
        kilos += 0.2;

        double newPrice = kilos * price;
        std::cout << newPrice << std::endl;
    }

    return 0;
}