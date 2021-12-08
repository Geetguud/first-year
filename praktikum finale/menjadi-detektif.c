#include <stdio.h>
#include <string.h>

void cipher(char string[], int move, int pos) {
    char temp[99];
    int new = string[pos] + move;
    if (new > 'z') new -= 26;
    char newchar = (char) new;
    strcpy(temp, &string[pos + 1]);
    strcpy(&string[pos], &newchar);
    strcpy(&string[pos + 1], temp);
}

int main() {
    long N;
    char s1[33], s2[33];
    scanf("%ld", &N);
    getchar();

    for (long lesgoo = 0; lesgoo < N; lesgoo++) {
        int yep = 0;
        scanf("%s %s", s1, s2);
        for (int i = 1; i < 26; i++) {
            char temp[99];
            strcpy(temp, s1);
            for (int j = 0; j < strlen(s1); j++) {
                cipher(temp, i, j);
                if (strstr(temp, s2)) {
                    yep = 1;
                    break;
                }
            }
            if (strstr(temp, s2)) {
                yep = 1;
                break;
            }
        }
        if (yep) printf("YSTTS\n");
        else printf("YNTKTS\n");
    }

    return 0;
}