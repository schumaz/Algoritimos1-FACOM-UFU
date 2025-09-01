#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (a >= valores[i]) {
            printf("%s", roman[i]);
            a -= valores[i];
        }
    }

    printf("\n");

    return 0;
}