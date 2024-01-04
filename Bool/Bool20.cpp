#include <iostream>

int main() {
	int A;

	std::cin >> A;

	std::cout << std::boolalpha << (((A / 100) != (A % 100 / 10)) && ((A / 100) != (A % 10)) && ((A % 100 / 10) != (A % 10)));

	return 0;
}
