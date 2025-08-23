#include <stdio.h>

int main() {
    int T, n, x;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d%d", &n, &x);
        int remaining = 0;
        if (x <= n) {
            remaining = n - x;
        }
        printf("%d\n", remaining);
    }

    return 0;
}