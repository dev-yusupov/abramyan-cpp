#include <iostream>

using namespace std;

int main() {
    int N;
    int F1 = 1, F2 = 1;

    // Input N
    cin >> N;

    // Output terms F1, F2, …, FN of the sequence
    cout << "Terms of the Fibonacci sequence:" << endl;
    cout << F1 << " " << F2 << " ";
    for (int K = 3; K <= N; K++) {
        int F = F1 + F2;
        cout << F << " ";
        F1 = F2;
        F2 = F;
    }

    return 0;
}
