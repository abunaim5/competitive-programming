#include <bits/stdc++.h>
using namespace std;

int main () {
    int T, a, b, c, d;
    scanf("%d", &T);

    while (T--) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int count = 0;
        
        if (a < b) count++;
        if (a < c) count++;
        if (a < d) count++;

        printf("%d\n", count);
    }

    return 0;
}