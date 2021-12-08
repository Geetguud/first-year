/*
* Displays a string so that each pair of characters is separated by a
* comma and a space.
*/

#include "head.h"

void print_with_commas(const char *str) {
    if (strlen(str) == 1) {
        putchar(str[0]);
    } else {
        printf("%c, ", str[0]);
        print_with_commas(&str[1]);
    }
}