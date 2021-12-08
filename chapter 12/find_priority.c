/*
* Finds the aircraft maintenance job to be prioritized in assignment
*/

#include "header.h"

int find_priority(aircraft_t aircraft[], int aircraft_quantity) {
    int index, hours, level;
    
    for (int i = 0; i < aircraft_quantity; i++) {
        if (!aircraft[i].done) {
            index = i;
            hours = aircraft[i].hours;
            level = aircraft[i].level;
            break;
        }
    }

    for (int i = index; i < aircraft_quantity; i++) {
        if (!aircraft[i].done) {
            if (aircraft[i].hours > hours) {
                index = i;
                hours = aircraft[i].hours;
                level = aircraft[i].level;
            } else if (aircraft[i].hours == hours && aircraft[i].level > level) {
                index = i;
                hours = aircraft[i].hours;
                level = aircraft[i].level;
            }
        }
    }

    aircraft[index].done = 1;
    return index;
}