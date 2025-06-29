#include <stdio.h>

int main () {
    double salary, percent; 

    scanf("%lf", &salary);

    if (salary >= 0 && salary <= 400.0) {
        percent = 1.15;
    } else if (salary >= 400.01 && salary <= 800.00) {
        percent = 1.12;
    } else if (salary >= 800.01 && salary <= 1200.00) {
        percent = 1.10;
    } else if (salary >= 1200.01 && salary <= 2000.00) {
        percent = 1.07;
    } else {
        percent = 1.04;
    }

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", salary*percent, (percent-1)*salary, (percent-1)*100);

    return 0;
}