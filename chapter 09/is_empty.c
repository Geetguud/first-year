/*
* Determines if set is empty. If so, returns 1; if not, returns 0.
*/

#include "head.h"

int is_empty(const char *set) {
    return (set[0] == '\0');
}