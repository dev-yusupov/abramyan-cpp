#include <iostream>

using namespace std;

int main() {
    int N, M; // N -> unit of weight, M -> Mass

    cin >> N >> M;

    if (N < 1 || N > 5) {
        cout << "Invalid unit code N. Must be between 1 and 5." << endl;
        return 1;
    }

    double massInKilos;

    switch (N)
    {
        case 1:
            massInKilos = M;
            break;
        
        case 2:
            massInKilos = M / 1000000.0;
            break;
        
        case 3:
            massInKilos = M / 1000;
            break;

        case 4:
            massInKilos = M * 1000;
            break;
        
        case 5:
            massInKilos = M * 100;
            break;
    }

    cout << massInKilos;

    return 0;
}