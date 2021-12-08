#include <stdio.h>
#include <math.h>

double median(double array[], int *length) {
    int index = *length / 2;
    if (*length % 2) return *(array + index);
    else return ((*(array + index) + *(array + index - 1)) / 2);
}

double mean(double array[], int *length) {
    double sum = 0;
    for (int i = 0; i < *length; i++) sum += *(array + i);
    return (sum / *length);
}

int modus(double array[], int *length) {
    double champ = *array;
    int champ_iter = 1;
    double num = *array;
    int iter = 1;
    for (int i = 1; i < *length; i++) {
        if (*(array + i) != num) {
            num = *(array + i);
            iter = 1;
        } else {
            iter++;
            if (iter > champ_iter) champ = num;
            if (champ == num) champ_iter++;
        }
    }
    return floor(champ);
}

int main() {
    int T, N;
    double Ni[109];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        for (int j = 0; j < N; j++) scanf("%lf", &Ni[j]);
        printf("%.2lf ", median(Ni, &N));
        printf("%.2lf ", mean(Ni, &N));
        printf("%d", modus(Ni, &N));
        printf("\n");
    }

    return 0;
}