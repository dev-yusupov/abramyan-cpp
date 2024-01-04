#include <iostream>

int main() {
	int number;

	std::cin >> number;

	std::cout << std::boolalpha << (number > 9 && number < 100 && number % 2 == 0);

	return 0;
}
