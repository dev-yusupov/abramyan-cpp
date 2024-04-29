#include <iostream>
#include <cmath>

double computeSum(int N) {
    double sum = 0.0;

    for (int i = 1; i <= N; ++i) {
        sum += pow(static_cast<double>(i), static_cast<double>(N - i + 1));
    }

    return sum;
}

int main() {
    double n;
    std::cin >> n;

    double result = computeSum(n);

    std::cout << result;

    return 0;
}