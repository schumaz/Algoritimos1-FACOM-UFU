#include <stdio.h>

int main () {
    float n1, n2, n3, n4, n5, average, r_average;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    average = ((n1*2) + (n2*3) + (n3*4) + (n4)) / 10;
    printf("Media: %.1f\n", average);
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (average < 5) {
        printf("Aluno reprovado.\n");
    } else if (average >= 5 && average <= 6.9) {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        r_average = (average + n5) / 2;
        if (r_average >= 5) {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", r_average);
        } else {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", r_average);
        }
    }
    return 0;
}