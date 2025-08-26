#include <stdio.h>

int main () {
    int T, k, n[55], count = 0;
    scanf("%d%d", &T, &k);

    for (int i = 0; i < T; i++) {
            scanf("%d", &n[i]);
        }

        int cutoff = n[k - 1];
        
        for (int j = 0; j < T; j++) {
            if (n[j] >= cutoff && n[j] > 0) {
                count++;
            }
        }

    printf("%d\n", count);

    return 0;
}