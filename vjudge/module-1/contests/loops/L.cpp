#include <stdio.h>

int main () {
    int T, r, x;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &r);

        if (r <= 1399) x = 4;
        else if (r > 1399 && r <= 1599) x = 3;
        else if (r > 1599 && r <= 1899) x = 2;
        else if (r > 1899) x = 1;
        
        printf("Division %d\n", x);
    }

    return 0;
}