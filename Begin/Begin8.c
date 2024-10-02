#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    double average = (a + b) / 2.0;

    printf("%.2f\n", average);
}