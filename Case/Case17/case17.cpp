#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convertToAlphabetic(int orderNumber) {
    string result;

    vector<string> numbers = {
        "", "first", "second", "third", "forth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirdteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth"
    };

    vector<string> tens = {
        "", "", "twentieth", "thirties", "forties"
    };

    if (orderNumber >= 1 && orderNumber <= 20) {
        result = "the " + numbers[orderNumber] + " task";
    } else if (orderNumber >= 21 && orderNumber <= 40) { 
        int ten = orderNumber / 10;
        int unit = orderNumber % 10;

        result = "the " + tens[ten] + " " + numbers[unit] + " task";
    } else {
        result = "Order number is out of range";
    };

    return result;
}

int main() {
    int value;

    cin >> value;

    cout << convertToAlphabetic(value);

    return 0;
}