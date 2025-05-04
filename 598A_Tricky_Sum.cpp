/*                                                   A. Tricky Sum
                                                                                                        time limit per test 1 second
                                                                                                        memory limit per test 256 megabytes
                                                                                                        
In this problem you are to calculate the sum of all integers from 1 to n, but you should take all powers of two with minus in the sum.
For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.
Calculate the answer for t values of n.

Input
The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the number of values of n to be processed.
Each of next t lines contains a single integer n (1 ≤ n ≤ 109).

Output
Print the requested sum for each of t integers n given in the input.

Examples
Input:
2
4
1000000000
Output:
-4
499999998352516354
Note:
The answer for the first sample is explained in the statement.
                                                                                                                                    */
#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    // Calculate the sum of the first n integers
    long long totalSum = (n * (n + 1)) / 2;

    // Subtract the powers of 2
    long long power = 1;
    while (power <= n) {
        totalSum -= 2 * power;  // Subtract powers of 2 twice
        power *= 2;  // Move to the next power of 2
    }

    cout << totalSum << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

