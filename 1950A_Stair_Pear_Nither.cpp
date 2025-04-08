/*                                           A. Stair, Peak, or Neither?
                                                                                        time limit per test 1 second
                                                                                        memory limit per test 256 megabytes
You are given three digits a, b, and c. Determine whether they form a stair, a peak, or neither.
A stair satisfies the condition a<b<c.
A peak satisfies the condition a<b>c.
Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.
The only line of each test case contains three digits a, b, c (0≤a, b, c≤9).

Output
For each test case, output "STAIR" if the digits form a stair, "PEAK" if the digits form a peak, and "NONE" otherwise (output the strings without quotes).

Example
Input:

7
1 2 3
3 2 1
1 5 3
3 4 1
0 0 0
4 1 7
4 5 7

Output:
STAIR
NONE
PEAK
PEAK
NONE
NONE
STAIR
                                                                                                                                */
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
            cout << "STAIR" << endl;
        else if (a < b && b > c)
            cout << "PEAK" << endl;
        else
            cout << "NONE" << endl;
    }
    return 0;
}

