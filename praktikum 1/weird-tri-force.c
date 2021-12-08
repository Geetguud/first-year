#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p, w, c;
    scanf("%d %d %d", &p, &w, &c);
    
    if ((p * p) + (w * w) == (c * c)) {
        printf("Tri-Force dapat terbentuk!");
    } else if ((p * p) + (c * c) == (w * w)) {
        printf("Tri-Force dapat terbentuk!");
    } else if ((w * w) + (c * c) == (p * p)) {
        printf("Tri-Force dapat terbentuk!");
    } else if (p + w > c && w + c > p && p + c > w) {
        printf("Tri-Force dapat terbentuk!");
    } else {
        printf("Tri-Force gagal terbentuk :(");
    }

    return 0;
}