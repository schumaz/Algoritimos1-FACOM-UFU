#include <stdio.h>

int main () {
    int hours, minutes;

    while (scanf("%d:%d", &hours, &minutes) != EOF) {
        int time_toget_ready = (hours * 60) + minutes + 60;
        int appointment_time = 8*60;

        int delay = time_toget_ready - appointment_time;

        if (delay <= 0) {
            printf("Atraso maximo: 0\n");
        } else {
            printf("Atraso maximo: %d\n", delay);
        }
    }

    return 0;
}