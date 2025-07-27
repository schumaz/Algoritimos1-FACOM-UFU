#include <stdio.h>

int main () {

    int input, array[1000];

    scanf("%d", &input);

    int n = 0;
    for (int i = 0; i < input; i++) {
        printf("N[%d] = %d\n", n, i);
        n++;
        if (n == 1000) {
            break;
        }
        if (i == (input - 1)) {
            i = -1;
        } 
    }

    return 0;
}