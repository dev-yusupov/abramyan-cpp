#include <iostream>
#include <string>
#include <map>

using namespace std;

struct ZodiacSign
{
    int startMonth;
    int startDay;
    int endMonth;
    int endDay;
};

map<string, ZodiacSign> zodiacSigns = {
    {"Aquarius", {1, 20, 2, 18}},
    {"Pisces", {2, 19, 3, 20}},
    {"Aries", {3, 21, 4, 19}},
    {"Taurus", {4, 20, 5, 20}},
    {"Gemini", {5, 21, 6, 21}},
    {"Cancer", {6, 22, 7, 22}},
    {"Leo", {7, 23, 8, 22}},
    {"Virgo", {8, 23, 9, 22}},
    {"Libra", {9, 23, 10, 22}},
    {"Scorpio", {10, 23, 11, 22}},
    {"Sagittarius", {11, 23, 12, 22}},
    {"Capricorn", {12, 22, 1, 19}}
};

string getZodiacSign(int month, int day) {
    for (const auto& [name, sign] : zodiacSigns) {
        if ((month == sign.startMonth && day >= sign.startDay) && (month == sign.endMonth && day >= sign.endDay)) {
            return name;
        }
    }

    return "Unknown";
}

int main() {
    int day, month;

    cin >> day >> month;
    
    cout << getZodiacSign(month, day);

    return 0;
}