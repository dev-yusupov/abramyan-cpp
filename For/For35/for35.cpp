#include <iostream>

using namespace std;

int main() {
    int N;
    int A1 = 1, A2 = 2, A3 = 3;

    // Input N
    cin >> N;

    // Output terms A1, A2, …, AN of the sequence
    cout << "Terms of the sequence:" << endl;
    cout << A1 << " " << A2 << " " << A3 << " ";
    for (int K = 4; K <= N; K++) {
        int AK = A1 + A2 - 2 * A3;
        cout << AK << " ";
        A1 = A2;
        A2 = A3;
        A3 = AK;
    }

    return 0;
}
