#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int x = 0, n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i].find("++") != string::npos) {
            x += 1;
        } else {
            x -= 1; 
        }
    }

    cout << x << endl;
    return 0;
}




