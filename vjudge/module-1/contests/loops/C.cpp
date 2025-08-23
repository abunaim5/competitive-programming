#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &x, &y);
        int donate = 0;
        if(x != y) {
            if (x > y) {
                donate = x - y;
            } else donate = y - x;
            printf("%d\n", donate);
            
        } else printf("%d\n", donate);
    }    
    
    return 0;
}