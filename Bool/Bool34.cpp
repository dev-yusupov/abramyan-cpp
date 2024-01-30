#include <iostream>
#include <vector>
using namespace std;

bool isBlack(int x, int y) {
    return (x%2==0)&&(y%2==0);
}

int main(){
    int x, y;

    // Input values for x and y
    cin >> x >> y;

    if (isBlack(x, y)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}