#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <map>

class Months {
private:
    std::map<int, std::string> monthMap;

public:
    Months();

    std::string getMonthName(int number);
};

#endif // MONTH_H
