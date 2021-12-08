#include <stdio.h>

typedef struct {
    char kata[99][99];
    int jumlahkata;
} kal;


struct par{
    kal perkalimat[99];
    int jumlahkalimat;
} perparagraf[22];


int main() {
    int n, q, q1, q2, q3;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        char temp;
        perparagraf[i].jumlahkalimat = 0;
        perparagraf[i].perkalimat[0].jumlahkata = 0;
        for (int j = 0, k = 0; j < 99 && k < 99; k++) {
            scanf("%[a-zA-Z]", perparagraf[i].perkalimat[j].kata[k]);
            perparagraf[i].perkalimat[j].jumlahkata++;
            temp = getchar();
            if (temp == '.') {
                j++;
                k = -1;
                perparagraf[i].jumlahkalimat++;
                perparagraf[i].perkalimat[j].jumlahkata = 0;
            }
            if (temp == '\n') break;
        }
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        char temp;
        int temp2;
        scanf("%d %d", &temp2, &q1);
        q1--;
        
        temp = getchar();
        if (temp == '\n') {
            for (int j = 0; j < perparagraf[q1].jumlahkalimat; j++) {
                for (int k = 0; k < (perparagraf[q1].perkalimat[j].jumlahkata - 1); k++) printf("%s ", perparagraf[q1].perkalimat[j].kata[k]);
                printf("%s.", perparagraf[q1].perkalimat[j].kata[perparagraf[q1].perkalimat[j].jumlahkata - 1]);
            }
            printf("\n");
        } else {
            scanf("%d", &q2);
            q2--;
            temp = getchar();
            if (temp == '\n') {
                for (int j = 0; j < (perparagraf[q2].perkalimat[q1].jumlahkata - 1); j++) {
                    printf("%s ", perparagraf[q2].perkalimat[q1].kata[j]);
                }
                printf("%s\n", perparagraf[q2].perkalimat[q1].kata[perparagraf[q2].perkalimat[q1].jumlahkata - 1]);
            } else {
                scanf("%d", &q3);
                q3--;
                printf("%s\n", perparagraf[q3].perkalimat[q2].kata[q1]);
            }
        }
    }

    return 0;
}