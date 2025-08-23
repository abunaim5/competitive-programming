#include <stdio.h>

int main() {
    int t, k;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &k);
        int x = 1;
        int count = 0;
        while (k > count) {
            if (x % 3 != 0 && x % 10 != 3) count++;
            x++;
        }
        
        printf("%d\n", x - 1);
    }

    return 0;
}