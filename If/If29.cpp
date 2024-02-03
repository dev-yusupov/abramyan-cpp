#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    string output = "";

    if (x > 0) {
        output += "Positive ";
    } else if (x == 0) {
        output += "zero";
    } 
    else {
        output += "negative ";
    }

    if (x % 2 == 0 && x != 0) {
        output += "even ";
    } else if (x % 2 == 1 && x != 0) {
        output += "odd ";
    }

    cout << output << " " << "number";

    return 0;
}