/*
* Determines if ele is an element of set.
*/

#include "head.h"

int is_element(char ele, /* input - element to look for in set */
               const char *set) /* input - set in which to look for ele */
{
    int ans;

    if (is_empty(set))
        ans = FALSE;
    else if (set[0] == ele)
        ans = TRUE;
    else
        ans = is_element(ele, &set[1]);

    return (ans);
}