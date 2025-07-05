#include <stdio.h>

int main () {
    int i, input, temp=2;

    scanf("%d", &input);

    for (i = 1; i <= input; i++) {
        printf("%d^2 = %d\n", temp, temp*temp);
        temp = temp + 2;
        if (temp == input) {
            printf("%d^2 = %d\n", temp, temp*temp);
            break;
        }
    }

    return 0;
}   