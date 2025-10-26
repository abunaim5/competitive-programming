#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, a = 0, d = 0;
    char s[100001];
    cin >> T >> s;

    for (int i = 0; i < T; i++) {
        if (s[i] == 'A') a++;
        else d++;
    }

    if (a > d) cout << "Anton";
    else if (a < d) cout << "Danik";
    else cout << "Friendship";

    return 0;
}