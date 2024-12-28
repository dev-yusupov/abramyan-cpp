#include <iostream>

int main()
{
	int sideLength;
	std::cout << "Enter a: " << std::endl;
	std::cin >> sideLength;

	if (std::cin.fail() || sideLength < 0)
	{
		std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
		return 1;
	}

	int perimeter = sideLength * 4;

	std::cout << perimeter;

	return 0;
}