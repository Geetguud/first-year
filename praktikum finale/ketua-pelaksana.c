#include <stdio.h>
#include <string.h>

struct Tim {
    char nama[99];
    int a, b, c;
    long total;
} teem[999], teeem;

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", teem[i].nama, &teem[i].a, &teem[i].b, &teem[i].c);
        getchar();
        teem[i].total = teem[i].a + teem[i].b + teem[i].c;
    }

    for (int i = 0; i < N; i++) {
        for (int j = (i + 1); j < N; j++) {
            if (teem[i].total < teem[j].total) {
                teeem = teem[i];
                teem[i] = teem[j];
                teem[j] = teeem;
            } else if (teem[i].total == teem[j].total) {
                if (teem[i].a < teem[j].a) {
                    teeem = teem[i];
                    teem[i] = teem[j];
                    teem[j] = teeem;
                } else if (teem[i].a == teem[j].a) {
                    if (teem[i].b < teem[j].b) {
                        teeem = teem[i];
                        teem[i] = teem[j];
                        teem[j] = teeem;
                    } else if (teem[i].b == teem[j].b) {
                        if (teem[i].c < teem[j].c) {
                            teeem = teem[i];
                            teem[i] = teem[j];
                            teem[j] = teeem;
                        } else if (teem[i].c == teem[j].c) {
                            int done = 0;
                            for (int k = 0; k < strlen(teem[i].nama) && k < strlen(teem[j].nama); k++) {
                                if (teem[i].nama[k] > teem[j].nama[k]) {
                                    teeem = teem[i];
                                    teem[i] = teem[j];
                                    teem[j] = teeem;
                                    done = 1;
                                    break;
                                }
                            }
                            if (!done) {
                                if (strlen(teem[i].nama) < strlen(teem[j].nama)) {
                                    teeem = teem[i];
                                    teem[i] = teem[j];
                                    teem[j] = teeem;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++) printf("%s %d %d %d %ld\n", teem[i].nama, teem[i].a, teem[i].b, teem[i].c, teem[i].total);

    return 0;
}