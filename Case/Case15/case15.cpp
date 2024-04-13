#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> suits = {"spades", "clubs", "diamonds", "hearts"};

    vector<string> specialValues = {"", "", "", "", "", "six", "seven", "eight", "nine", "ten", "Jack", "Queen", "King", "Ace"};

    int cardValue, suit; // Define variables
    cin >> cardValue >> suit; // Input vairable values

    string cardDescription = (cardValue >= 6 && cardValue <= 14) ? specialValues[cardValue] : "Invalid card value";
    string suitDescription = (suit >= 1 && suit <= 4) ? suits[suit - 1] : "Invalid suit";

    cout << cardDescription << " of " << suitDescription << endl;

    return 0;
}