#include <stdio.h>

int main () {
    int T;
    char str[10];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int b = 6, h = 0, count = 0;

        for (int j = 0; j < b; j++) {
            scanf(" %c", &str[j]);
        }
        str[b] = '\0';

        for (int k = 0; str[k] != '\0'; k++) {
            if (str[k] != 'W') {
                count = 0;
                continue;
            } else {
                count++;
                if (count >= 3) {
                    h++;
                };
            }
        }

        if (h >= 1) printf("Yes\n");
        else printf("No\n");
    }
    
    return 0;
}