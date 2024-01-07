#include <iostream>

int main() {
	int a;

	std::cin >> a;

	int digit1 = a / 1000;
	int digit2 = (a / 100) % 10;
	int digit3 = (a / 10) % 10;
	int digit4 = a % 10;

	int b = digit4 * 1000 + digit2 * 100 + digit3 * 10 + digit1;

	std::cout << std::boolalpha << (b == a);

	return 0;
}