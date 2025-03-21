#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> arr(n * 2);

    for (int i = 0; i < n * 2; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n * 2; i += 2) {
        int p = arr[i];
        int q = arr[i + 1];
        if (q - p >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}


