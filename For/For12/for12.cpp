#include <iostream>

double calculateProduct(int N) {
    double product = 1.0;
    for (int i = 1; i <= N; ++i) {
        product *= (1.0 +0.1*i);
    }

    return product;
}

int main() {
    int N;
    std::cin >> N;

    double result = calculateProduct(N);
    std::cout << result;

    return 0;
}