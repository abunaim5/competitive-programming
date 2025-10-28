#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, x;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int count = 1, temp = 0;
        
        cin >> x;
        
        if (x <= 10) cout << count << endl << x << endl;
        else if (x % 10 == 0) {
            cout << count << endl << x << endl;
        } else {
            count++;
            temp = x - (x % 10);
            if (temp > 100 && temp % 100 == 0) {
                cout << count << endl << x % 10 << " " << temp << endl;
            }
            else if ( temp < 100 && temp % 10 == 0) {
                cout << count << endl << x % 10 << " " << temp << endl;
            } else {
                count++;
                temp -= temp % 100;
                
                if (temp < 1000 && temp % 100 == 0) {
                    cout << count << endl << x % 10 << " " << (x - (x % 10)) % 100 << " " << temp << endl;
                } else {
                    count++;
                    temp -= temp % 1000;

                    cout << count << endl << x % 10 << " " << (x - (x % 10)) % 100 << " " << (x - (x % 100)) % 1000 << " " << temp << endl;
                }
            
            } 
        }
    }
    return 0;
}