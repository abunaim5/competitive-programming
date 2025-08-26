#include <stdio.h>

int main () {
    int m, n, max = 0;
    scanf("%d%d", &m, &n);

    if (m > 0 && m <= n) {
        max = (m * n) / 2;
    }

    printf("%d\n", max);

    return 0;
}