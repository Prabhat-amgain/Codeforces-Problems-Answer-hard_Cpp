#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    // Calculate the sum of the first n integers
    long long totalSum = (n * (n + 1)) / 2;

    // Subtract the powers of 2
    long long power = 1;
    while (power <= n) {
        totalSum -= 2 * power;  // Subtract powers of 2 twice
        power *= 2;  // Move to the next power of 2
    }

    cout << totalSum << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

