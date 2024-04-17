#include <iostream>

int calculatePower(int a, int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= a;
    }

    return result;
}

int main() {
    int a, n;
    std::cin >> a >> n;

    int result = calculatePower(a, n);

    std::cout << result;

    return 0;
}