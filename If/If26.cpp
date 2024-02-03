#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    if (x <= 0) {
        cout << -1 * x;
    } else if (0 < x && x < 2) {
        cout << x * x;
    } else {
        cout << 4;
    }

    return 0;
}