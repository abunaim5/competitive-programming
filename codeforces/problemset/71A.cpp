#include <stdio.h>

int main () {
    int T;
    char n[101];
    scanf("%d", &T);

    while (T--) {
        scanf("%s", n);
        int count = 0;
        char first = '\0', last = '\0';

        for (int i = 0; n[i] != '\0'; i++) {
            count++;
            first = n[0];
            last = n[i];
        }
        
        if (count > 10) {
            printf("%c%d%c\n", first, count - 2, last);
        } else printf("%s\n", n);
    }
    

    return 0;
}