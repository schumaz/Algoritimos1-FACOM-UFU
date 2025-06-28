#include <stdio.h>

int main () {
    int start, end, amount, final;
    
    scanf("%d %d", &start, &end);

    if (start == end) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else if (start > end) {
        amount = 24 - start + end;
        printf("O JOGO DUROU %d HORA(S)\n", amount);
    } else {
        amount = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", amount);
    }

    return 0;
}