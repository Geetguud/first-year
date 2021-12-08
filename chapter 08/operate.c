#include "head.h"

void operate(char *target, char command) {
    switch(command) {
        case 'D':
            if (strlen(target) == 0) printf("String empty\n");
            else delete(target);
            break;

        case 'I':
            insert(target);
            break;

        case 'F':
            find(target);
            break;

        default:
            printf("Invalid command\n");
    }
}