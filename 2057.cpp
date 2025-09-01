#include <stdio.h>

int main () {

    int partida, tempo, fuso;

    scanf("%d %d %d", &partida, &tempo, &fuso);

    int soma = partida + tempo + fuso;

    if (soma < 0) {
        soma = 24 + soma;
    }

    soma = soma % 24;

    printf("%d\n", soma);

    return 0;
}