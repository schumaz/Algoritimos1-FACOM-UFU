#include <stdio.h>

int main () {
    int number0=1, number1=7;

    for (int i = 1; i <= 3; i++) {
        printf("I=%d J=%d\n", number0, number1);
        number1 -= 1;
        if (number0 == 9) {
            printf("I=%d J=%d\n", number0, number1);
            printf("I=%d J=%d\n", number0, number1-1);
            break;
        } else if (i == 3) {
            i = 0;
            number0 += 2;
            number1 += 5;
        }
    }

    return 0;
}