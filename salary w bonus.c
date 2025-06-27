#include <stdio.h>

int main() {
    char name[50];
    double fsalary, total, bonus, salestotal;
    scanf("%s %lf %lf", &name, &fsalary, &salestotal);
    bonus = 0.15 * salestotal;
    total = fsalary + bonus;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}