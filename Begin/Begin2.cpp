#include <iostream>
#include <cmath>

int main()
{
	int sideLength;
	std::cin >> sideLength;

	float areaOfSquare = std::pow(sideLength, 2);

	std::cout << areaOfSquare;

	return 0;
}