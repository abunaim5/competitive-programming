#include <bits/stdc++.h>
using namespace std;

int main () {
    int k, n, w, total = 0, borrow = 0;
    scanf("%d%d%d", &k, &n, &w);

    for (int i = 1; i <= w; i++) {
        total += i * k;
    }

    if (total <= n) printf("%d", borrow);
    else printf("%d", total - n);

    return 0;
}