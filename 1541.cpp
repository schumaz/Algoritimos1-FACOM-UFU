#include <stdio.h>
#include <cmath>

int main () {
    int t0, t1, t2;
    
    for (int i = 0; ; ) {
        scanf("%d%*c", &t0);
        if (t0 == 0) {
            break;
        }
        scanf("%d%*c%d", &t1, &t2);

        int house_area, total_area;
        house_area = t0*t1;
        total_area = (house_area * 100)/t2;
        printf("%d\n", (int)sqrt(total_area));
    }

    

    return 0;
}