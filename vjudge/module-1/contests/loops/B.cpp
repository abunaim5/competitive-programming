#include <stdio.h>

int main() {
    int t, n, m;
    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &n, &m);
        int total = 0;
        if(n > m) {
            total = n - m;
            printf("%d\n", total);
            
        } else printf("%d\n", total);
    }    
    
    return 0;
}