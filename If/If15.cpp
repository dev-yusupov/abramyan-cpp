#include <iostream>
#include "if.h"

int min3(int num1, int num2, int num3) {
    // Use a ternary operator to find the maximum number
    int max_digit = (num1 < num2) ? num1 : num2;
    int maximum = (max_digit < num3) ? max_digit : num3;

    return maximum; // Return the maximum number
}

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    int sum = A + B + C;

    sum = sum - min3(A, B, C);

    cout << sum;

    return 0;
}