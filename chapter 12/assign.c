/*
* Accumulates hours of work for each crew as each maintenance task is scheduled.
* The types of schedules, "fast" (fastest) and "lowcost" (cheapest), each has
* their respective variables.
*/

#include <string.h> /* required library to perform string operations */
#include "schedule.h" /* personal library with crew_t, aircraft_t data type */

/* header.h
*	Type crew_t has these components:
*	number, level, cost, tasks_lowcost, total_workhour_lowcost, tasks_fast, total_workhour_fast
*
*	Type aircraft_t has these components:
*	id, level, hours, done
*/

void assign(crew_t *crew, aircraft_t aircraft, int *schedule, char *type) {
    *schedule = aircraft.id; /* allocates the aircraft's ID to a slot in the crew's schedule */

    if (!strcmp(type, "fast")) {
        crew-> tasks_fast++; /* increases the number of job assigned to the crew (fastest schedule) */
        crew-> total_workhour_fast += aircraft.hours; /* accumulates the crew's total working hour  (fastest schedule) */
    } else if (!strcmp(type, "lowcost")) {
        crew-> tasks_lowcost++; /* increases the number of job assigned to the crew (cheapest schedule) */
        crew-> total_workhour_lowcost += aircraft.hours; /* accumulates the crew's total working hour  (cheapest schedule) */
    }
}