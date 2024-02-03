#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    if (x < 0) {
        cout << 0;
    } else if (x % 2 == 1) {
        cout << -1;
    } else if (x % 2 == 0) {
        cout << 1;
    }

    return 0;
}