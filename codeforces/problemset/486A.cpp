#include <bits/stdc++.h>
using namespace std;

// long long clc(long long n) {
//     long long x = 0;
//     for(long long i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             x = x + i;
//         } else x = x - i;
//     };
//     return x;
// };

int main() {
    long long n;
    cin >> n;
    // result = clc(n)
    if (n % 2 == 0) {
        cout << n / 2;
    } else cout << -(n + 1) / 2;

    // cout << result;

    return 0;
}