#include <stdio.h>

int main () {
    int i, input, highest=0, position=0, positionRECALL;

    for (i = 1; i <= 100; i++) {
        position++;
        scanf("%d", &input);
        if (input > highest) {
            highest = input;
            positionRECALL = position;
        }
    }

    printf("%d\n%d\n", highest, positionRECALL);

    return 0;
}