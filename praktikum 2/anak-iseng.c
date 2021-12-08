#include <stdio.h>
#include <string.h>

int main() {
    char az[26];
    for (int i = 0; i < 26; i++) { scanf("%c", &az[i]); }

    int key[26];
    for (int i = 0; i < 26; i++) { key[i] = i + 97;}

    long int n;
    scanf("%ld", &n);
    
    char nope;
    scanf("%c", &nope);

    for (long int i = 0; i < n; i++) {
        char x[30];
        for (int j = 0; j < 30; j++) {
            scanf("%c", &x[j]);

            if (x[j] == '\n') {
                x[j] == '\0';
                break;
            }
        }

        for (int k = 0; k < strlen(x); k++) {
            if (x[k] == ' ') {
                printf(" ");
                continue;
            }
            for (int l = 0; l < 26; l++) {
                if (x[k] == key[l]) { printf("%c", az[l]); }
            }
        }

        printf("\n");
    }

    return 0;
}