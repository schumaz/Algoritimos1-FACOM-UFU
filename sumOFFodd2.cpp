#include <stdio.h>

int main () {
    int cases;

    scanf("%d", &cases);

    for(int i = 1; i <= cases; i++) {
        int x, y, sum=0;
        scanf("%d %d", &x, &y);
        if (x > y) {
            int temp;
            temp = y;
            y = x;
            x = temp;
        }
        if (x == y) {
            printf("0\n");
        } else if (y - x == 1) {
            printf("0\n");
        }else {
            x += 1;
            for (x; x < y; x++) {
            if (x % 2 != 0) {
                sum += x;
            }
        }
        printf("%d\n", sum);
        }
    }
    return 0;
}