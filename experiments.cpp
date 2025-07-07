#include <stdio.h>

int main () {
    int i, cases, input;
    int rabits = 0;
    int frogs = 0;
    int rats = 0;
    int  amount = 0;
    char animal;
    double percent0, percent1, percent2;

    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        scanf("%d %c", &input, &animal);
        amount += input;
        switch (animal) {
            case ('C') :
                rabits += input;
                break;
            case ('R') :
                rats += input;
                break;
            case ('S') :
                frogs += input;
                break;
        }
    }

    percent0 = ((double)rabits / amount) * 100;
    percent1 = ((double)rats / amount) * 100;
    percent2 = ((double)frogs / amount) * 100;

    printf("Total: %d cobaias\n", amount);
    printf("Total de coelhos: %d\n", rabits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2lf %\n", percent0);
    printf("Percentual de ratos: %.2lf %\n", percent1);
    printf("Percentual de sapos: %.2lf %\n", percent2);

    return 0;
}