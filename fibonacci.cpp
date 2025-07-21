#include <stdio.h>

int main () {

    int stop;
    scanf("%d", &stop);

    int first=0, second=1, third;
    printf("%d %d ", first, second);

    for (int i = 3; i <= stop; i++) {
        third = first + second;
        printf("%d", third);
        first = second;
        second = third;
        if (i == stop) {
            printf("\n");
        } else {
            printf(" ");
        }
    } 

    return 0;
}