#include <stdio.h>

int main() {
    int T, c;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &c);
        if (c % 3 == 0) {
            printf("yes\n");
        } else printf("no\n");
    }

    return 0;
}