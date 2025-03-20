#include<bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    int y;
    cin >> y;
    
    while (true) {
        y++;
        set<int> digits;
        int temp = y;
        while (temp) {
            digits.insert(temp % 10);
            temp /= 10;
        }
        if (digits.size() == 4) {
            cout << y << endl;
          break;
        }
    }
    return 0;
}
