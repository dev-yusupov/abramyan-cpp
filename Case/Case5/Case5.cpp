#include <iostream>

using namespace std;

int main() {
    int N;
    double A, B;

    cin >> N;

    cin >> A >> B;

    double result;

    switch (N)
    {
    case 1:
        result = A + B;
        break;
    
    case 2:
        result = A - B;
        break;
    
    case 3:
        result = A * B;
        break;
    
    case 4:
        if (B != 0) {
            result = A / B;
        } else {
            cout << "Error";
            return 1;
        }
    
    default:
        cout << "Invalid number for N!!!";
        break;
    }

    cout << result;

    return 0;
}