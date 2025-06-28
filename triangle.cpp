#include <stdio.h>

int main () {
    double a, b, c, perimeter;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        printf("Area = %.1lf\n", ((a+b)*c)/2);
    }

    return 0;
}