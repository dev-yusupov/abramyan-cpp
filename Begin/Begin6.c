#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int area = 2 * (a*b + b*c + a*c);
    int volume = a * b * c;

    printf("Area: %d\nVolume: %d", area, volume);

    return 0;
}