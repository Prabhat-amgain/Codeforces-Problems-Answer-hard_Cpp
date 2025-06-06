/*                                                                  A. Medium Number
                                                                                                             time limit per test 1 second
                                                                                                             memory limit per test 256 megabytes
Given three distinct integers a, b, and c, find the medium number between all of them.
The medium number is the number that is neither the minimum nor the maximum of the given three numbers.
For example, the median of 5,2,6 is 5, since the minimum is 2 and the maximum is 6.

Input
The first line contains a single integer t (1≤t≤6840) — the number of test cases.
The description of each test case consists of three distinct integers a, b, c (1≤a,b,c≤20).

Output
For each test case, output a single integer — the medium number of the three numbers.

Example
Input:
9
5 2 6
14 3 4
20 2 1
1 2 3
11 19 12
10 8 20
6 20 3
4 1 3
19 8 4
Output:
5
4
2
2
12
10
6
3
8
                                                                                                               */
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << arr[1] << endl; // the medium number
    }
    return 0;
}


