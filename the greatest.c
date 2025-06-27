#include <stdio.h> 
#include <stdlib.h>

int main () {
    int A, B, C, greatestAB, greatestCD;
    scanf("%d %d %d", &A, &B, &C);
    greatestAB = (A + B + abs (A - B)) / 2;
    greatestCD = (greatestAB + C + abs(greatestAB - C)) / 2;
    printf("%d eh o maior\n", greatestCD);
    return 0;
}