#include <stdio.h>

int main() {
    int T, n, x;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d%d", &n, &x);

        if (n <= x) {
            printf("yes\n");
        } else printf("no\n");
    }

    return 0;
}