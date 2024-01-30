#include <iostream>
using namespace std;

bool isSameColor(int x1, int y1, int x2, int y2) {
    int color1 = (x1 + y1) % 2;
    int color2 = (x2 + y2) % 2;

    return color1 == color2;
}

int main() {
    int x1, y1, x2, y2;

    // Input values for x and y
    cout << "Enter coordinates (x1, y1, x2, y2) separated by spaces: ";
    cin >> x1 >> y1 >> x2 >> y2;

    // Input validation: Ensure coordinates are within the valid range (1 to 8)
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        cerr << "Invalid input. Coordinates must be in the range 1 to 8." << endl;
        return 1;  // Exit with an error code
    }

    // Check if the coordinates are distinct
    if (x1 == x2 && y1 == y2) {
        cerr << "Invalid input. Coordinates must be distinct for two different squares." << endl;
        return 1;  // Exit with an error code
    }

    if (isSameColor(x1, y1, x2, y2)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
