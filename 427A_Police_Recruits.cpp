#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int officers = 0, untreated_crimes = 0;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {  
            if (officers > 0) {
                officers--;  
            } else {
                untreated_crimes++;  
            }
        } else {
            officers += event;  
        }
    }

    cout << untreated_crimes << '\n';
    return 0;
}



