#include <stdio.h>

int main () {

    for (int k = 1; ; ) {
        float X, Y;
        int reset;
        for (int i = 1; ; ) {
        scanf("%f", &X);
        if (X >= 0 && X <= 10.0) {
            break;
        } else {
            printf("nota invalida\n");
        }
    }

        for (int i = 1; ; ) {
        scanf("%f", &Y);
        if (Y >= 0 && Y <= 10.0) {
            printf("media = %.2f\n", (Y+X)/2);
            break;
        } else {
            printf("nota invalida\n");
        }
    }
    for (int j = 1; ; ) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &reset);
        if (reset == 1 || reset == 2) {
            break;
        } 
    }
    if (reset == 2) {
        break;
    }
    }

    return 0;
}