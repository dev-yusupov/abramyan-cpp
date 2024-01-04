#include <iostream>

int main() {
	int seconds;
	std::cin >> seconds;

	int passedSeconds = seconds % 60;
	std::cout << passedSeconds << std::endl;

	return 0;
}