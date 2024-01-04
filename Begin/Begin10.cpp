#include <iostream>
#include <cmath>
using namespace std;

class Operation {
private:
	int number1;
	int number2;
public:
	Operation(int a, int b) : number1(a), number2(b) {}
	int sum() {
		return number1 + number2;
	}

	int subtract() {
		return abs(number1 - number2);
	}
	int product() {
		return number1 * number2;
	}
	int quotient() {
		return pow(number1, 2), pow(number2, 2);
	}
};

int main() {
	int a, b;
	cin >> a >> b;

	Operation operation(a, b);

	cout << operation.sum() << endl << operation.subtract() << endl << operation.product() << endl << operation.quotient() << endl;

	return 0;
}