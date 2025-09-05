#include <stdio.h>
#include <cmath>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int tempo1 = 2 * b + 4 * c;
    int tempo2 = 2 * a + 2 * c;
    int tempo3 = 4 * a + 2 * b;

    int menor = tempo1;
    if (tempo2 < menor) menor = tempo2;
    if (tempo3 < menor) menor = tempo3;

    printf("%d\n", menor);

    return 0;
}