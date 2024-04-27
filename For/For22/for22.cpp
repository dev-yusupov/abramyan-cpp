#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
    int factorialResult = 1;

    for (int number=1; number <= n; number++) {
        factorialResult *= number;
    }

    return factorialResult;
}

int main() {
    int x, n;
    cin >> x >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        double result = pow(x, i) / factorial(i);

        sum += result;
    }

    cout << sum;

    return 0;
}