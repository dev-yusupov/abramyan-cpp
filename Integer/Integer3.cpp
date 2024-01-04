#include <iostream>

int main() {
	int fileSize;

	std::cin >> fileSize;

	int kBytes = fileSize / 1024;
	std::cout << kBytes << std::endl;

	return 0;
}