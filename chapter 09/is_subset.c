/*
* Determines if value of sub is a subset of value of set.
*/

#include "head.h"

int is_subset(const char *sub, const char *set) {
    int ans;

    if (is_empty(sub))
        ans = TRUE;
    else if (!is_element(sub[0], set))
        ans = FALSE;
    else
        ans = is_subset(&sub[1], set);

    return (ans);
}