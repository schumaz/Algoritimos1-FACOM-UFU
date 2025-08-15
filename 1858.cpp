#include <stdio.h>

int main () {
    int input;
    scanf("%d", &input);
    int results[input], lowest=0, position;

    for (int i = 0; i < input; i++) {
        scanf("%d", &results[i]);
        if (i == 0) {
            lowest = results[0];
            position = i+1;
        }
        if(results[i] < lowest) {
            lowest = results[i];
            position = i+1;
        }
    }

    printf("%d\n", position);

    return 0;
}