/*                                        A. Spy Detected!
                                                                                                    time limit per test 2 seconds
                                                                                                    memory limit per test 256 megabytes
You are given an array a consisting of n (n≥3) positive integers. It is known that in this array,
all the numbers except one are the same (for example, in the array [4,11,4,4] all numbers except one are equal to 4).
Print the index of the element that does not equal others. The numbers in the array are numbered from one.

Input
The first line contains a single integer t (1≤t≤100). Then t test cases follow.
The first line of each test case contains a single integer n (3≤n≤100) — the length of the array a
The second line of each test case contains n integers a1,a2,…,an (1≤ai≤100).
It is guaranteed that all the numbers except one in the a array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal to others.
Example
Input:
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
Output:
2
1
5
3
                                                                                                                                    */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int majority = (arr[0] == arr[1] || arr[0] == arr[2]) ? arr[0] : arr[1];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != majority) {
            cout << i + 1 << "\n"; 
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

