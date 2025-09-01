#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    float sum = 0;
    for (int i = 0; i < a; i++) {
        int code, quantity;
        scanf("%d %d", &code, &quantity);

        if (code == 1001) {
            sum += 1.50 * quantity;
        } else if (code == 1002) {
            sum += 2.50 * quantity;
        } else if (code == 1003) {
            sum += 3.50 * quantity;
        } else if (code == 1004) {
            sum += 4.50 * quantity;
        } else if (code == 1005) {
            sum += 5.50 * quantity;
        }

    }

    printf("%.2f\n", sum);

    return 0;
}