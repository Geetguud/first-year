/*
* Prompts the user to set the search parameters
*/

#include "header.h"
#include <stdio.h>

void set_params(search_params_t *params, char choice) {
    switch (choice) {
        case 'a':
        case 'A':
            printf("New low bound for stock number > ");
            scanf("%d", &params-> low_stock);
            break;
        
        case 'b':
        case 'B':
            printf("New high bound for stock number > ");
            scanf("%d", &params-> high_stock);
            break;
        
        case 'c':
        case 'C':
            printf("New low bound for category > ");
            scanf("%s", params-> low_category);
            break;
        
        case 'd':
        case 'D':
            printf("New high bound for category > ");
            scanf("%s", params-> high_category);
            break;
        
        case 'e':
        case 'E':
            printf("New low bound for technical description > ");
            scanf("%s", params-> low_tech_descript);
            break;
        
        case 'f':
        case 'F':
            printf("New high bound for technical description > ");
            scanf("%s", params-> high_tech_descript);
            break;
        
        case 'g':
        case 'G':
            printf("New low bound for price > ");
            scanf("%lf", &params-> low_price);
            break;
        
        case 'h':
        case 'H':
            printf("New high bound for price > ");
            scanf("%lf", &params-> high_price);
            break;
        
        
        default:
            break;
    }
}