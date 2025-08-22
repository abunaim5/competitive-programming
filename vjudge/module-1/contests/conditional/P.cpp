#include <stdio.h>

int main() {
    int a, b, x, y, totalM, totalR;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    totalM = (a * 2) + b;
    totalR = (x * 2) + y;

    if(totalM > totalR) {
        printf("Messi\n");
    } else if(totalM < totalR) {
        printf("Ronaldo\n");
    } else {
        printf("Equal\n");
    }
    
    return 0;
}