/*
* Schedules the crews to do maintenance jobs, finding the quickest way
* and the cheapest way to get the work done.
*/

#include <stdio.h> /* required library for displaying informations to user */
#include <math.h> /* required library for arithmetic operations */
#include "schedule.h" /* personal library with crew_t, aircraft_t data type */

/* header.h
*	Type crew_t has these components:
*	number, level, cost, tasks_lowcost, total_workhour_lowcost, tasks_fast, total_workhour_fast
*
*	Type aircraft_t has these components:
*	id, level, hours, done
*/

int main() {
    /* initialize variables */
    crew_t crew[ARR_SIZ]; /* database of available crews */
    aircraft_t aircraft[ARR_SIZ]; /* database of aircraft maintenance jobs */
    int crew_quantity = 0, aircraft_quantity = 0; /* quantity of crews and jobs */
    int schedule_fast[ARR_SIZ][ARR_SIZ], /* fastest schedule, containing aircraft IDs assigned to each crew */
        schedule_lowcost[ARR_SIZ][ARR_SIZ]; /* cheapest schedule, containing aircraft IDs assigned to each crew */
    int time_fast = 0, time_lowcost = 0; /* total time needed to get all jobs done, in each schedule */
    double cost_fast = 0, cost_lowcost = 0; /* total cost needed for each schedule */

    /* scan the database */
    int invalid = 0; /* variable to determine whether database scanning has succeeded */

    printf("--- Input Crew Data ---\n");
    for (invalid = scan_crew(crew, &crew_quantity); invalid == 1; invalid = scan_crew(crew, &crew_quantity)) {}
    
    printf("--- Input Maintenance Data ---\n");
    for (invalid = scan_aircraft(aircraft, &aircraft_quantity); invalid == 1; invalid = scan_aircraft(aircraft, &aircraft_quantity)) {}

    /* find the quickest schedule */
    int assigned_quickest = scheduling(aircraft, crew, aircraft_quantity, crew_quantity, schedule_fast, &time_fast, &cost_fast, "fast");
    /* assigned_quickest is used to store the maximum number of jobs assigned to a crew in this schedule */

    /* find the cheapest schedule */
    int assigned_cheapest = scheduling(aircraft, crew, aircraft_quantity, crew_quantity, schedule_lowcost, &time_lowcost, &cost_lowcost, "lowcost");
    /* assigned_cheapest is used to store the maximum number of jobs assigned to a crew in this schedule */

    /* display quickest schedule */
    printf("--- Quickest Schedule ---\n");
    printf("The following is an approximation of quickest maintenance schedule\n");
    printf("containing Aircraft ID assigned to each crew. Different combination\n");
    printf("of assignment might have better result.\n\n\t");
    for (int i = 0; i < crew_quantity; i++) printf("Crew %d\t", crew[i].number);
    printf("\n");
    for (int i = 0; i < assigned_quickest; i++) {
        printf("%d.\t", (i + 1));
        for (int j = 0; j < crew_quantity; j++) {
            if (schedule_fast[j][i]) printf("%d\t", schedule_fast[j][i]);
            else printf("\t");
        }
        printf("\n");
    }
    printf("\nTotal cost of crew: $%.2lf\n", cost_fast);
    printf("Time required to complete maintenance: %d hours\n\n", time_fast);

    /* display cheapest schedule */
    printf("--- Cheapest Schedule ---\n");
    printf("The following is an approximation of cheapest maintenance schedule\n");
    printf("containing Aircraft ID assigned to each crew. Different combination\n");
    printf("of assignment may yield better result.\n\n\t");
    for (int i = 0; i < crew_quantity; i++) printf("Crew %d\t", crew[i].number);
    printf("\n");
    for (int i = 0; i < assigned_cheapest; i++) {
        printf("%d.\t", (i + 1));
        for (int j = 0; j < crew_quantity; j++) {
            if (schedule_lowcost[j][i]) printf("%d\t", schedule_lowcost[j][i]);
            else printf("\t");
        }
        printf("\n");
    }
    printf("\nTotal cost of crew: $%.2lf\n", cost_lowcost);
    printf("Time required to complete maintenance: %d hours\n", time_lowcost);

    int dif = abs(time_lowcost - time_fast); /* difference in time required between both schedule */
    printf("\nDifference of time required between the two solutions: %d %s\n", dif, (dif < 2 ? "hour" : "hours"));

    system("pause");
    return 0;
}