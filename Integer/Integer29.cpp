#include <iostream>

int main() {
	int A, B, C;

	std::cin >> A >> B >> C;

	int a_c = int(A / C);
	int b_c = int(B / C);

	std::cout << a_c * b_c;

	return 0;
}