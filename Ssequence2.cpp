#include <stdio.h>

int main () {

    float X=3.0, Y=2.0, sum=1.0;
    for (float i = 1.0; i <= 39.0; i++) {
        sum += X / Y;
        X+=2;
        Y*=2;
    }
    printf("%.2f\n", sum);

    return 0;
}