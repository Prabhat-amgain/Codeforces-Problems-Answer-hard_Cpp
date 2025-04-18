#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

