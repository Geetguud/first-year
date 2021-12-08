/*
* Displays a string in standard set notation.
* e.g. print_set("abc") outputs {a, b, c}
*/

#include "head.h"

void print_set(const char *set) {
    putchar('{');
    if (!is_empty(set))
        print_with_commas(set);
    putchar('}');
}