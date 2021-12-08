/*
* Determines whether record prod satisfies all search parameters
*/

#include "header.h"
#include <stdio.h>
#include <string.h>

int match(product_t prod, /* input - record to check */
            search_params_t params) /* input - parameters to satisfy */
{
    return (strcmp(params.low_category, prod.category) <= 0 &&
            strcmp(prod.category, params.high_category) <= 0 &&
            strcmp(params.low_tech_descript, prod.tech_descript) <= 0 &&
            strcmp(prod.tech_descript, params.high_tech_descript) <= 0 &&
            params.low_price <= prod.price &&
            prod.price <= params.high_price);
}