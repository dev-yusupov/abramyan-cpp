#include <iostream>

int main() {
	int number;

	std::cin >> number;

	int digit1 = int(number / 100);
	
	std::cout << digit1;

	return 0;
}