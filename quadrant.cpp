#include <stdio.h>

int main () {

    for (int i = 0; ; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (X == 0 || Y == 0) {
            break;
        } else if (X > 0 && Y > 0) {
            printf("primeiro\n");
        } else if (X < 0 && Y > 0) {
            printf("segundo\n");
        } else if (X < 0 && Y < 0) {
            printf("terceiro\n");
        } else {
            printf("quarto\n");
        }
    }

    return 0;
}