#include <stdio.h>

int main() {
    int i, n, k1[11111], k2, done = 0;
    char nope[999999];
    scanf("%d", &i);

    for (int j = 0; j < i; j++) {
        scanf("%d", &n);
        for (int k = 0; k < (n - 1); k++) scanf("%d", &k1[k]);
        for (int k = 0; k < (n - 1); k++) {
            scanf("%d", &k2);
            if (k2 != k1[k]) {
                scanf("%[^\n]", nope);
                getchar();
                printf("%d\n", k2);
                done = 1;
                break;
            }
        }
        if (done == 0) {
            scanf("%d", &k2);
            getchar();
            printf("%d\n", k2);
        }
        else done = 0;
    }

    return 0;
}