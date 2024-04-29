#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cin >> n;
    int sum = 0;
    for (int i=1; i <= n; i++) {
        int result = std::pow(i, i);

        sum ++ result;
    }

    std::cout << sum;

    return 0;
}