#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;

    double sum = 0;

    for (int i = 0; i <= n; i++) {
        int numerator = 1;
        int denominator = 1;
        for (int j = 1; j <= 2 * i; j += 2) {
            numerator *= j;
        }
        for (int j = 2; j <= 2 * i + 1; j++) {
            denominator *= j;
        }
        double term = pow(x, 2 * i + 1) * numerator / denominator;
        if (i % 2 == 1) {
            term = -term;
        }
        sum += term;
    }

    cout << sum;

    return 0;
}
