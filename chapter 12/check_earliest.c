/*
* Checks the maintenance level required against the crew abilities and current
* schedule and returns the number of the qualified crew that will be free to perform
* the maintenance at the earliest time. If more than one crew satisfies the function’s
* constraints, the number of the lowest-cost qualified crew is returned.
*/

#include "header.h"

int check_earliest(crew_t crew[], aircraft_t aircraft, int crew_quantity) {
    int i, crew_num = 404, crew_workhour;
    double crew_cost;

    for (i = 0; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level) {
            crew_num = crew[i].number;
            crew_cost = crew[i].cost;
            crew_workhour = crew[i].total_workhour_fast;
            break;
        }
    }

    for (i = i; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level) {
            if (crew[i].total_workhour_fast < crew_workhour) {
                crew_num = crew[i].number;
                crew_cost = crew[i].cost;
                crew_workhour = crew[i].total_workhour_fast;
            } else if (crew[i].total_workhour_fast == crew_workhour && crew[i].cost < crew_cost) {
                crew_num = crew[i].number;
                crew_cost = crew[i].cost;
                crew_workhour = crew[i].total_workhour_fast;
            }
        }
    }

    return crew_num;
}