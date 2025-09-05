#include <stdio.h>
#include <cmath>

int main () {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    if (a+b>c && a+c>b && b+c>a) {
        if (a == b && b == c) {
            printf("Valido-Equilatero\n");
            printf("Retangulo: N\n");
        } else if (a != b && b != c && a != c) {
            printf("Valido-Escaleno\n");
            if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2)) {
                printf("Retangulo: S\n");
            } else {
                printf("Retangulo: N\n");
            }
        } else {
            printf("Valido-Isoceles\n");
            if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2)) {
                printf("Retangulo: S\n");
            } else {
                printf("Retangulo: N\n");
            }
        } 
    } else {
        printf("Invalido\n");
    }

    return 0;
}