#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        int moves = diff / 10;
        if(diff % 10 != 0) {
            moves += 1;
        }
        cout << moves << endl;
    }
    return 0;
}

