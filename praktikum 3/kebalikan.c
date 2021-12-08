#include <stdio.h>

int fib(unsigned int position, unsigned long long a, unsigned long long b, unsigned long long x) {
    unsigned long long a0 = a, a1 = a, b0 = b, b1 = b;
    for (int i = 0; i < 10; i++) {
        if (a1 + b1 == x) return (position + i);
        if (a1 + b1 > x) return -1;
        a1 = b0;
        b1 = a0 + b0;
        a0 = a1;
        b0 = b1;
    }
    return fib((position + 10), a1, b1, x);
}

int main() {
    int A, B;
    unsigned long long X;

    while (scanf("%d %d %lld", &A, &B, &X) != EOF) {
        if (X == A) {
            printf("1\n");
        } else if (X == B) {
            printf("2\n");
        } else {
            printf("%d\n", fib(3, A, B, X));
        }
    }

    return 0;
}