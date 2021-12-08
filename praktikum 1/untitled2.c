#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen ("untitled2.txt", "w");

    for (int x = 1; x < 6; x++) {
        for (int k = 1; k < 4; k++) {
            fprintf(fp, "if (x%d & (1 << (%d - 1))) { total++; }\n", x, k);
        }
    }

    fclose(fp);

    return 0;
}