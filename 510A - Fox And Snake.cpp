/*A. Fox And Snake
time limit per test2 seconds
memory limit per test256 megabytes
Fox Ciel starts to learn programming. The first task is drawing a fox! However, that turns out to be too hard for a beginner, so she decides to draw a snake instead.

A snake is a pattern on a n by m table. Denote c-th cell of r-th row as (r, c). The tail of the snake is located at (1, 1), then it's body extends to (1, m), then goes down 2 rows to (3, m), then goes left to (3, 1) and so on.

Your task is to draw this snake for Fox Ciel: the empty cells should be represented as dot characters ('.') and the snake cells should be filled with number signs ('#').

Consider sample tests in order to understand the snake pattern.

Input
The only line contains two integers: n and m (3 ≤ n, m ≤ 50).

n is an odd number.

Output
Output n lines. Each line should contain a string consisting of m characters. Do not output spaces.

Examples
InputCopy
3 3
OutputCopy
###
..#
###
InputCopy
3 4
OutputCopy
####
...#
####
InputCopy
5 3
OutputCopy
###
..#
###
#..
###
InputCopy
9 9
OutputCopy
#########
........#
#########
#........
#########
........#
#########
#........
#########


	*/
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            // Full row of #
            for (int j = 0; j < m; ++j) cout << '#';
        } else if ((i / 2) % 2 == 1) {
            // # at the end
            for (int j = 0; j < m - 1; ++j) cout << '.';
            cout << '#';
        } else {
            // # at the start
            cout << '#';
            for (int j = 1; j < m; ++j) cout << '.';
        }
        cout << '\n';
    }

    return 0;
}




