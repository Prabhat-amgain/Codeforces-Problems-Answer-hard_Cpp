/*                                         A. Divisibility Problem
                                                                                            time limit per test 1 second
                                                                                            memory limit per test 256 megabytes
You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1).
Your task is to find the minimum number of moves you need to do in order to make a divisible by b.
It is possible, that you have to make 0moves, as ais already divisible by b. You have to answer t independent test cases.

Output
For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b.

Example
Input:
5
10 4
13 9
100 13
123 456
92 46

Output:
2
5
4
333
0
                                                                                                                            */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;

        if (remainder == 0) {
            cout << 0 << endl;
        } else {
            cout << b - remainder << endl;
        }
    }

    return 0;
}


