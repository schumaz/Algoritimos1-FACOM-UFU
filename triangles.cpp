#include <stdio.h>

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (b < c) {
        double temp = b;
        b = c; 
        c = temp;
    }
    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (b < c) {
        double temp = b;
        b = c; 
        c = temp;
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    } 
    if (a * a == b * b + c * c) {
        printf("TRIANGULO RETANGULO\n");
    } 
    if (a * a > b * b + c * c) {
        printf("TRIANGULO OBTUSANGULO\n");
    } 
    if (a * a < b * b + c * c) {
        printf("TRIANGULO ACUTANGULO\n");
    } 
    if (a==b && a==c) {
        printf("TRIANGULO EQUILATERO\n");
    } 
    if ((a==b && c != a) || (c==b && a != c) || (a==c && b != a)) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}