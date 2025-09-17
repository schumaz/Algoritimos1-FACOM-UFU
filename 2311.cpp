#include <stdio.h>
#include <cmath>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[50];
    float difficulty;
    float n[7];
} jump;

int main() {
    
    int input;
    scanf("%d", &input);
    jump list[input];

    float smol, biggest, sum[input] = {0}; 
    
    for (int i = 0; i < input; i++) {
        scanf(" %s", list[i].name);
        scanf(" %f", &list[i].difficulty);
        
        for (int j = 0; j < 7; j++) {
            scanf(" %f", &list[i].n[j]);
            
            if (j == 0) {
                smol = list[i].n[j];
                biggest = list[i].n[j];
            } else {
                if (smol > list[i].n[j]) smol = list[i].n[j];
                if (biggest < list[i].n[j]) biggest = list[i].n[j];
            }
            
            sum[i] += list[i].n[j];
        }
        
        sum[i] -= (smol + biggest);
    }

    for (int i = 0; i < input; i++) {
        printf("%s %.2f\n", list[i].name, sum[i] * list[i].difficulty);
    }

    return 0;
}