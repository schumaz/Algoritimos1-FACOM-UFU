#include <stdio.h>

int main () {

    int day, hour, minute, second;
    scanf("Dia %d", &day);
    scanf("%d : %d : %d", &hour, &minute, &second);

    int day1, hour1, minute1, second1;
    scanf(" Dia %d", &day1); 
    scanf("%d : %d : %d", &hour1, &minute1, &second1);

    long long incial_total = second + minute * 60 + hour * 3600 + day * 86400;
    long long final_total = second1 + minute1 * 60 + hour1 * 3600 + day1 * 86400;
    long long total = final_total - incial_total;

    int total_days = total / 86400;
    long long total_days_resto = total % 86400;

    int total_hours = total_days_resto / 3600;
    total_days_resto = total_days_resto % 3600;

    int total_minutes = total_days_resto / 60;
    int total_seconds = total_days_resto % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", total_days, total_hours, total_minutes, total_seconds);

    return 0;
}