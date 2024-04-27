#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;

    double sum = 1; // Initialize sum with the first term (1)

    for (int i = 1; i <= n; i++) {
        int numerator = 1;
        int denominator = 1;
        for (int j = 1; j <= 2 * i - 1; j += 2) {
            numerator *= j;
        }
        for (int j = 2; j <= 2 * i; j++) {
            denominator *= j;
        }
        double term = pow(-1, i) * numerator * pow(x, i) / denominator;
        sum += term;
    }

    cout << sum;

    return 0;
}
