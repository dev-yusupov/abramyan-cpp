#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;

	if (x > 0 && y<0) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}

	return 0;
}