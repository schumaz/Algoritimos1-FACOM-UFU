#include <stdio.h>

int main() {
    int number, a;
    double b, salary;
    scanf("%d %d %lf", &number, &a, &b);
    salary = a *b;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}