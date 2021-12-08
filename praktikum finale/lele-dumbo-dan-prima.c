#include <stdio.h>

int main() {
    int m, n, prime[10000], mn[55];
    scanf("%d %d", &m, &n);
    
    prime[0] = 2;
    prime[1] = 3;

    for (int i = 2, j = 5; j < m; j += 2) {
        int ok = 1;
        for (int k = 0; k < i; k++) {
            if (j % prime[k] == 0) {
                ok = 0;
                break;
            }
        }
        if (ok == 1) {
            prime[i] = j;
            i++;
        }
    }

    return 0;
}