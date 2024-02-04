#include <iostream>
#include <map>

using namespace std;

string getDayofWeek(int number) {
    map<int, string> dayMap {
        {1, "Monday"},
        {2, "Tuesday"},
        {3, "Wednesday"},
        {4, "Thursday"},
        {5, "Friday"},
        {6, "Saturday"},
        {7, "Sunday"},
    };

    auto it = dayMap.find(number);
    if (it != dayMap.end()) {
        return it->second;
    } else {
        return "Invalid input";
    }

}

using namespace std;

int main() {
    int dayNumber;

    cin >> dayNumber;

    string dayName = getDayofWeek(dayNumber);

    cout << dayName;

    return 0;
}