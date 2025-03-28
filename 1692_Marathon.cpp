#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

       
        int count = (b > a) + (c > a) + (d > a);

        cout << count << endl;
    }

    return 0;
}

