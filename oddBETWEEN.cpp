#include <stdio.h>

int main () {
    int i, input, temp=1;

    scanf("%d", &input);

    for (i = 1; i <= input; i++) {
        printf("%d\n", temp);
        temp = temp + 2;
        if (temp == input) {
            printf("%d\n", temp);
            break;
        } else if (temp == input - 1) {
            printf("%d\n", temp);
            break;
        }
    }
    return 0;
}