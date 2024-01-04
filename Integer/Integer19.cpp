#include <iostream>

int main() {
	int seconds;
	std::cin >> seconds;

	int minutes = seconds / 60;
	std::cout << minutes << std::endl;

	return 0;
}