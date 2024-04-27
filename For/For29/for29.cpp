#include <iostream>

using namespace std;

int main() {
    int N;
    double A, B;

    // Input N, A, and B
    cin >> N >> A >> B;

    // Compute the length of each sub-segment
    double H = (B - A) / N;

    // Output the length of each sub-segment
    cout << "Length of each sub-segment (H): " << H << endl;

    // Output the sequence of points
    cout << "Sequence of points:" << endl;
    for (int i = 0; i <= N; i++) {
        double point = A + i * H;
        cout << point << " ";
    }
    cout << endl;

    return 0;
}
