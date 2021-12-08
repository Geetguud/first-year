#include <stdio.h>

int main() {
    int n;
    unsigned long long ni;
    unsigned long long total = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &ni);
        while (ni) {
            if (ni % 2) { total++; }
            ni = ni >> 1;
        }
    }

    printf("%lld", total);

    return 0;
}