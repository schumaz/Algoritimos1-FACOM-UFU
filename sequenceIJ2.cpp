#include <stdio.h>

int main () {
    int number0=1, number1=7;

    for (int i = 1; ; i++) {
        printf("I=%d J=%d\n", number0, number1);
        number1 = number1 - 1;
        if (number1 == 5) {
            printf("I=%d J=%d\n", number0, number1);
            number0 += 2;
            number1 += 2;
        } 
        if (number0 == 9) {
            printf("I=%d J=%d\n", number0, number1);
            printf("I=%d J=%d\n", number0, number1-1);
            printf("I=%d J=%d\n", number0, number1-2);
            break;
        }
    }

    return 0;
}