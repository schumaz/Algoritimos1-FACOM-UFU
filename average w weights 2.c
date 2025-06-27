#include <stdio.h>

int main() {
    double a, b, c, weightA = 2, weightB = 3, weightC= 5, WweightA, WweightB, WweightC;
    scanf("%lf %lf %lf", &a, &b, &c);
    WweightA = a * weightA, WweightB = b * weightB, WweightC = c * weightC;
    printf("MEDIA = %.1lf\n", (WweightA+WweightB+WweightC) / (weightA + weightB + weightC));
    return 0;
}