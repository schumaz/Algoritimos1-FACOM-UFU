#include <stdio.h>

int main () {
    int i, temp;
    double input, avg, sum;

    temp = 0;
    sum = 0.0;

    for (i = 0; i <= 5; i++) {
        scanf("%lf", &input);
        if (input > 0) {
            sum = sum + input;
            temp++;
        }
    }

    if (temp > 0) {
        avg = sum / temp;
    } else {
        return 0;
    }

    printf("%d valores positivos\n%.1lf\n", temp, avg);

    return 0;
}