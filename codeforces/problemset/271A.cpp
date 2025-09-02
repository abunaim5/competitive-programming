#include <bits/stdc++.h>
using namespace std;

int main () {
    int T = 1, y;
    scanf("%d", &y);
    char next[5];
    
    while (T != 0) {
        y += 1;
        T = 0;
        sprintf(next, "%d", y);
        for (int i = 0; next[i] != '\0'; i++) {
            for (int j = i + 1; next[j] != '\0'; j++) {
                if (next[i] == next[j]) {
                    T = 1;
                    break;
                }
            }
        }
    }
    
    printf("%d", y);

    return 0;
}