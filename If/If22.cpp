#include <iostream>

using namespace std;

string coordinates(int x, int y) {
    if (x > 0 && y > 0) {
        return "1st quarter";
    } else if (x < 0 && y > 0) {
        return "2nd quarter";
    } else if (x < 0 && y < 0) {
        return "3rd quarter";
    } else {
        return "4th quarter";
    }
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << coordinates(x, y);

    return 0;
}