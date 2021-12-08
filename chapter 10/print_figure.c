/*
* Prints the calculated area and perimeter of the figure.
* Pre: value of shape component is one of these letters: CcRrSs
* necessary dimension components have values
*/

#include "header.h"

void print_figure(figure_t object) {
    switch (object.shape) {
        case 'C':
        case 'c':
            printf("A circle with radius of %.2lf ", object.fig.circle.radius);
            printf("has an area of %.2lf ", object.fig.circle.area);
            printf("and circumference of %.2lf\n\n", object.fig.circle.circumference);
            break;

        case 'R':
        case 'r':
            printf("A rectangle with height of %.2lf ", object.fig.rectangle.height);
            printf("and width of %.2lf ", object.fig.rectangle.width);
            printf("has an area of %.2lf ", object.fig.rectangle.area);
            printf("and perimeter of %.2lf\n\n", object.fig.rectangle.perimeter);
            break;

        case 'S':
        case 's':
            printf("A square with side length of %.2lf ", object.fig.square.side);
            printf("has an area of %.2lf ", object.fig.square.area);
            printf("and perimeter of %.2lf\n\n", object.fig.square.perimeter);
            break;

        default:
            printf("Error in shape code detected in print_figure\n");
    }
}