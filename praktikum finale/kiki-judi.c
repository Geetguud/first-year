#include <stdio.h>

int main() {
    int N = 69, nnn[1111], temp, count;

    while (N != 0) {
        count = 0;
        scanf("%d", &N);
        if (N == 0) break;
        
        for (int i = 0; i < N; i++) scanf("%d", &nnn[i]);

        int doin = 1;
        while (doin) {
            doin = 0;
            for (int i = 0; i < (N - 1); i++) {
                if (nnn[i] > nnn[i + 1]) {
                    temp = nnn[i + 1];
                    nnn[i + 1] = nnn[i];
                    nnn[i] = temp;
                    count++;
                    doin = 1;
                }
            }
        }

        printf("minimal pertukaran : %d\n", count);
    }

    return 0;
}