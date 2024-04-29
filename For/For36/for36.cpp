#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int sum = 0;
    for (int i=1; i<=n; i++) {
        int result = pow(i, k);

        sum += result;
    }

    cout << sum;

    return 0;
}