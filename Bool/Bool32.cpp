#include <iostream>
#include <cmath>
using namespace std;

bool isRightTriangle(int a, int b, int c) {
	return (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (isRightTriangle(a, b, c)) {
		cout << "true";
	}
	else {
		cout << "false";
	}

	return 0;
}