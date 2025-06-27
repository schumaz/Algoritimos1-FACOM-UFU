#include <stdio.h>

int main () {
    double A, B, C;
    double const pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", 
        A*C/2.0,
        C * C * pi,
        (A + B) * C / 2.0,
        B * B,
        A* B);
    return 0;
}