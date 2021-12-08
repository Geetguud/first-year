#include <stdio.h>

int main() {
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);

    int turns = t / 85;
    int over = t % 85;
    int cars = m + n + 1;
    int carsgon = turns * 12;
    if (over > 25) carsgon += (over - 25) / 5;

    if (carsgon > (m + 1)) {
        int temp = (cars - carsgon) > 0 ? (cars - carsgon) : 0;
        printf("YES! %d", temp);
    } else {
        printf("NO! %d", (cars - carsgon));
    }

    return 0;
}