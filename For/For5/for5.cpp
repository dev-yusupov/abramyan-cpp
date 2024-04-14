#include <iostream>

int main() {
    double initialWeight = 0.1;
    for (int i=0; i < 10; i++) {
        std::cout << initialWeight << std::endl;
        initialWeight += 0.1;
    }

    return 0;
}