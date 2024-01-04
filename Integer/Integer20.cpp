#include <iostream>

int main() {
	int seconds;
	std::cin >> seconds;

	int minutes = seconds / 3600;
	std::cout << minutes << std::endl;

	return 0;
}