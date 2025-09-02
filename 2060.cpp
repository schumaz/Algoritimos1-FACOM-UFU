#include <stdio.h>

int main () {
    int in;
    scanf("%d", &in);

    int multi2=0, multi3=0, multi4=0, multi5=0; 
    for (int i = 0; i < in; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0) multi2++;
        if (temp % 3 == 0) multi3++;
        if (temp % 4 == 0) multi4++;
        if (temp % 5 == 0) multi5++;
    }

    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", multi2, multi3, multi4, multi5);

    return 0;
}