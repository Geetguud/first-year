#include <stdio.h>
#include <string.h>

int multiply(int x, int result[], int res_size) {
    int carry = 0;

    for (int i = 0; i < res_size; i++) {
        int product = result[i] * x + carry;
        result[i] = product % 10;
        carry = product / 10;
    }

    while (carry) {
        result[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }

    return res_size;
}

int main() {
    int n;
    scanf("%d", &n);

    int result[3000];
    result[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++) {
        res_size = multiply(x, result, res_size);
    }

    for (int i = (res_size - 1); i >= 0; i--) {
        printf("%d", result[i]);
    }

    return 0;
}