#include <iostream>
using namespace std;

class Average {
private:
    int number1;
    int number2;

public:
    Average(int a, int b) : number1(a), number2(b) {}

    float arithmeticAverage() {
        return (number1 + number2) / 2.0; // Make sure to use 2.0 for floating-point division
    }
};

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    Average average(a, b);

    cout << average.arithmeticAverage() << endl;

    return 0;
}