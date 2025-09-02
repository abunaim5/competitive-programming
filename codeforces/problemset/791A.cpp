#include <bits/stdc++.h>
using namespace std;

int main () {
    int year = 0, a, b;
    scanf("%d%d", &a, &b);

    while (a <= b) {
        year++;
        a = a * 3;
        b = b * 2;
    }
    
    printf("%d", year);

    return 0;
}