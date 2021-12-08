#include <stdio.h>
#include <string.h>

int main() {
    char str[1111];
    int arr[1111], temp;
    while (1) {
        scanf("%[^\n]", str);
        if (strcmp(str, "exit") == 0) break;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == ' ') i--;
            else arr[i] = str[i];
        }
        for (int i = 0; i < strlen(str); i++) {
            for (int j = i + 1; j < strlen(str); j++) {
                if (arr[j] < arr[j - 1]) {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < strlen(str); i++) printf("%c", arr[i]);
        printf("\n");
    }
    return 0;
}