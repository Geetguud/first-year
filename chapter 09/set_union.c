/*
* Finds the union of set1 and set2.
* Pre: size of result array is at least SETSIZ;
* set1 and set2 are valid sets of characters and digits
*/

#include "head.h"

char * set_union(char *result, /* output - space in which to store string result */
                 const char *set1, /* input - sets whose */
                 const char *set2) /* union is being formed */
{
    char temp[SETSIZ]; /* local variable to hold result of call to set_union embedded in sprintf call */

    if (is_empty(set1))
        strcpy(result, set2);
    else if (is_element(set1[0], set2))
        set_union(result, &set1[1], set2);
    else
        sprintf(result, "%c%s", set1[0],
        set_union(temp, &set1[1], set2));

    return (result);
}