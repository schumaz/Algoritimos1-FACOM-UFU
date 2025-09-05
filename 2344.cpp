#include <stdio.h>

int main () {
    int in;
    scanf("%d", &in);
    if (in == 0) printf("E\n");
    if (in > 0 && in <= 35) printf("D\n");
    if (in > 35 && in <= 60) printf("C\n");
    if (in > 60 && in <= 85) printf("B\n");
    if (in > 85 && in <= 100) printf("A\n");
}