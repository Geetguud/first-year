/*
* Displays all products in the database that satisfy the search
* parameters specified by the program user.
*/

#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char inv_filename[STR_SIZ]; /* name of inventory file */
    FILE *inventoryp; /* inventory file pointer */
    search_params_t params; /* search parameter bounds */

    /* Get name of inventory file and open it */
    printf("Enter name of inventory file > ");
    scanf("%s", inv_filename);
    inventoryp = fopen(inv_filename, "rb");

    /* Get the search parameters */
    params = get_params();

    /* Display all products that satisfy the search parameters */
    display_match(inventoryp, params);

    return(0);
}