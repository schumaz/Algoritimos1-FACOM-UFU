#include <stdio.h>

int main() {
    double a, b, weight1 = 3.5, weight2 = 7.5, c, d;
    scanf("%lf %lf", &a, &b);
    c = a * weight1, d = b * weight2;
    printf("MEDIA = %.5lf", (c+d) / (weight1 + weight2));
    return 0;
}