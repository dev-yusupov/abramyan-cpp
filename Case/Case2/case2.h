#ifndef MARK_STATUS_H
#define MARK_STATUS_H

#include <map>
#include <iostream>

class Marks {
private:
    std::map<int, std::string> markStatus;

public:
    Marks();

    std::string getMarkStatus(int number);
};

#endif // MARK_STATUS_H
