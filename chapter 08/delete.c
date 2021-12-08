#include "head.h"

void delete(char *target) {
    char delet_str[MAX_LENGTH];
    char *point;
    char rest_str[MAX_LENGTH];
    int index;

    printf("String to delete > ");
    scanf("%[^\n]", delet_str);
    getchar();

    point = strstr(target, delet_str);

    if (!point) {
        printf("%s not found\n", delet_str);
        return;
    }

    index = strlen(target) - strlen(point);
    
    if (strlen(target) <= index + strlen(delet_str)) target[index] = '\0';
    else {
        strcpy(rest_str, &target[index + strlen(delet_str)]);
        strcpy(&target[index], rest_str);
    }
}