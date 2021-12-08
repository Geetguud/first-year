/*
* Accumulates hours required for each crew as each maintenance task is scheduled
*/

#include "header.h"

void assign(crew_t *crew, aircraft_t aircraft, int *schedule, char *type) {
    *schedule = aircraft.id;
    if (!strcmp(type, "fast")) {
        crew-> tasks_fast++;
        crew-> total_workhour_fast += aircraft.hours;
    } else if (!strcmp(type, "lowcost")) {
        crew-> tasks_lowcost++;
        crew-> total_workhour_lowcost += aircraft.hours;
    }
}