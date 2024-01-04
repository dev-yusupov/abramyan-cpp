#include <iostream>

int main() {
	int A, B;

	std::cin >> A >> B;

	std::cout << A - int(A / B) * B;

	return 0;
}