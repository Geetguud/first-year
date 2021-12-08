#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int num;
        scanf("%d", &num);
        
        int dec = num / 2;
        int attempt = 0;

        while (num) {
            if (num == 1) {
                attempt++;
                break;
            } else if (num - (dec * dec) >= 0) {
                num -= dec * dec;
                attempt++;
            } else {
                dec--;
            }
        }

        printf("%d\n", attempt);
    }

    return 0;
}