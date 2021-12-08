/*
* Computes the perimeter of a figure given relevant dimensions. Returns
* figure with perimeter component filled.
* Pre: value of shape component is one of these letters: CcRrSs
* necessary dimension components have values
*/

#include "header.h"

figure_t compute_perim(figure_t object) {
    switch (object.shape) {
        case 'C':
        case 'c':
            object.fig.circle.circumference = PI * object.fig.circle.radius * 2;
            break;

        case 'R':
        case 'r':
            object.fig.rectangle.perimeter = (object.fig.rectangle.height + object.fig.rectangle.width) * 2;
            break;

        case 'S':
        case 's':
            object.fig.square.perimeter = object.fig.square.side * 4;
            break;

        default:
            printf("Error in shape code detected in compute_perim\n");
    }

    return (object);
}