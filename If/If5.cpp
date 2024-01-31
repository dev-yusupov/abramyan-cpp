#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input validation
    cout << "Enter three integers separated by spaces: ";

    if (!(cin >> a >> b >> c)) {
        cerr << "Error: Invalid input. Please enter three integers." << endl;
        return 1; // Exit with an error code
    }

    int positiveNums = 0;
    int negativeNums = 0;

    int numbers[] = {a, b, c};

    for (int i =0; i < 3; ++i) {
        if (numbers[i] > 0) {
            positiveNums++;
        } else {
            negativeNums++;
        }
    }

    cout << "Number of positive integers: " << positiveNums << endl;
    cout << "Number of negative integers: " << negativeNums << endl;

    return 0;
}

