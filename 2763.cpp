#include <stdio.h>
#include <cmath>
#include <string.h>

int main() {
    char cpf[16];
    fgets(cpf, 16, stdin);
    cpf[strcspn(cpf, "\n")] = '\0';

    for (int i = 0; i < 3; i++) {
        printf("%c", cpf[i]);
    }
    printf("\n");

    for (int i = 4; i < 7; i++) {
        printf("%c", cpf[i]);
    }
    printf("\n");

    for (int i = 8; i < 11; i++) {
        printf("%c", cpf[i]);
    }
    printf("\n");

    for (int i = 12; i < 14; i++) {
        printf("%c", cpf[i]);
    }
    printf("\n");

    return 0;
}