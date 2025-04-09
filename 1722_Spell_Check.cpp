#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "Timur";
    sort(target.begin(), target.end());  // Sorted "Timur"

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());
        if (s == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


