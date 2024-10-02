#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    double sum = pow(a, 2) + pow(b, 2);
    double dif = pow(a, 2) - pow(b, 2);
    double mult = pow(a, 2) * pow(b, 2);
    double div = pow(a, 2) / pow(b, 2);

    printf("%.2f %.2f %.2f %.2f", sum, dif, mult, div);
}