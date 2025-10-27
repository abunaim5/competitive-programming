#include <bits/stdc++.h>
using namespace std;

int main() {
    int j;
    cin >> j;
    float p, op = 0, mix = 0;

    for (int i = 0; i < j; i++) {
        cin >> p;
        mix += (p / 100);
    }

    op = (mix / j) * 100;

    cout << op;

    return 0;
}