#include <stdio.h>

int main() {
    double area, radius;
    const double pi = 3.14159;
    scanf("%lf", &radius);
    area = pi * (radius * radius);
    printf("A=%.4lf", area);
    return 0;
}