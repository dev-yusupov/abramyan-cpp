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
    if (a > 0) positiveNums++;
    if (b > 0) positiveNums++;
    if (c > 0) positiveNums++;

    cout << "Number of positive integers: " << positiveNums << endl;

    return 0;
}

