#include <iostream>

int main() {
	int number;

	std::cin >> number;

	int digit1 = int(number / 10);
	int digit2 = number - digit1 * 10;

	int newNumber = digit2 * 10 + digit1;

	std::cout << newNumber;

	return 0;
}