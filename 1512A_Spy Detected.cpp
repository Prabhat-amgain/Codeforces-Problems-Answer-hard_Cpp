#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int majority = (arr[0] == arr[1] || arr[0] == arr[2]) ? arr[0] : arr[1];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != majority) {
            cout << i + 1 << "\n"; 
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

