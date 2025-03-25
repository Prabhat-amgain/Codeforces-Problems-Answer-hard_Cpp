#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  
    cin >> n;  
    set<int> pl;  
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        pl.insert(level);
    }
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        pl.insert(level);
    }

    if ((int)pl.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

}


