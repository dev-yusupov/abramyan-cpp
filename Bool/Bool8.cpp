#include <iostream>

int main() {
	int A, B;
	std::cin >> A >> B;

	std::cout << std::boolalpha << (A % 2 == 1 && B % 2 == 1);

	return 0;
}
