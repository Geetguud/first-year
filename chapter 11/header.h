/*
	Tanggal:
		Pembuatan: 28 November 2021
        Modifikasi 1: 29 November 2021
        Modifikasi 2: 30 November 2021
*/

/* 
    CASE STUDY : Database Inquiry
*/

#include <stdio.h>

#define MIN_STOCK 1111 /* minimum stock number */
#define MAX_STOCK 9999 /* maximum stock number */
#define MAX_PRICE 1000.00 /* maximum product price */
#define STR_SIZ 80 /* number of characters in a string */

typedef struct { /* product structure type */
    int stock_num; /* stock number */
    char category[STR_SIZ];
    char tech_descript[STR_SIZ];
    double price;
} product_t;

typedef struct { /* search parameter bounds type */
    int low_stock, high_stock;
    char low_category[STR_SIZ], high_category[STR_SIZ];
    char low_tech_descript[STR_SIZ], high_tech_descript[STR_SIZ];
    double low_price, high_price;
} search_params_t;

search_params_t get_params(void);
void set_params(search_params_t *params, char choice);
char menu_choose(search_params_t params);
void display_match(FILE *databasep, search_params_t params);
int match(product_t prod, search_params_t params);
void show(product_t prod);