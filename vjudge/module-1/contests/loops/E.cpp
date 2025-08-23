#include <stdio.h>

int main() {
    int t, x;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &x);
        if (x > 24) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}