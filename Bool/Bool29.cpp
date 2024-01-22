#include <iostream>

int main() {
	int x, y, x1, y1, x2, y2;
	std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	if (x1 < x && x < x2 && y1 < y && y < y2) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}

	return 0;
}