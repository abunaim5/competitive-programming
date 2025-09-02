#include <bits/stdc++.h>
using namespace std;

int strCmp (char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

int main () {
    char first[105], second[105];
    scanf("%s%s", first, second);

    for (int i = 0; first[i] != '\0'; i++) {
        if (first[i] >= 'A' && first[i] <= 'Z') {
            first[i] = first[i] + 32;
        }
    }

    for (int j = 0; second[j] != '\0'; j++) {
        if (second[j] >= 'A' && second[j] <= 'Z') {
            second[j] = second[j] + 32;
        }
    }

    int res = strCmp(first, second);

    if (res < 0) printf("%d\n", -1);
    else if (res > 0) printf("%d\n", 1);
    else printf("%d\n", 0);

    return 0;
}