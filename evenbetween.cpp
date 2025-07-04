#include <stdio.h>

int main () {
    int i, input, temp;

    temp =0;

    for (i = 1; i <= 5; i++) {
        scanf("%d", &input);
        if (input % 2 == 0) {
            temp++;
        }
    }
    
    printf("%d valores pares\n", temp);

    return 0;
}