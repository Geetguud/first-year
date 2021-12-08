#include <stdio.h>
#include <math.h>

double area(int A, int B, int C) {
    double Ay = A, By = B, Cy = C;
    double s = (Ay + By + Cy) / 2;
    return (sqrt(s * (s - Ay) * (s - By) * (s - Cy)));
}

int main() {
    int N, A, B, C;
    double max = 0, current;
    int maxA, maxB, maxC;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &A, &B, &C);
        current = area(A, B, C);
        if (current > max) {
            max = current;
            maxA = A;
            maxB = B;
            maxC = C;
        }
    }

    printf("%d %d %d", maxA, maxB, maxC);
}