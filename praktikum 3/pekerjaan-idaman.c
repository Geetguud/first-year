#include <stdio.h>

void input(int arrayout[], char arrayin[], int x, int y) {
    char nope;
    scanf("%c", &nope);
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%c", &arrayin[(i * x) + j]);
            arrayout[(i * x) + j] = 0;
        }
        scanf("%c", &nope);
    }
}

void output(int arrayout[], char arrayin[], int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (arrayin[(i * x) + j] == '*') {
                arrayout[(i * x) + j] = -9;
                if (j > 0) arrayout[(i * x) + j - 1]++;
                if (j < (x - 1)) arrayout[(i * x) + j + 1]++;
                if (i > 0) {
                    arrayout[((i - 1) * x) + j]++;
                    if (j > 0) arrayout[((i - 1) * x) + j - 1]++;
                    if (j < (x - 1)) arrayout[((i - 1) * x) + j + 1]++;
                }
                if (i < (y - 1)) {
                    arrayout[((i + 1) * x) + j]++;
                    if (j > 0) arrayout[((i + 1) * x) + j - 1]++;
                    if (j < (x - 1)) arrayout[((i + 1) * x) + j + 1]++;
                }
            }
        }
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    char mn[10069];
    int result[10069];

    input(result, mn, n, m);
    output(result, mn, n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (result[(i * n) + j] < 0) printf("*");
            else printf("%d", result[(i * n) + j]);
        }
        printf("\n");
    }

    return 0;
}