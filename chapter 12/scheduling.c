/*
* Creates maintenance schedule based on the type of schedule.
* Returns the maximum number of job assigned to one crew.
*/

#include "header.h"

int scheduling( aircraft_t aircraft[], crew_t crew[],
                int aircraft_quantity, int crew_quantity,
                int schedule[ARR_SIZ][ARR_SIZ],
                int *time, double *cost, char *type)
{
    int assigned = 0; /* maximum number of job assigned to one crew */
    for (int index = 0; index < aircraft_quantity; index++) {

        /* get the maintenance job to be assigned */
        int priority = index;
        if (!strcmp(type, "fast")) priority = find_priority(aircraft, aircraft_quantity);
        
        /* get the crew to do the job */
        int crew_assign;
        if (!strcmp(type, "fast")) crew_assign = check_earliest(crew, aircraft[priority], crew_quantity);
        else crew_assign = check_cheapest(crew, aircraft[index], crew_quantity);

        if (crew_assign == 404) {
            printf("Error: One or more aircraft has greater requirement in crew level\n");
            continue;
        }

        /* get the slot of job in maintenance schedule */
        int *schedule_assign;
        if (!strcmp(type, "fast")) schedule_assign = &schedule[crew_assign][crew[crew_assign].tasks_fast];
        else schedule_assign = &schedule[crew_assign][crew[crew_assign].tasks_lowcost];

        /* assign job schedule to the crew */
        assign(&crew[crew_assign], aircraft[priority], schedule_assign, type);

        /* calculate maximum number of assigned job, total workhour, and total cost */
        if (!strcmp(type, "fast")) {
            if (crew[crew_assign].tasks_fast > assigned) assigned = crew[crew_assign].tasks_fast;
            if (crew[crew_assign].total_workhour_fast > *time) *time = crew[crew_assign].total_workhour_fast;
        } else {
            if (crew[crew_assign].tasks_lowcost > assigned) assigned = crew[crew_assign].tasks_lowcost;
            if (crew[crew_assign].total_workhour_lowcost > *time) *time = crew[crew_assign].total_workhour_lowcost;
        }

        double workhour = aircraft[priority].hours;
        *cost += crew[crew_assign].cost * workhour;
    }
    return assigned;
}