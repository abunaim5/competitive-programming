#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[101], t[101];
    bool isTrans;
    int start, end, sSize = 0, tSize = 0;
    cin >> s >> t;

    while (t[tSize] != '\0') tSize++;
    while (s[sSize] != '\0') sSize++;

    end = tSize - 1;

    for (start = 0; start < tSize; start++) {
        // reverse[start] = t[end];
        if (sSize != tSize) {
            isTrans = false;
            break;
        }
        else if (s[start] == t[end]) {
            isTrans = true;
            // cout << s[end];
            end--;
        } else {
            isTrans = false;
            break;
        }
    }

    // reverse[start] = '\0';

    if (isTrans) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}