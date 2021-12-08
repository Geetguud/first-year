#include "head.h"

void find(char *target) {
    char find_str[MAX_LENGTH];
    char *point;
    int index;

    printf("String to find > ");
    scanf("%[^\n]", find_str);
    getchar();

    point = strstr(target, find_str);

    if (!point) {
        printf("%s not found\n", find_str);
        return;
    }

    index = strlen(target) - strlen(point);
    printf("%s found at position %d\n", find_str, index);
}