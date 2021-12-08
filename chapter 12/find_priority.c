/*
* Finds the aircraft maintenance job to be prioritized in assignment.
* Rank of priority: highest number of hours needed, then the highest level of maintenance.
*/

#include "schedule.h" /* personal library with crew_t, aircraft_t data type */

/* header.h
*	Type crew_t has these components:
*	number, level, cost, tasks_lowcost, total_workhour_lowcost, tasks_fast, total_workhour_fast
*
*	Type aircraft_t has these components:
*	id, level, hours, done
*/

int find_priority(aircraft_t aircraft[], int aircraft_quantity) {
    int index, hours, level;
    
    /* finds an aircraft maintenance that is not scheduled yet, to be set as initial comparison */
    for (int i = 0; i < aircraft_quantity; i++) {
        if (!aircraft[i].done) {
            index = i;
            hours = aircraft[i].hours;
            level = aircraft[i].level;
            break;
        }
    }

    /* finds an aircraft with most hour needed */
    for (int i = index; i < aircraft_quantity; i++) {
        if (!aircraft[i].done) {
            if (aircraft[i].hours > hours) {
                index = i;
                hours = aircraft[i].hours;
                level = aircraft[i].level;
            
            /* if there are more than one, get the highest level */
            } else if (aircraft[i].hours == hours && aircraft[i].level > level) {
                index = i;
                hours = aircraft[i].hours;
                level = aircraft[i].level;
            }
        }
    }

    aircraft[index].done = 1; /* set the prioritized aircraft as scheduled */
    return index;
}