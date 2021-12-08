#include <stdio.h>

int main() {
    for (int index = 0; index < 70; index++) {
        int P, Pi[77], pic[77][77], max;
        scanf("%d", &P);
        if (P == -1) break;

        scanf("%d", &Pi[0]);
        max = Pi[0];
        for (int i = 1; i <= P; i++) {
            scanf("%d", &Pi[i]);
            if (Pi[i] != 0) pic[(Pi[i])][i] = 1;
            if (Pi[i] > max) max = Pi[i];
        }
        
        for (int i = max; i > 0; i--) {
            for (int j = 0; j < (P - 1); j++) {
                if (Pi[j] == i) {
                    if (Pi[j] == Pi[j + 1]) printf("_");
                    else if (Pi[j] < Pi[j + 1]) printf("/");
                } else if (Pi[j] == (i + 1) && Pi[j + 1] == i) printf("\\");
                else printf(" ");
            }
            printf("\n");
        }

        // for (int i = max; i > 0; i--) {
        //     for (int j = 0; j < (P - 1); j++) {
        //         if (pic[i][j] == 1) {
        //             if (Pi[j] > Pi[j + 1]) printf("/");
        //             else if (Pi[j] < Pi[j - 1]) printf("\\");
        //             else printf("_");
        //         } else if (Pi[j] == 0) continue;
        //         else printf(" ");
        //     }
        //     printf("\n");
        // }

        printf("\n***\n");
    }

    return 0;
}