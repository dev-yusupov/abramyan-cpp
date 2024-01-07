#include <iostream>
#include <cmath>


int main() {
	int A, B, C;

	std::cin >> A >> B >> C;

	float result = std::pow(B, 2) - 2 * A * C;

	std::cout << std::boolalpha << (result < 0);

	return 0;
}