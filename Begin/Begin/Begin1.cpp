#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter a: " << endl;
	cin >> a;

	if (std::cin.fail() || a < 0)
	{
		std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
		return 1;
	}

	int perimeter = a * 4;

	cout << perimeter;

	return 0;
}