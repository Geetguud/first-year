/*
* Determines if string value of set represents a valid set (no duplicate
* elements)
*/

#include "head.h"

int is_set (const char *set) {
    int ans;

    if (is_empty(set))
        ans = TRUE;
    else if (is_element(set[0], &set[1]))
        ans = FALSE;
    else
        ans = is_set(&set[1]);
    return (ans);
}