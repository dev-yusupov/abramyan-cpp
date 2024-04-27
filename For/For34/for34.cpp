#include <iostream>

using namespace std;

int main() {
    int N;
    double A1 = 1, A2 = 2;

    // Input N
    cin >> N;

    // Output terms A1, A2, …, AN of the sequence
    cout << "Terms of the sequence:" << endl;
    cout << A1 << " " << A2 << " ";
    for (int K = 3; K <= N; K++) {
        double AK = (A1 + 2 * A2) / 3;
        cout << AK << " ";
        A1 = A2;
        A2 = AK;
    }

    return 0;
}
