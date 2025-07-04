#include <stdio.h>

int main () {
    int numbers, i;
    double n;

    numbers = 0;

    for (i = 0; i <6; i++) {
        scanf("%lf", &n);
        if (n > 0) {
            numbers++;
        }
    }
    printf("%d valores positivos\n", numbers);
    return 0;
}