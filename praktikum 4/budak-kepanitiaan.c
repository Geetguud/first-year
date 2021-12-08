#include <stdio.h>
#include <string.h>


void printdis() { printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n"); }

void printscore(long score) {
    printf(" | ");
    if (score < 10000) printf(" ");
    if (score < 1000) printf(" ");
    if (score < 100) printf(" ");
    if (score < 10) printf(" ");
    printf("%ld", score);
}

struct Tim {
    char nama[33];
    long a, b, c, total;
} teem[11], teeem;


int main() {
    int N;
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        scanf("%s %ld %ld %ld", teem[i].nama, &teem[i].a, &teem[i].b, &teem[i].c);
        getchar();
        teem[i].total = teem[i].a + teem[i].b + teem[i].c;
    }

    for (int i = 0; i < N; i++) {
        for (int j = (i + 1); j < N; j++) {
            if (teem[i].total < teem[j].total) {
                teeem = teem[i];
                teem[i] = teem[j];
                teem[j] = teeem;
            }
        }
    }

    printdis();
    printf("| NO  | Nama Tim                        |   A   |   B   |   C   | Total |\n");
    printdis();

    for (int i = 0; i < N; i++) {
        if ((i + 1) == 10) printf("|  10 | ");
        else printf("|   %d | ", (i + 1));
        
        printf("%s", teem[i].nama);
        for (int j = 0; j < (31 - strlen(teem[i].nama)); j++) printf(" ");
        
        printscore(teem[i].a);
        printscore(teem[i].b);
        printscore(teem[i].c);
        printscore(teem[i].total);
        printf(" |\n");
        printdis();
    }

    return 0;
}