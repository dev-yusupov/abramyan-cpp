#include <iostream>

int main() {
	int a, b, c;

	std::cin >> a >> b >> c;
	if (a == b && b == c) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}

	return 0;
}