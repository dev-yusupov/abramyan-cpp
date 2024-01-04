#include <iostream>

int main() {
	int A, B, C;
	std::cin >> A >> B >> C;

	std::cout << std::boolalpha << (A > 0 || B > 0 || C > 0);

	return 0;
}
