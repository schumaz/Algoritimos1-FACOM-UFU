#include <stdio.h>

int main () {
    int i, input, evenTEMP=0, oddTEMP=0, positiveTEMP=0, negativeTEMP=0;

    for (i=1; i<=5; i++) {
        scanf ("%d", &input);
        if (input % 2 == 0) {
            evenTEMP++;
        } 
        if (input % 2 != 0) {
            oddTEMP++;
        } 
        if (input > 0) {
            positiveTEMP++;
        } 
        if (input < 0) {
            negativeTEMP++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",
    evenTEMP, oddTEMP, positiveTEMP, negativeTEMP);
}