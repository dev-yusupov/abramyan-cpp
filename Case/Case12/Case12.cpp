#include <iostream>
#include <cmath>

int main() {
    int order, orderValue;

    std::cin >> order >> orderValue;

    const double pi = 3.14;

    double r, l, d, area;

    switch (order) {
        case 1:
            d = 2 * orderValue;
            l = 2 * pi * orderValue;
            area = pi * orderValue * orderValue;
            std::cout << d << " " << l << " " << area;
        
        case 2:
            r = orderValue / 2;
            l = 2 * pi * r;
            area = pi * r * r;
            std::cout << r << " " << l << " " << area;
        
        case 3:
            r = orderValue / 2 / pi;
            d = r * 2;
            area = pi * r * r;
            std::cout << r << " " << d << " " << area;
        
        case 4:
            r = std::sqrt(orderValue / pi);
            l = 2 * pi * r;
            d = 2 * r;
            std::cout << r << " " << l << " " << d;
        
    }

    return 0;
}