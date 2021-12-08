#include <stdio.h>

struct Kalimat {
    char kata[200][200];
} input[200];

int main() {
    int n, m, a, b;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        char temp;
        for (int j = 0; j < 200; j++) {
            scanf("%s", input[i].kata[j]);
            temp = getchar();
            if (temp == '\n') break;
        }
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        printf("%s ", input[a - 1].kata[b - 1]);
    }

    return 0;
}