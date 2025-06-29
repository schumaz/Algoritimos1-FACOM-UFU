#include <stdio.h>
#include <string.h>

int main () {
    char input1[50], input2[50], input3[50];

    scanf("%s %s %s", input1, input2, input3);

    if (strcasecmp (input1, "vertebrado") == 0) {
        if (strcasecmp (input2, "ave") == 0){
            if (strcasecmp (input3, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcasecmp (input3, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strcasecmp (input2, "inseto") == 0) {
            if (strcasecmp (input3, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strcasecmp (input3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}