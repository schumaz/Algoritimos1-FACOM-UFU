#include <stdio.h>

int main () {

    int temp;
    scanf("%d", &temp);
    
    int one=1, two=2, three=3;
    for (int i = 1; i <= temp; i++) {
        printf("%d %d %d PUM\n", one, two, three);
        one += 4;
        two += 4;
        three += 4;
    }

    return 0;
}