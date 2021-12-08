#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100

char get_command();
void operate(char *target, char command);
void delete(char *target);
void insert(char* target);
void find(char *target);