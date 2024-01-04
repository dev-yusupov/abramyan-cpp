#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    int area = a * b;
    int perimeter = 4 * (a + b);

    cout << "Area: ";
    cout << area << endl;

    cout << "Perimeter: ";
    cout << perimeter << endl;
}
