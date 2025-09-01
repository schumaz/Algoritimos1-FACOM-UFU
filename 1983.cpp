#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    int matricula[a];
    float nota[a], biggest = 0.0;
    int number = 0;

    for (int i = 0; i < a; i++) {
        scanf("%d %f", &matricula[i], &nota[i]);
        
        if (nota[i] >= 8.0 && nota[i] > biggest) {
            biggest = nota[i];
            number = i;
        }
    }
    
    if (biggest != 0.0) {
        printf("%d\n", matricula[number]);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}