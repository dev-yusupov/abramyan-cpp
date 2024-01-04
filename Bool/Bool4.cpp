#include <iostream>

int main() {
	int A, B;
	std::cin >> A >> B;

	std::cout << std::boolalpha << (A > 2 && B <= 3);

	return 0;
}