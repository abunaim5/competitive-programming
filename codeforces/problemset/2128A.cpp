#include <stdio.h>

int main () {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n, c;
        scanf("%d%d", &n, &c);
        long long a[n];
        int m = 0, saved = 0;

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[j] < a[k]) {
                    long long temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }

        for (int x = 0; x < n; x++) {
            if ((1LL << m) * a[x] <= c) {
                saved++;
                m++;
            }            
        }
        printf("%d\n", n - saved);
    }
    
    return 0;
}