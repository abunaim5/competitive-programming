#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int x[n], count = 0;

    for (int i = 1; i <= n; i++) scanf("%d", &x[i]);

    for (int j = 1; j <= n; j++) {
        if (x[j] != x[j + 1]) count++;
    }

    printf("%d\n", count);

    return 0;
}