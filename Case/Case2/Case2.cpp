#include <iostream>
#include <map>

#include "case2.h"

Marks::Marks() {
    markStatus = {
        {1, "bad"},
        {2, "unsatisfactory"},
        {3, "mediocre"},
        {4, "good"},
        {5, "excellent"},
    };
}

std::string Marks::getMarkStatus(int number) {
    auto it = markStatus.find(number);
    if (it != markStatus.end()) {
        return it->second;
    }
    else {
        return "Invalid input";
    }
}

int main() {
    Marks markObject;

    int mark;

    std::cin >> mark;

    std::cout << markObject.getMarkStatus(mark);

    return 0;
}
