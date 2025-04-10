#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_set<char> seen;
        bool valid = true;
        char prev = '\0';

        for (char ch : s) {
            if (ch != prev) {
                if (seen.count(ch)) {
                    valid = false;
                    break;
                }
                seen.insert(ch);
            }
            prev = ch;
        }

        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}



