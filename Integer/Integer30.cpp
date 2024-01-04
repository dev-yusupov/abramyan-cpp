#include <iostream>

int main() {
	int year;

	std::cin >> year;

	std::cout << int(year / 100) + 1;

	return 0;
}