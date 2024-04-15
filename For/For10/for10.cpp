#include <iostream>

int main() {
    int n;

    std::cin >> n;

    double s = 0;

    for (double i = 1; i <= n; i++) {
        s += (1/i);  
    }

    std::cout << s << std::endl;

    return 0;
}