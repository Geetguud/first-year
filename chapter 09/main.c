/*
* Functions to perform basic operations on sets of characters
* represented as strings. Note: "Rest of set" is represented as
* &set[1], which is indeed the address of the rest of the set excluding
* the first element. This efficient representation, which does not
* recopy the rest of the set, is an acceptable substring reference in
* these functions only because the "rest of the set" is always passed
* strictly as an input argument.
*/

#include "head.h"
#include <stdlib.h>

int main() {
    char ele, set_one[SETSIZ], set_two[SETSIZ], set_three[SETSIZ];

    printf("A set is entered as a string of up to %d letters\n", SETSIZ - 3);
    printf("and digits enclosed in {} ");
    printf("(no duplicate characters)\n");
    printf("For example, {a, b, c} is entered as {abc}\n");

    printf("Enter a set to test validation function> ");
    get_set(set_one);
    putchar('\n');
    print_set(set_one);
    if (is_set(set_one))
        printf(" is a valid set\n");
    else
        printf(" is invalid\n");

    printf("Enter a single character, a space, and a set> ");
    while(isspace(ele = getchar())); /* gets first character after whitespace */
    get_set(set_one);
    printf("\n%c ", ele);
    if (is_element(ele, set_one))
        printf("is an element of ");
    else
        printf("is not an element of ");
    print_set(set_one);
    printf("\nEnter two sets to test set_union> ");
    get_set(set_one);
    get_set(set_two);
    printf("\nThe union of ");
    print_set(set_one);
    printf(" and ");
    print_set(set_two);
    printf(" is ");
    print_set(set_union(set_three, set_one, set_two));
    putchar('\n');

    
    return (0);
}