#include <stdio.h>

int main () {
    int input;
    scanf("%d", &input);

    int temp, temp1, flag = 0;
    for (int i = 0; i < input; i++) {
        if (i == 0) {
            scanf("%d", &temp);
            continue;
        }

        scanf("%d", &temp1);
        if (temp1 > temp) temp = temp1;
        if (temp1 < temp) {
            flag = i+1;
            break;
        }
    }

    printf("%d\n", flag);

    return 0;
}