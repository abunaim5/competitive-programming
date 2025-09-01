#include <bits/stdc++.h>
using namespace std;

int main () {
    int upCount = 0, lowCount = 0;
    char s[101];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; s[j] != '\0'; j++) {
            if (s[j] >= 'A' && s[j] <= 'Z') upCount++;
            else if (s[j] >= 'a' && s[j] <= 'z') lowCount++;
        }

        if (upCount > lowCount) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i];
            else s[i] = s[i] - 32;
        } else if (upCount <= lowCount) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i];
            else s[i] = s[i] + 32;
        }
    }
    printf("%s\n", s);

    return 0;
}