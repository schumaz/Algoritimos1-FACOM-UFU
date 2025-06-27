#include <stdio.h>

int main() {
    int code, amount, code1, amount1;
    double price, price1, total;
    scanf("%d %d %lf", &code, &amount, &price);
    scanf("%d %d %lf", &code1, &amount1, &price1);
    total = amount * price + amount1 * price1;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}