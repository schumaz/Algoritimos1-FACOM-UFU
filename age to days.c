#include <stdio.h>

int main() {
    int input_days, years, months, days;
    scanf("%d", &input_days);
    if (input_days < 365) {
        years = 0;
    } else {
        years = input_days / 365;
    }
    if (input_days < 30) {
        months = 0;
    } else {
        months = (input_days % 365) / 30;
    }
    days = (input_days % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}