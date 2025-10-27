#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, h, ph, w = 0;
    cin >> p >> h;
    
    for (int i = 0; i < p; i++) {
        cin >> ph;
        if (ph > h) w += 2;
        else w++;
    }

    cout << w;

    return 0;
}