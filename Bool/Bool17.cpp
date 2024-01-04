#include <iostream>

int main() {
	int number;

	std::cin >> number;

	std::cout << std::boolalpha << (number > 99 && number < 1000 && number % 2 == 1);

	return 0;
}
