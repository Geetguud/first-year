#include <stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (b == 0) return a;
    return gcd(b, (a % b));
}

unsigned long long lcm(unsigned long long array[], int length) {
    unsigned long long result = array[0];
    for (int i = 1; i < length; i++) {
        result = (array[i] * result) / gcd(array[i], result);
    }

    return result;
}

int main() {
    int t, n;
    unsigned long long ni[99];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%lld", &ni[j]);
        }
        printf("%lld\n", lcm(ni, n));
    }

    return 0;
}