#include <iostream>
#include <cmath>
#include "if.h"

using namespace std;

int nearest(int num1, int num2, int num3) {
    int d1 = abs(num1 - num2);
    int d2 = abs(num1 - num3);

    if (d1 > d2) {
        return num3;
    } else {
        return num2;
    }
}

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    cout << nearest(A, B, C);

    return 0;
}