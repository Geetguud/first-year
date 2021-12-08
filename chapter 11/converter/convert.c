#include <stdio.h>

typedef struct { /* product structure type */
    int stock_num; /* stock number */
    char category[80];
    char tech_descript[80];
    double price;
} product_t;

int main() {
    FILE *inp = fopen("input.txt", "r"), *outp = fopen("output.bin", "wb");
    product_t prod;
    while (fscanf(inp, "%d %s %s %lf", &prod.stock_num, prod.category, prod.tech_descript, &prod.price) != EOF) {
        fwrite(&prod, sizeof(product_t), 1, outp);
    }
    return 0;
}