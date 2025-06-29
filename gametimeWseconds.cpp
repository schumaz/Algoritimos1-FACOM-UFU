#include <stdio.h>

int main () {
    int hours, minutes, end_hours, end_minutes, temp1, temp2, total_minutes;

    scanf("%d %d %d %d", &hours, &minutes, &end_hours, &end_minutes);

    temp1 = (hours*60) + minutes;
    temp2 = (end_hours * 60) + end_minutes;
    total_minutes = temp2 - temp1;

    if (hours == end_hours && minutes == end_minutes) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        if (total_minutes < 0) {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (temp2+1440-temp1)/60, (temp2+1440-temp1)%60);
        } else if (total_minutes == 60) {
            printf("O JOGO DUROU 1 HORA(S) E 0 MINUTO(S)\n");
        } else if (total_minutes < 60) {
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", total_minutes);
        } else {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total_minutes/60, total_minutes%60);
        }
    }
    return 0;
}