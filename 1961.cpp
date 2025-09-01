#include <stdio.h>
#include <cmath>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);

    int numbers[b];
    for (int i = 0; i < b; i++) {
        scanf("%d", &numbers[i]);
    }

    int you_win = 1;
    for (int i = 0; i < b - 1; i++) {
        int diff;
        diff = abs(numbers[i+1] - numbers[i]);

        if (diff > a) {
            you_win = 0;
            break;
        }
    }

    if (you_win == 1) {
        printf("YOU WIN\n");
    } else {
        printf("GAME OVER\n");
    }

    return 0;
}