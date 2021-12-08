#include <stdio.h>
#include <string.h>

const char* check(int start, char array1[], char array2[]) {
    for (int i = start, j = (strlen(array2) - 1); i >= 0 && j >= 0; i--, j--) {
        if (array1[i] != array2[j]) return("mugunghwaga pieossda!");
    }

    return("dangsin-eun yeojeonhi sal su issseubnida...");
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);

    char nope;
    scanf("%c", &nope);

    char nama[10069];
    int z = 0;
    int y = 0;

    int position[1069];
    
    while (z < n) {
        scanf("%c", &nama[y]);
        if (nama[y] == '\n') {
            position[z] = y;
            z++;
        }
        y++;
    }

    int s, p;
    scanf("%d %d", &s, &p);
    scanf("%c", &nope);

    char m[99];
    scanf("%[^\n]", m);
    scanf("%c", &nope);
    scanf("%[^\n]", m);


    for (int i = 0; i < 13; i++) {
        if (i < 10) m[i] = m[i + 13];
        else m[i] = '\0';
    }

    int ayy = (((s % n - 1) + (p % n)) + r % n) % n - 1;

    // for (int i = 0; i < r; i++) {
    //     int carry = position[n - 1];
    //     for (int j = (n - 1); j >= 0; j--) {
    //         if (j == 0) position[0] = carry;
    //         else position[j] = position[j - 1];
    //     }
    // }

    // for (int i = 1; i < (s % n); i++) {
    //     int carry = position[0];
    //     for (int j = 0; j < n; j++) {
    //         if (j == (n - 1)) position[n - 1] = carry;
    //         else position[j] = position[j + 1];
    //     }
    // }

    printf("%s", check((position[ayy]), nama, m));

    return 0;
}