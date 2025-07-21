#include <stdio.h>

int main () {

    for (int i = 1; ; ) {
        int X, sum=0;
        scanf("%d", &X);
        if (X == 0) {
            break;
        }
        if (X % 2 == 0) {
            for (int k = 1; k <= 5; k++) {
                sum += X;
                X+= 2;
            }
        } else if (X % 2 != 0) {
            X+=1;
            for (int k = 1; k <= 5; k++) {
                sum += X;
                X+= 2;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}