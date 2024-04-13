#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty"}; // Define tens in vectors
    vector<string> units = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int age;
    cin >> age;

    if (age < 20 || age > 69) {
        cout << "Invalid age";
        return 1;
    }

    int tensDigit = age / 10;
    int unitsDigit = age % 10;

    string alphabeticEquivalent = tens[tensDigit] + ((unitsDigit > 0 && unitsDigit > 0) ? "-" : "") + units[unitsDigit] + " years";

    cout << alphabeticEquivalent;

    return 0;
}