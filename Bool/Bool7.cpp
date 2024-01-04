#include <iostream>

int main() {
	int A, B, C;
	std::cin >> A >> B >> C;

	std::cout << std::boolalpha << (A < B && B < C);

	return 0;
}
