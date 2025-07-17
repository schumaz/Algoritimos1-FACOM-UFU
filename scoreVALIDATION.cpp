#include <stdio.h>

int main () {

    for (int i = 0; ; i++) {
        float X, Y;

        for (int k = 0; ; k++) {
            scanf("%f", &X);
            if (X < 0 || X > 10) {
                printf("nota invalida\n");
            } else {
                break;
            }
        }

        for (int k = 0; ; k++) {
            scanf("%f", &Y);
            if (Y < 0 || Y > 10) {
                printf("nota invalida\n");
            } else {
                break;
            }
        }
        printf("media = %.2f\n", (X+Y)/2);
        break;
    }


    return 0;
}