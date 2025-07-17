#include <stdio.h>

int main () {

    for (int i = 0; ; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (X == Y) {
            break;
        } else if (X > Y) {
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }
    }

    return 0;
}   