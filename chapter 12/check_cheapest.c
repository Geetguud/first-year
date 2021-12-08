/*
* Checks maintenance level required against the crew abilities and returns
* the number of the least-cost crew that can perform the maintenance.
*/

#include "schedule.h" /* personal library with crew_t, aircraft_t data type */

/* header.h
*	Type crew_t has these components:
*	number, level, cost, tasks_lowcost, total_workhour_lowcost, tasks_fast, total_workhour_fast
*
*	Type aircraft_t has these components:
*	id, level, hours, done
*/

int check_cheapest(crew_t crew[], aircraft_t aircraft, int crew_quantity) {
    int i, /* index of crew in the database */
        crew_num = 404; /* crew number with the cheapest cost */
    double crew_cost; /* cost per hour */


    /* finds a crew with sufficient skill level, to be set as initial comparison */
    for (i = 0; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level) {
            crew_num = crew[i].number;
            crew_cost = crew[i].cost;
            break;
        }
    }

    /* finds a crew with the cheapest cost */
    for (i = i; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level && crew[i].cost < crew_cost) {
            crew_num = crew[i].number;
            crew_cost = crew[i].cost;
        }
    }

    return crew_num;
}