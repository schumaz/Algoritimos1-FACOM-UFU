#include <stdio.h>

int main() {
    int time, speed;
    double fuel, distance;
    scanf("%d %d", &time, &speed);
    distance = speed * time;
    fuel = distance / 12.0;
    printf("%.3lf\n", fuel);
    return 0;
}