#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convertToAlphabetic(int number) {
    if (number == 0) {
        return "zero";
    }

    string result;

    vector<string> hundreds = {
        "", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"
    };

    vector<string> tens = {
        "", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };
    
    vector<string> units = {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    vector<string> betweenTens = {
        "", "eleven", "twelve", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    int hundredPlace = number / 100;
    int tensPlace = (number % 100) / 10;
    int unitPlace = number % 10;
    
    if (hundredPlace > 0) {
        result += hundreds[hundredPlace] + " ";
    }

    if (tensPlace == 1) {
        result += betweenTens[unitPlace];
    } else {
        result += tens[tensPlace] + " " + units[unitPlace];
    }

    return result;
};

int main() {
    int value;

    cin >> value;

    cout << convertToAlphabetic(value);


    return 0;
}