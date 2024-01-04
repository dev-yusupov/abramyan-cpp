#include <iostream>
#include <cmath>
using namespace std;

class Average {
private:
    int number1;
    int number2;

public:
    Average(int a, int b) : number1(a), number2(b) {}

    float geometricAverage() {
        return pow(number1 * number2, 1.0 / 2.0);
    }
};

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    Average average(a, b);

    cout << average.geometricAverage() << endl;

    return 0;
}
