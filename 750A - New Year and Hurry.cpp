#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int time_available = 240 - k;
    int time_spent = 0;
    int problems_solved = 0;

    for (int i = 1; i <= n; ++i) {
        time_spent += 5 * i;
        if (time_spent > time_available)
            break;
        ++problems_solved;
    }

    cout << problems_solved << endl;
    return 0;
}



