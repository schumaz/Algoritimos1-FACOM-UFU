#include <stdio.h>

int main () {
    int input, in=0, i, temp;

    scanf ("%d", &input);

    for (i = 1; i <= input; i++) {
        scanf("%d", &temp);
        if (temp >= 10 && temp <= 20) {
            in++;
        }
    }

    printf("%d in\n%d out\n", in, input-in);

    return 0;
}