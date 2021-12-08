/*
	Tanggal:
		Pembuatan: 14 November 2021
        Modifikasi 1: 16 November 2021
*/

/* 
    CASE STUDY : Operation on Sets
*/

/* PROBLEM */
/*
    Develop a group of functions to perform the, is an element of; is a subset of; 
    and union operations on sets of characters. Also, develop functions to check that 
    a certain set is valid (that is, it contains no duplicate characters), to check for the 
    empty set, and to print a set in standard set notation.
*/

/* ANALYSIS */
/*
    Character strings provide a fairly natural representation of sets of characters. Like 
    sets, strings can be of varying sizes and can be empty. If a character array that is to 
    hold a set is declared to have one more than the number of characters in the universal set
    (to allow room for the null character), then set operations should never produce a string 
    that will overflow the array.
*/

/* DESIGN */
/*
	This problem is naturally divided into subproblems, each of which corresponds to 
    a single function. Since these functions are all basic set utilities, their individual 
    algorithms are quite straightforward. We will develop pseudocode for the simplest 
    functions first and will refer to these functions in the more complex solutions. Since 
    one goal of this case study is to demonstrate the use of recursion, we will ignore the 
    existence of looping constructs for the time being.
*/

/* IMPLEMENTATION */
/*
    Every recursive function in the collection of functions we have designed references 
    “the rest of the set” for some set, that is, all but the first letter of the set. In all of 
    these functions, this “rest of the set” is passed as an input argument only—the function
    called looks at it, but does not modify it. Since this particular substring includes 
    all the characters of the original string from the substring’s starting point right 
    through the original string’s null character, we can use &set[1] to reference the 
    rest of the set. Figure 9.20 shows our implementation of all the set operations along 
    with a main program that demonstrates the functions.
    
    You will notice that the name of our function that forms the union of two sets is 
    set_union. We could not use the name union because this is a reserved word in C. 
    In the implementation of set_union, we could not use the variable result as the 
    output argument for both the call to set_union and the call to sprintf because 
    sprintf does not guarantee correct results if there is overlap between its input and 
    output arguments.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SETSIZ 65
#define TRUE 1
#define FALSE 0

int is_empty(const char *set);
int is_element(char ele, const char *set);
int is_set(const char *set);
int is_subset(const char *sub, const char *set);
char *set_union(char *result, const char *set1, const char *set2);
void print_with_commas(const char *str);
void print_set(const char *set);
char *get_set(char *set);