/*
* Prompts the user to enter aircraft database file, then scan the data inside.
*/

#include "header.h"

int scan_aircraft(aircraft_t aircraft[], int *aircraft_quantity) {
    FILE *aircraft_data;
    char aircraft_filename[STR_SIZ];
    
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