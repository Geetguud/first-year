#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int nol = (n / 5) + (n / 25) + (n / 125) + (n / 625) + (n / 3125) + (n / 15625) + (n / 78125) + (n / 390625) + (n / 1953125) + (n / 9765625);

    printf("%d\n", nol);

    if (nol % 4 == 0) {
        printf("Tuker dulu Rink!", nol);
    } else {
        printf("Gas pol rem blong, Rink!", nol);
    }

    return 0;
}