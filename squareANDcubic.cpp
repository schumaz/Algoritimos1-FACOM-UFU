#include <stdio.h>

int main () {

    int temp;
    scanf("%d", &temp);
    
    int clean=1, square=1, cube=1;
    for (int i = 1; i <= temp; i++) {
        printf("%d %d %d\n", clean, square, cube);
        clean++;
        square = clean * clean;
        cube = clean * clean * clean;
    }

    return 0;
}