#include <stdio.h>
#include <cmath>

int main()
{
    int input;
    scanf("%d", &input);

    if (input <= 800) {
        printf("1\n");
    }
    else if (input > 800 && input <= 1400) {
        printf("2\n");
    }
    else {
        printf("3\n");
    }

    return 0;
}