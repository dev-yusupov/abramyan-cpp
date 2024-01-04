#include <iostream>

int main() {
	int A, B, C;
	std::cin >> A >> B >> C;

	std::cout << std::boolalpha << (A < B && B < C && A < C);

	return 0;
}
