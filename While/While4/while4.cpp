#include <iostream>

bool isPowerOfThree(int N) {
    if (N <= 0) {
        return false;
    }
    
    while (N % 3 == 0) {
        N /= 3;
    }
    
    return N == 1;
}

int main() {
    int N;
    std::cout << "Enter an integer: ";
    std::cin >> N;

    bool result = isPowerOfThree(N);

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
