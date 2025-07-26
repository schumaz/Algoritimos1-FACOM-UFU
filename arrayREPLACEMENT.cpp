#include <stdio.h>

int main () {

    int input[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (input[i] <= 0) {
            printf("X[%d] = 1\n", i);
        } else {
            printf("X[%d] = %d\n", i, input[i]);
        }
    }

    return 0;
}