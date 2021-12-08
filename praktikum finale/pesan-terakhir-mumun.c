    #include <stdio.h>
    #include <string.h>

    const char KEY[] = " AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

    int main() {
        int K, N = 0;
        char en[9], str[11111];
        scanf("%d", &K);
        K %= 52;
        getchar();

        while (1) {
            gets(en);
            if (strcmp(en, "-1") == 0) break;
            gets(str);

            if (en[0] == '1') N += 8;
            if (en[1] == '1') N += 4;
            if (en[2] == '1') N += 2;
            if (en[3] == '1') N += 1;

            if (N == 2 || N == 3 || N == 5 || (N % 2 && N % 3 && N % 5)) {
                printf("Mumun: ");
                int temp;
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') temp = (((str[i] % 'a') + 1) * 2 + K);
                    else if (str[i] >= 'A' && str[i] <= 'Z') temp = ((str[i] % 'A' + 1) * 2 - 1 + K);
                    else {
                        printf("%c", str[i]);
                        continue;
                    }

                    printf("%c", KEY[temp % 52]);
                }
                printf("\n");
            } else {
                printf("Robot: ");
                int temp;
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') temp = (((str[i] % 'a') + 1) * 2 - K);
                    else if (str[i] >= 'A' && str[i] <= 'Z') temp = ((str[i] % 'A' + 1) * 2 - K - 1);
                    else {
                        printf("%c", str[i]);
                        continue;
                    }

                    if (temp <= 0) temp += 52;
                    printf("%c", KEY[temp % 52]);
                }
                printf("\n");
            }

            N = 0;
        }

        return 0;
    }