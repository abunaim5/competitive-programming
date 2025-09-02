#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, count = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
            break;
        }
    }
    
    printf("%d", count);

    return 0;
}