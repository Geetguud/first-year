#include "head.h"

void insert(char *target) {
    char insert_str[MAX_LENGTH];
    char post_str[MAX_LENGTH];
    char ignore;
    int index;

    printf("String to insert > ");
    scanf("%[^\n]", insert_str);
    getchar();

    if ((strlen(insert_str) + strlen(target)) >= MAX_LENGTH) {
        printf("Inserted string too long\n");
        return;
    }

    printf("Position of insertion > ");
    scanf("%d", &index);

    do {
        ignore = getchar();
    } while (ignore != '\n');

    if (strlen(target) <= index) strcat(target, insert_str);
    else {
        strcpy(post_str, &target[index]);
        strcpy(&target[index], insert_str);
        strcpy(&target[index + strlen(insert_str)], post_str);
    } 
}