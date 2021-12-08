#include <stdio.h>
#include <string.h>

int main() {
    char gehst[999999];
    scanf("%[^\n]", gehst);
    printf("%d", strlen(gehst));

    return 0;
}