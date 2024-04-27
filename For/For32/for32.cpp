#include <iostream>

using namespace std;

int main() {
    int N;
    double A = 1;

    // Input N
    cin >> N;

    // Output terms A1, A2, …, AN of the sequence
    cout << "Terms of the sequence:" << endl;
    cout << A << " ";
    for (int K = 1; K < N; K++) {
        A = (A + 1) / (K + 1);
        cout << A << " ";
    }

    return 0;
}
