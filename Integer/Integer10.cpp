#include <iostream>

int main() {
    int number;

    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    const int HundredsPlace = number / 100;
    const int TensPlace = (number % 100) / 10;
    const int OnesPlace = number % 10;

    std::cout << "Ones place: " << OnesPlace << std::endl;
    std::cout << "Tens place: " << TensPlace << std::endl;

    return 0;
}
