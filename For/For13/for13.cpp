#include <iostream>

double calculateExpression(int N) {
    double sum = 0.0;
    int sign = 1;
    for (int i=1; i<=N; ++i) {
        sum += sign * (1.0 + 0.1 * i);
        sign *= -1;
    }

    return sign;
}

int main() {
    int N;
    std::cin >> N;

    double result = calculateExpression(N);

    std::cout << result;

    return 0;
}