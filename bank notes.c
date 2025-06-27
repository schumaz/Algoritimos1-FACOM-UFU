#include <stdio.h> 

int main () {
    int input, inputcopy, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    scanf("%d", &input);
    inputcopy = input;
    if (input >= 100) {
        nota100 = input /100;
        input = input % 100;       
    } else {
            nota100 = 0;
        }
    if (input >= 50) {
        nota50 = input / 50;
        input = input % 50;       
    } else {
            nota50 = 0;
        }
    if (input >= 20) {
        nota20 = input / 20;
        input = input % 20;       
    } else {
            nota20 = 0;
        }
    if (input >= 10) {
        nota10 = input / 10;
        input = input % 10;       
    } else {
            nota10 = 0;
        }
    if (input >= 5) {
        nota5 = input / 5;
        input = input % 5;       
    } else {
            nota5 = 0;
        }
    if (input >= 2) {
        nota2 = input / 2;
        input = input % 2;       
    } else {
            nota2 = 0;
        }
    if (input >= 1) {
        nota1 = input / 1;
        input = input % 1;       
    } else {
            nota1 = 0;
        }
    printf("%d\n", inputcopy);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
        nota100, nota50, nota20, nota10, nota5, nota2, nota1);
    return 0;
}