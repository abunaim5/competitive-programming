#include <stdio.h>

int main () {
    int x, minSteps = 0, position = 5;
    scanf("%d", &x);

    for (int i = 1; i <= position; i++) {
        if (x % i != 0) {
            minSteps = (x + (i - 1)) / i;  
        } else minSteps = x / i;
    }

    printf("%d\n", minSteps);

    return 0;
}