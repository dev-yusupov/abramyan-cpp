#include <iostream>
#include <map>

#include "case3.h"

Months::Months() {
    monthMap = {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"},
    };
}

std::string Months::getMonthName(int number) {
    auto it = monthMap.find(number);

    if (it != monthMap.end()) {
        return it->second;  // corrected arrow operator
    } else {
        return "Invalid input";
    }
}

int main() {
    Months monthObject;
    int monthNum;

    std::cin >> monthNum;

    std::cout << monthObject.getMonthName(monthNum);

    return 0;
}
