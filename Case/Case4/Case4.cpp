#include <iostream>
#include <map>

#include "case4.h"

// Declare the function outside of main
int getMonthDayNum(int number, const std::map<int, int>& monthDayNumMap) {
    auto it = monthDayNumMap.find(number);
    if (it != monthDayNumMap.end()) {
        return it->second;
    } else {
        // Return a special value for invalid input, or handle the error in another way
        return -1; // for example
    }
}

int main() {
    int numOfMonth;

    std::cin >> numOfMonth;

    std::map<int, int> monthDayNumMap{
        {1, 31},
        {2, 28},
        {3, 31},
        {4, 30},
        {5, 31},
        {6, 30},
        {7, 31},
        {8, 31},
        {9, 30},
        {10, 31},
        {11, 30},
        {12, 31},
    };

    // Call the function with the provided map
    int result = getMonthDayNum(numOfMonth, monthDayNumMap);

    // Output the result
    std::cout << result;

    return 0;
}
