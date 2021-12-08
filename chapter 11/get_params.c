/*
* Prompts the user to enter the search parameters
*/

#include "header.h"
#include <stdio.h>
#include <string.h>

search_params_t get_params(void) {
    /* Initialize params to permit widest possible search */
    search_params_t params;
    params.low_stock = MIN_STOCK;
    params.high_stock = MAX_STOCK;
    strcpy(params.low_category, "aaaa");
    strcpy(params.high_category, "zzzz");
    strcpy(params.low_tech_descript, "aaaa");
    strcpy(params.high_tech_descript, "zzzz");
    params.low_price = 0;
    params.high_price = MAX_PRICE;

    char choice = menu_choose(params);
    while (choice != 'q' && choice != 'Q') {
        set_params(&params, choice);
        choice = menu_choose(params);
    }

    return params;
}