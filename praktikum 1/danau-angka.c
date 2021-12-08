#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x1, x2, x3, x4, x5;
    scanf("%lld %lld %lld %lld %lld", &x1, &x2, &x3, &x4, &x5);

    int total = 0;

    if (x1 % 2 == 1) { total++; }
    if ((x1 / 2) % 2 == 1) { total++; }
    if (((x1 / 2) / 2) % 2 == 1) { total++; }

    if (x2 % 2 == 1) { total++; }
    if ((x2 / 2) % 2 == 1) { total++; }
    if (((x2 / 2) / 2) % 2 == 1) { total++; }
    
    if (x3 % 2 == 1) { total++; }
    if ((x3 / 2) % 2 == 1) { total++; }
    if (((x3 / 2) / 2) % 2 == 1) { total++; }

    if (x4 % 2 == 1) { total++; }
    if ((x4 / 2) % 2 == 1) { total++; }
    if (((x4 / 2) / 2) % 2 == 1) { total++; }

    if (x5 % 2 == 1) { total++; }
    if ((x5 / 2) % 2 == 1) { total++; }
    if (((x5 / 2) / 2) % 2 == 1) { total++; }

    if (total < 10) {
        printf("Nanti ga makan dong bang? :(");
    } else if (total > 10) {
        printf("Udah cukup bang :3");
    } else if (total == 10) {
        printf("Hampir aja bang :\\");
    }

    return 0;
}