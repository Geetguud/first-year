/*
* Computes the area of a figure given relevant dimensions. Returns
* figure with area component filled.
* Pre: value of shape component is one of these letters: CcRrSs
* necessary dimension components have values
*/

#include "header.h"

figure_t compute_area(figure_t object) {
    switch (object.shape) {
        case 'C':
        case 'c':
            object.fig.circle.area = PI * object.fig.circle.radius * object.fig.circle.radius;
            break;

        case 'R':
        case 'r':
            object.fig.rectangle.area = object.fig.rectangle.height * object.fig.rectangle.width;
            break;

        case 'S':
        case 's':
            object.fig.square.area = object.fig.square.side * object.fig.square.side;
            break;

        default:
            printf("Error in shape code detected in compute_area\n");
    }

    return (object);
}