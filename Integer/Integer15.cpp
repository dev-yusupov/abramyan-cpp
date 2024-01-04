#include <iostream>

int main() {
    int number;

    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    const int HundredsPlace = number / 100;
    const int TensPlace = (number % 100) / 10;
    const int OnesPlace = number % 10;

    std::cout << OnesPlace + TensPlace * 100 + HundredsPlace * 10 << std::endl;

    return 0;
}
