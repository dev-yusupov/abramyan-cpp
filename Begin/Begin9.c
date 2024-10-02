#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    double average = sqrt(a * b);

    printf("%.2f\n", average);
}