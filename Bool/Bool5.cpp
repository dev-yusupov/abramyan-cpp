#include <iostream>

int main() {
	int A, B;
	std::cin >> A >> B;

	std::cout << std::boolalpha << (A >= 0 || B < -2);

	return 0;
}
