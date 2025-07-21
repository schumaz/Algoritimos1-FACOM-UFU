#include <stdio.h>

int main () {

    int X;
    for (int i = 1; ; ) {
        scanf("%d", &X);
        if (X == 0) {
            break;
        }
        for (int k = 1; k <= X; k++) {
            printf("%d", k);
            if (k == X) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }

    return 0;
}