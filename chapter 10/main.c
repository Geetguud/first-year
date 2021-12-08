/*
* Computes the area and perimeter of a variety of geometric figures.
*/

#include "header.h"
#include <stdlib.h>

int main(void) {
    figure_t onefig;

    printf("Area and Perimeter Computation Program\n");

    for (onefig = get_figure_dimensions(); onefig.shape != 'Q'; onefig = get_figure_dimensions()) {
        if (onefig.shape == 'X') continue;
        else if (onefig.shape == 'Q') break;
        onefig = compute_area(onefig);
        onefig = compute_perim(onefig);
        print_figure(onefig);
    }

    return (0);
}