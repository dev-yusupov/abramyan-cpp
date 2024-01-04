#include <iostream>

int main() {
	int number;

	std::cin >> number;

	int digit1 = int(number / 10);
	int digit2 = number - digit1 * 10;

	std::cout << digit1 + digit2 << std::endl;
	std::cout << digit1 * digit2 << std::endl;

	return 0;
}