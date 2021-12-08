#include <stdio.h>

int main() {
    int T, N, X[111];
    char Y[111][22];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &X[i]);
        scanf("%s", Y[i]);
    }

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int done = 0;
        for (int j = 0; j < T; j++) {
            if (i % X[j] == 0) {
                printf("%s", Y[j]);
                done = 1;
            }
        }
        if (done == 0) printf("%d\n", i);
        else printf("\n");
    }

    return 0;
}