/*
* Schedules the crews to do maintenance jobs, finding the quickest way
* and the cheapest way to get the work done.
*/

#include "header.h"
#include <stdlib.h>

int main() {
    /* initialize variables */
    crew_t crew[ARR_SIZ];
    aircraft_t aircraft[ARR_SIZ];
    int crew_quantity = 0, aircraft_quantity = 0;
    int schedule_fast[ARR_SIZ][ARR_SIZ], schedule_lowcost[ARR_SIZ][ARR_SIZ];
    int time_fast = 0, time_lowcost = 0;
    double cost_fast = 0, cost_lowcost = 0;

    /* scan the database */
    int invalid = 0;
    printf("--- Input Crew Data ---\n");
    for (invalid = scan_crew(crew, &crew_quantity); invalid == 1; invalid = scan_crew(crew, &crew_quantity)) {}
    printf("--- Input Maintenance Data ---\n");
    for (invalid = scan_aircraft(aircraft, &aircraft_quantity); invalid == 1; invalid = scan_aircraft(aircraft, &aircraft_quantity)) {}

    /* find the quickest schedule */
    int assigned_quickest = scheduling(aircraft, crew, aircraft_quantity, crew_quantity, schedule_fast, &time_fast, &cost_fast, "fast");

    /* find the cheapest schedule */
    int assigned_cheapest = scheduling(aircraft, crew, aircraft_quantity, crew_quantity, schedule_lowcost, &time_lowcost, &cost_lowcost, "lowcost");

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

    int dif = (time_lowcost - time_fast);
    dif = (dif > 0) ? dif : -dif;
    printf("\nDifference of time required between the two solutions: %d %s\n", dif, (dif < 2 ? "hour" : "hours"));

    printf("\n");
    
    return 0;
}