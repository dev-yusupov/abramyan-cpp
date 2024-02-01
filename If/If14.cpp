#include <iostream>
#include "if.h"

int min3(int num1, int num2, int num3) {
    // Use a ternary operator to find the maximum number
    int max_digit = (num1 < num2) ? num1 : num2;
    int maximum = (max_digit < num3) ? max_digit : num3;

    return maximum; // Return the maximum number
}

int max3(int num1, int num2, int num3) {
    // Use a ternary operator to find the maximum number
    int max_digit = (num1 > num2) ? num1 : num2;
    int maximum = (max_digit > num3) ? max_digit : num3;

    return maximum; // Return the maximum number
}

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    cout << min3(A, B, C) << endl;
    cout << max3(A, B, C) << endl;

    return 0;
}