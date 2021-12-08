/*
* Checks maintenance level required against the crew abilities and returns
* the number of the least-cost crew that can perform the maintenance.
*/

#include "header.h"

int check_cheapest(crew_t crew[], aircraft_t aircraft, int crew_quantity) {
    int crew_num = 404;
    double crew_cost;

    for (int i = 0; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level) {
            crew_num = crew[i].number;
            crew_cost = crew[i].cost;
            break;
        }
    }

    for (int i = 0; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level && crew[i].cost < crew_cost) {
            crew_num = crew[i].number;
            crew_cost = crew[i].cost;
        }
    }

    return crew_num;
}