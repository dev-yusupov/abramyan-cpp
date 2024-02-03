#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x;

    cin >> x;

    if (x > 0) {
        cout << 2 * sin(x);
    } else {
        cout << 6 - x;
    }

    return 0;
}