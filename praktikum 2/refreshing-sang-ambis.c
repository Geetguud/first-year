#include <stdio.h>

int main() {
    long long int x;
    scanf("%lld", &x);

    int y[999];
    int z = 0;

    while (x != 0) {
        y[z] = x % 2;
        x /= 2;
        z++;
    }

    while (z != 0) {
        z--;
        if (y[z]) {
            printf("menang");
        } else {
            printf("kalah");
        }
    }

    return 0;
}