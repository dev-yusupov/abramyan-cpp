#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convertToYearName(int year) {
    vector<string> colors = {"green", "red", "yellow", "white", "black"};
    vector<string> animalNames = {"rat", "cow", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "hen", "dog", "pig"};

    int colorNumber = (year - 1984) % 5;
    int animalNumber = (year - 1984) % 12;

    string colorString = colors[colorNumber];
    string animalString = animalNames[animalNumber];
    

    return "The " + colorString + " " + animalString + "'s year";
}

int main() {
    int year;
    cin >> year;

    cout << convertToYearName(year);

    return 0;
}