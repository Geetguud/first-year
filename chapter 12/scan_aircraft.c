/*
* Prompts the user to enter aircraft database file, then scans the data inside.
*/

#include <stdio.h> /* required library for database scanning and displaying informations to user */
#include <string.h> /* required library to perform string operations */
#include "schedule.h" /* personal library with crew_t, aircraft_t data type */

/* header.h
*	Type crew_t has these components:
*	number, level, cost, tasks_lowcost, total_workhour_lowcost, tasks_fast, total_workhour_fast
*
*	Type aircraft_t has these components:
*	id, level, hours, done
*/

int scan_aircraft(aircraft_t aircraft[], int *aircraft_quantity) {
    FILE *aircraft_data; /* pointer to aircraft maintenance database file */
    char aircraft_filename[STR_SIZ]; /* name of database file */
    
    /* get database filename */
    printf("Enter name of aircraft maintenance database file > ");
    scanf("%s", aircraft_filename);

    /* scan .txt database file */
    if (strstr(aircraft_filename, ".txt")) {
        aircraft_data = fopen(aircraft_filename, "r");
        if (aircraft_data == NULL) {
            printf("Error: File not found\n");
            return 1;
        }

        for (int i = 0; !feof(aircraft_data) && i < ARR_SIZ; i++) {
            fscanf(aircraft_data, "%d %d %d", &aircraft[i].id, &aircraft[i].level, &aircraft[i].hours);
            aircraft[i].done = 0;
            ++(*aircraft_quantity);
        }
        printf("Scan completed.\n\n");
    
    /* scan .bin database file */
    } else if (strstr(aircraft_filename, ".bin")) {
        aircraft_data = fopen(aircraft_filename, "rb");
        if (aircraft_data == NULL) {
            printf("Error: File not found\n");
            return 1;
        }

        for (int i = 0; !feof(aircraft_data) && i < ARR_SIZ; i++) {
            fread(&aircraft[i], sizeof(aircraft_t), 1, aircraft_data);
            aircraft[i].done = 0;
            ++(*aircraft_quantity);
        }
        printf("Scan completed.\n\n");
    } else {
        printf("Error: Please enter file with .txt or .bin format\n");
        return 1;
    }
    
    return 0;
}