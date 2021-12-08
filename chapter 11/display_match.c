/*
* Displays records of all products in the inventory that satisfy search
* parameters.
* Pre: databasep accesses a binary file of product_t records that has
* been opened as an input file, and params is defined
*/

#include "header.h"
#include <stdio.h>

void display_match(FILE *databasep, /* input - file pointer to binary database file */
                    search_params_t params) /* input - search parameter bounds */
{
    product_t next_prod; /* current product from database */
    int no_matches = 1; /* flag indicating if no matches have been found */
    int status; /* input file status */

    /* Advances to first record with a stock number greater than or equal to lower bound.*/
    for (status = fread(&next_prod, sizeof (product_t), 1, databasep);
        status == 1 && params.low_stock > next_prod.stock_num;
        status = fread(&next_prod, sizeof (product_t), 1, databasep)) {}

    /* Displays a list of the products that satisfy the search parameters */
    printf("\nProducts satisfying the search parameters:\n");
    while (next_prod.stock_num <= params.high_stock && status == 1) {
        if (match(next_prod, params)) {
            no_matches = 0;
            show(next_prod);
        }
        status = fread(&next_prod, sizeof (product_t), 1, databasep);
    }

    /* Displays a message if no products found */
    if (no_matches) printf("Sorry, no products available\n");
}