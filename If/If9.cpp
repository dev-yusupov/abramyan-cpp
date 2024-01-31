#include <iostream>

int main() {
    int A, B;

    std::cin >> A >> B;

    if (A > B) {
        std::cout << B << " " << A;
    } else {
        std::cout << A << " " << B;
    }

    return 0;
}