#include <stdio.h>

int main() {
    int n;
    int ti0[9999];
    int ti1[9999];
    int t0 = 0;
    int t1 = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp) {
            ti1[t1] = i + 1;
            t1++;
        } else {
            ti0[t0] = i + 1;
            t0++;
        }
    }

    for (int i = 0; i < t0; i++) {
        printf("%d ", ti0[i]);
    }

    printf("\n");

    for (int i = 0; i < t1; i++) {
        printf("%d ", ti1[i]);
    }

    return 0;
}