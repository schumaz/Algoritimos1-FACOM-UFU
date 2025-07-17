#include <stdio.h>

int main () {

    for (int count = 0; count <= 20; count += 2) {
        float i = count / 10.0;
        
        for (float j = 1; j <= 3; j++) {
            if (i == (int)i) {
                printf("I=%.0f J=%.0f\n", i, i + j);
            } else {
                printf("I=%.1f J=%.1f\n", i, i + j);
            }
        }
    }

    return 0;
}