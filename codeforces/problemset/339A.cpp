#include <stdio.h>

int main () {
    char s[150];
    
    while (scanf("%s", s) == 1) {
        for (int j = 0; s[j] != '\0'; j++) {
            if (s[j] != '+') {
                for (int k = j + 1; s[k] != '\0'; k++) {
                    if (s[k] != '+') {
                        if (s[j] > s[k]) {
                            char temp;
                            temp = s[j];
                            s[j] = s[k];
                            s[k] = temp;
                        }
                    }
                }
            }
        }
        printf("%s\n", s);
    }

    return 0;
}