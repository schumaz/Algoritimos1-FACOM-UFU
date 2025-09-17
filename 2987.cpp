#include <stdio.h>
#include <cmath>
#include <string.h>

int main() {
    char in;
    scanf("%c", &in);

    int count = 1;
    for (int i = 'A'; i != 'Z'; i++) {
        if (i == in) {
            break;
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}