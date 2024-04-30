#include <iostream>

int main() {
    int p;
    std::cin >> p;

    int sum = 1000;
    int years = 0;

    while (sum <= 1100) {
        double interest = sum * p / 100.0;
        sum += interest;
        years++;
    }

    std::cout << "Years: " << years << std::endl;
    std::cout << "Compound amount: " << sum << " euros" << std::endl;

    return 0;
}
