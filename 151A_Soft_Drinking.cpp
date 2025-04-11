#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;

    int toasts_by_drink = total_drink / nl;
    int toasts_by_limes = total_slices;
    int toasts_by_salt = p / np;

    int total_toasts = min({toasts_by_drink, toasts_by_limes, toasts_by_salt});

    cout << total_toasts / n << endl;

    return 0;
}



