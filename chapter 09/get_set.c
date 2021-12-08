/*
* Gets a set input as a string with brackets (e.g., {abc})
* and strips off the brackets.
*/

#include "head.h"

char * get_set(char *set) /* output - set string without brackets {} */
{
    char inset[SETSIZ];

    scanf("%s", inset);
    strncpy(set, &inset[1], strlen(inset) - 2);
    set[strlen(inset) - 2] = '\0';
    return (set);
}