#include <iostream>
#include "if.h"

using namespace std;

int max(int num1, int num2) {
    // Use a ternary operator to find the maximum number
    int maximum = (num1 > num2) ? num1 : num2;

    return maximum; // Return the maximum number
}

int main() {
    int A, B;

    cin >> A >> B;

    if (A != B) {
        A = max(A, B);
        B = max(A, B);
    } else {
        A = 0;
        B = 0;
    }

    cout << A << " " << B;

    return 0;
}