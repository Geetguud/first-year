/*
* Displays each field of prod. Leaves a blank line after the product display.
*/

#include "header.h"
#include <stdio.h>

void show(product_t prod) {
    printf("Product number %4d Category %s\n", prod.stock_num, prod.category);
}