#include <stdio.h>

int main () {
    double input;
    int notes[6] = {100, 50, 20, 10, 5, 2}, coins[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    scanf("%lf", &input);

    // convert input to how many notes are needed
    if (input < 100) {
        notes[0] = 0;
    } else {
        notes[0] = input / 100;
    }
    if (input < 50) {
        notes[1] = 0;   
    } else {
        notes[1] = (input - notes[0] * 100) / 50;
    }
    if (input < 20) {
        notes[2] = 0;
    } else {
        notes[2] = (input - notes[0] * 100 - notes[1] * 50) / 20;
    }
    if (input < 10) {
        notes[3] = 0;
    } else {
        notes[3] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20) / 10;
    }
    if (input < 5) {
        notes[4] = 0;
    } else {
        notes[4] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10) / 5;
    }
    if (input < 2) {
        notes[5] = 0;
    } else {
        notes[5] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5) / 2;
    }

    // convert input to how many coins are needed
    if (input < 1) {
        coins[0] =0;
    } else {
        coins[0] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5 - notes[5] * 2) / 1;
    }
    if (input < 0.50) {
        coins[1] = 0;
    } else {
        coins[1] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5 - notes[5] * 2 - coins[0]) / 0.50;
    }
    if (input < 0.25) {
        coins[2] = 0;
    } else {
        coins[2] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5 - notes[5] * 2 - coins[0] - coins[1] * 0.50) / 0.25;
    }
    if (input < 0.10) {
        coins[3] = 0;
    } else {
        coins[3] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5 - notes[5] * 2 - coins[0] - coins[1] * 0.50 - coins[2] * 0.25) / 0.10;
    }
    if (input < 0.05) {
        coins[4] = 0;
    } else {
        coins[4] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5 - notes[5] * 2 - coins[0] - coins[1] * 0.50 - coins[2] * 0.25 - coins[3] * 0.10) / 0.05;
    }
    if (input < 0.01) {
        coins[5] = 0;
    } else {
        coins[5] = (input - notes[0] * 100 - notes[1] * 50 - notes[2] * 20 - notes[3] * 10 - notes[4] * 5 - notes[5] * 2 - coins[0] - coins[1] * 0.50 - coins[2] * 0.25 - coins[3] * 0.10 - coins[4] * 0.05) / 0.01;
    }

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", 
        notes[0], notes[1], notes[2], notes[3], notes[4], notes[5]);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",
        coins[0], coins[1], coins[2], coins[3], coins[4], coins[5]);
    return 0;
}