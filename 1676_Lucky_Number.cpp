#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int sm1 = 0, sm2 = 0;  
        
        for (int i = 0; i < 3; i++) sm1 += (s[i] - '0');
        for (int i = 3; i < 6; i++) sm2 += (s[i] - '0');
        
        cout << (sm1 == sm2 ? "YES\n" : "NO\n");
    }
    
    return 0;
}
