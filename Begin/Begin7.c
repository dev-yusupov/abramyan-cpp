#include <stdio.h>
#include <math.h>

#define PI 3.14

int main () {
    double radius;

    scanf("%lf", &radius);

    double length = PI * 2 * radius;
    double area = PI * pow(radius, 2);

    printf("Length: %.2f\nArea: %.2f", length, area);
}