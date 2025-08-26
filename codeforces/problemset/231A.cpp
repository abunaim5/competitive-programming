#include <stdio.h>

int main () {
    int T, p, solve = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int F = 3, count = 0;
        

        while(F--) {
            scanf("%d", &p);
            if (p == 1) {
                count++;
            }
        }

        if(count > 1) {
            solve++;
        }
    }

    printf("%d\n", solve);

    return 0;
}