#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char str = 'o', newStr[2025];

    for (int i = 0; i < n; i++) {
        newStr[i] = str;
    }

    newStr[n] = '\0';

    printf("L%sng\n", newStr);

    return 0;
}