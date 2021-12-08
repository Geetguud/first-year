/*
* Checks the maintenance level required against the crew abilities and current
* schedule and returns the number of the qualified crew that will be free to perform
* the maintenance at the earliest time. If more than one crew satisfies the function’s
* constraints, the number of the lowest-cost qualified crew is returned.
*/

#include "schedule.h" /* personal library with crew_t, aircraft_t data type */

/* header.h
*	Type crew_t has these components:
*	number, level, cost, tasks_lowcost, total_workhour_lowcost, tasks_fast, total_workhour_fast
*
*	Type aircraft_t has these components:
*	id, level, hours, done
*/

int check_earliest(crew_t crew[], aircraft_t aircraft, int crew_quantity) {
    int i, /* index of crew in the database */
        crew_num = 404, /* crew number with the least work hour */
        crew_workhour; /* total work hour of the crew */
    double crew_cost; /* cost per hour */

    /* finds a crew with sufficient skill level, to be set as initial comparison */
    for (i = 0; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level) {
            crew_num = crew[i].number;
            crew_cost = crew[i].cost;
            crew_workhour = crew[i].total_workhour_fast;
            break;
        }
    }

    /* finds a crew with the least work hour */
    for (i = i; i < crew_quantity; i++) {
        if (crew[i].level >= aircraft.level) {
            if (crew[i].total_workhour_fast < crew_workhour) {
                crew_num = crew[i].number;
                crew_cost = crew[i].cost;
                crew_workhour = crew[i].total_workhour_fast;
            
            /* if there are more than one, get the cheaper in cost */
            } else if (crew[i].total_workhour_fast == crew_workhour && crew[i].cost < crew_cost) {
                crew_num = crew[i].number;
                crew_cost = crew[i].cost;
                crew_workhour = crew[i].total_workhour_fast;
            }
        }
    }

    return crew_num;
}