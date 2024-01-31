#include <iostream>

int main() {
    int A, B;

    std::cin >> A >> B;

    if (A != B) {
        A = A + B;
        B = A;
    } else {
        A = 0;
        B = 0;
    }

    std::cout << A << " " << B;


    return 0;
}