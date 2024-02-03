#include <iostream>

using namespace std;

int main() {
    int year;

    cin >> year;

    if (year % 4 == 0) {
        cout << 366;
    } else {
        cout << 365;
    }

    return 0;
}