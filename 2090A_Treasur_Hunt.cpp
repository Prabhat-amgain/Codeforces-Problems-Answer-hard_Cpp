#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long depth = 0;
        long long total = 0;
        long long full_cycles = (a / (x + y));
        total = full_cycles * (x + y);

        // After full cycles, check who digs last
        if (total + x > a + 0.5) {
            cout << "NO" << endl;  // Little B digs it up
        } else if (total + x + y > a + 0.5) {
            cout << "YES" << endl;  // Little K digs it up
        } else {
            // If still not enough, another full cycle — B starts again
            cout << "NO" << endl;
        }
    }
    return 0;
}

