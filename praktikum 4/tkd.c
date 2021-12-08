#include <stdio.h>

int main() {
    long N, T;
    unsigned long long x[111111];
    scanf("%ld %ld", &N, &T);

    int temp;
    scanf("%d", &temp);
    if (temp % 9 == 0) *x = temp;
    else *x = 0;

    for (long i = 1; i < N; i++) {
        scanf("%d", &temp);
        if (temp % 9 == 0) *(x + i) = *(x + i - 1) + temp;
        else *(x + i) = *(x + i - 1);
    }

    for (long index = 0; index < T; index++) {
        long i, j;
        scanf("%ld %ld", &i, &j);
        
        printf("#TestCase %ld : ", (index + 1));
        
        if (i == 1) printf("%lld\n", *(x + j - 1));
        else printf("%lld\n", (*(x  +j - 1) - *(x + i - 2)));
    }

    return 0;
}