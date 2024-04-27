#include <iostream>
#include <cmath>

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

    // Output the values of the function F(X) = 1 - sin(X) at points dividing the segment [A, B]
    cout << "Values of the function F(X) at points dividing the segment [A, B]:" << endl;
    for (int i = 0; i <= N; i++) {
        double X = A + i * H;
        double F_X = 1 - sin(X);
        cout << "F(" << X << ") = " << F_X << endl;
    }

    return 0;
}
