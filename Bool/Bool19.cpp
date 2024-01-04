#include <iostream>

int main() {
	int A, B, C;

	std::cin >> A >> B >> C;

	std::cout << std::boolalpha << ((A == (-1) * B) || (B == (-1) * C) || (A == (-1) * C));

	return 0;
}
