#include <iostream>
using namespace std;

bool triangleExist(int a, int b, int c) {
    return (a + b > c) || (a + c > b) || (b + c == a);
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (triangleExist(a, b, c)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}