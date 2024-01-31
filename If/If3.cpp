#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a>0) {
        a++;
        cout << a;
    } else if (a==0) {
        a = 10;

        cout << a;
    }
     else {
        a=a-2;
        cout << a;
    }
    

    return 0;
}