#include <stdio.h>

int main () {

    float input[100];
    for (int i = 0; i < 100; i++) {
        scanf("%f", &input[i]);
    }

    for (int i = 0; i < 100; i++) {
        if (input[i] <= 10.0) {
            printf("A[%d] = %.1f\n", i, input[i]);
        }
    }

    return 0;
}