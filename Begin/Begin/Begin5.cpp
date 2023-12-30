#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	float volume = pow(a, 3);
	float area = 6 * pow(a, 2);

	cout << volume << endl;
	cout << area << endl;

	return 0;
}