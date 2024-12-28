#include <iostream>
using namespace std;

int main()
{
    int heightLength, widthLength;

    cin >> heightLength;
    cin >> widthLength;

    int areaOfRectangle = heightLength * widthLength;
    int perimeterOfRectangle = 4 * (heightLength + widthLength);

    cout << "Area: ";
    cout << areaOfRectangle << endl;

    cout << "Perimeter: ";
    cout << perimeterOfRectangle << endl;

    return 0;
}
