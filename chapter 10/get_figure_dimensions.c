/*
* Prompts for and stores the dimension data necessary to compute a
* figure's area and perimeter. Figure returned contains a 'Q' in the
* shape component when signaling end of data.
*/

#include "header.h"

figure_t get_figure_dimensions(void) {
    figure_t object;
    char remove[99];
    printf("Enter a letter to indicate the object shape or Q to quit.\n");
    printf("C (circle), R (rectangle), or S (square) > ");
    object.shape = getchar();
    fgets(remove, 99, stdin);

    switch (object.shape) {
        case 'C':
        case 'c':
            printf("[C] Enter radius > ");
            scanf("%lf", &object.fig.circle.radius);
            fgets(remove, 99, stdin);
            break;

        case 'R':
        case 'r':
            printf("[R] Enter height > ");
            scanf("%lf", &object.fig.rectangle.height);
            printf("[R] Enter width > ");
            scanf("%lf", &object.fig.rectangle.width);
            fgets(remove, 99, stdin);
            break;

        case 'S':
        case 's':
            printf("[S] Enter length of a side > ");
            scanf("%lf", &object.fig.square.side);
            fgets(remove, 99, stdin);
            break;

        case 'Q':
        case 'q':
            object.shape = 'Q';
            break;

        default:
            printf("Invalid input\n\n");
            object.shape = 'X';
    }

    return (object);
}