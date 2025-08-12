#include <stdio.h>

int main() {
    int input = 1;

    while (input != 0) {
        scanf("%d", &input);

        if (input != 0) {
            int matrix[input][input];

            
            for (int i = 0; i < input; i++) {
                for (int k = 0; k < input; k++) {
                    int dis_top = i;
                    int dis_down = input - 1 - i;
                    int dis_left = k;   
                    int dis_right = input - 1 - k;

                    int lowest = dis_top;
                    if (dis_down < lowest) lowest = dis_down;
                    if (dis_left < lowest) lowest = dis_left;
                    if (dis_right < lowest) lowest = dis_right;

                    matrix[i][k] = lowest + 1;
                }
            }

            
            for (int i = 0; i < input; i++) {
                for (int k = 0; k < input; k++) {
                    if (k == input - 1) {
                        
                        printf("%3d\n", matrix[i][k]);
                    } else {
                        
                        printf("%3d ", matrix[i][k]);
                    }
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}