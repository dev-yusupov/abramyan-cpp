#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    if ((A <= B && B <= C) || (C <= B && B <= A)) {
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else if ((A >= B && B >= C) || (C >= B && B >= A)) {
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else {
        A = A * (-1);
        B = B * (-1);
        C = C * (-1);
    }
    
    cout << A << " " << B << " " << C;

    return 0;
}