#include "head.h"

int main() {
    char target[MAX_LENGTH], command;
    printf("Enter the source string:\n> ");
    scanf("%[^\n]", target);

    do {
        command = get_command();
        if (command == 'Q') break;
        operate(target, command);
        printf("New source: %s\n\n", target);
    } while (command != 'Q');

    printf("String after editing: %s\n", target);

    return 0;
}