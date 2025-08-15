#include <stdio.h>

int main () {
    int a;
    char phrase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &a);
    
    for (int i = 0; i < a; i++) {
        printf("%c", phrase[i]);
    }
    printf("\n");

    return 0;
}