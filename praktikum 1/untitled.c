#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen ("untitled.txt", "w");

    char percent = '%';

    fprintf(fp, "if(b==0){x=1%cc;}\nelse if(b==1){x=y;}\n", percent);

    for (int x = 2; x < 201; x++) {
        fprintf(fp, "else if(b==%d){x=", x);
        for (int y = 1; y < x; y++) {
            fprintf(fp, "y*");
        }
        fprintf(fp, "y;}\n");
    }

    fclose(fp);

    return 0;
}