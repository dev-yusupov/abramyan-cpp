#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int A;
	cout << "A: ";
	cin >> A;
	A = fabs(A);
	cout << (((A / 100) < (A % 100 / 10)) & ((A % 100 / 10) < (A % 10))) << endl;
	return 0;
}