#include <stdio.h>

int main() {
    int A, B;

    // Use correct format specifiers for scanf
    scanf("%d %d", &A, &B);

    if (A != B) {
        A = A + B;
        B = A;  // Alternatively, B = B + A;
    } else {
        A = 0;
        B = 0;
    }

    // Use correct format specifiers for printf
    printf("%d %d\n", A, B);

    return 0;
}
