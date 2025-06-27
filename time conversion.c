#include <stdio.h>

int main () {
    int input_seconds, hours, minutes, seconds;
    scanf("%d", &input_seconds);
        if (input_seconds < 3600) {
        hours =0;
    } else {
        hours = input_seconds / 3600;
    }
    if (input_seconds < 60) {
        minutes = 0;
    } else {
        minutes = (input_seconds % 3600) / 60;
    }
    seconds = input_seconds % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
    }