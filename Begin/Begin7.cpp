#include <iostream>
#include <cmath>
using namespace std;


class Circle {
private:
	int radius;
	const float pi = 3.14;

public:
	Circle(int r) : radius(r) {}

	float circumference() {
		return 2 * pi * radius;
	}

	float area() {
		return pi * pow(radius, 2);
	}
};

int main()
{
	int radius;
	cin >> radius;

	Circle myCircle(radius);

	cout << "Circumference: " << myCircle.circumference() << endl;
	cout << "Area: " << myCircle.area() << endl;

	return 0;
}