#include <iostream>

char directions[] = {'N', 'W', 'S', 'E'};

int main() {
    char c;
    int n1, n2;

    std::cin >> c;
    std::cin >> n1 >> n2;

    int dirIndex = 0;

    for (int i=0; i < 4; i++){
        if (directions[i] == c) {
            dirIndex = i;
            break;
        }
    }

    switch (n1) {
        case -1:
            dirIndex = (dirIndex + 1) % 4;
        
        case 1:
            dirIndex = (dirIndex - 1) % 4;
        
        case 2:
            dirIndex = (dirIndex + 2) % 4;
            
    }

    switch (n2) {
        case -1:
            dirIndex = (dirIndex + 1) % 4;
        
        case 1:
            dirIndex = (dirIndex - 1) % 4;
        
        case 2:
            dirIndex = (dirIndex + 2) % 4;
            
    }

    std::cout << directions[dirIndex];

    return 0;
}