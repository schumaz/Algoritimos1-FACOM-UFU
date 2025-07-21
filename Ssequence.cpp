#include <stdio.h>

int main () {

    float result=1, sum;
    for (float i = 1.0; i <= 100.0; i++) {
        sum += result / i;
    }
    printf("%.2f\n", sum);

    return 0;
}