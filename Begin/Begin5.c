#include <stdio.h>
#include <math.h>

#define PI 3.14

int main () {
    double a;

    scanf("%lf", &a);

    double volume = pow(a, 3);
    double area = 6 * pow(a, 2);

    printf("Volume: %.2f\nArea: %.2f", volume, area);

    return 0;
}