#include <stdio.h>

int main () {

    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        int X, cases=0;
        scanf("%d", &X);
        for (int i = 2; i <= X - 1; i++) {
            if (X % i == 0) {
                cases=1;
                break;
            }
        }
        if (cases != 1) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}