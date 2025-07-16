#include <stdio.h>

int main () {
    int number0=1, number1=60;

    for (int i = 1; ; i++) {
        printf("I=%d J=%d\n", number0, number1);
        number0 += 3;
        number1 -= 5;
        if (number1 == 0) {
            printf("I=%d J=%d\n", number0, number1);
            break;
        }
    }

    return 0;
}