/*
* Prompts the user to enter crew database file, then scan the data inside.
*/

#include "header.h"

int scan_crew(crew_t crew[], int *crew_quantity) {
    FILE *crew_data;
    char crew_filename[STR_SIZ];
    
    /* get database filename */
    printf("Enter name of crew database file > ");
    scanf("%s", crew_filename);

    /* scan .txt database file */
    if (strstr(crew_filename, ".txt")) {
        crew_data = fopen(crew_filename, "r");
        if (crew_data == NULL) {
            printf("Error: File not found\n");
            return 1;
        }

        for (int i = 0; !feof(crew_data) && i < ARR_SIZ; i++) {
            fscanf(crew_data, "%d %d %lf", &crew[i].number, &crew[i].level, &crew[i].cost);
            crew[i].total_workhour_lowcost = 0;
            crew[i].total_workhour_fast = 0;
            crew[i].tasks_lowcost = 0;
            crew[i].tasks_fast = 0;
            ++(*crew_quantity);
        }
        printf("Scan completed.\n\n");

    /* scan .bin database file */
    } else if (strstr(crew_filename, ".bin")) {
        crew_data = fopen(crew_filename, "rb");
        if (crew_data == NULL) {
            printf("Error: File not found\n");
            return 1;
        }

        for (int i = 0; !feof(crew_data) && i < ARR_SIZ; i++) {
            fread(&crew[i], sizeof(crew_t), 1, crew_data);
            crew[i].total_workhour_lowcost = 0;
            crew[i].total_workhour_fast = 0;
            crew[i].tasks_lowcost = 0;
            crew[i].tasks_fast = 0;
            ++(*crew_quantity);
        }
        printf("Scan completed.\n\n");
    } else {
        printf("Error: Please enter file with .txt or .bin format\n");
        return 1;
    }
    
    return 0;
}