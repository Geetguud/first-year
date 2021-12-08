/*
	Tanggal:
		Pembuatan: 21 November 2021
        Modifikasi 1: 23 November 2021
*/

#include <stdio.h>
#define PI 3.14159

/* Types defining the components needed to represent each shape. */
typedef struct {
    double  area,
            circumference,
            radius;
} circle_t;

typedef struct {
    double  area,
            perimeter,
            width,
            height;
} rectangle_t;

typedef struct {
    double  area,
            perimeter,
            side;
} square_t;

/* Type of a structure that can be interpreted a different way for
    each shape */
typedef union {
    circle_t circle;
    rectangle_t rectangle;
    square_t square;
} figure_data_t;

/* Type containing a structure with multiple interpretations along with 
    a component whose value indicates the current valid interpretation */
typedef struct {
    char shape;
    figure_data_t fig;
} figure_t;

figure_t get_figure_dimensions(void);
figure_t compute_area(figure_t object);
figure_t compute_perim(figure_t object);
void print_figure(figure_t object);