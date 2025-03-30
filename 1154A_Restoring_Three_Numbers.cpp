/*                                                   A. Restoring Three Numbers
                                                                                     time limit per test1 second
                                                                                     memory limit per test256 megabytes
Polycarp has guessed three positive integers a, b and c.
He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — 
their pairwise sums (three numbers) and sum of all three numbers (one number).
So, there are four numbers on a board in random order: a+b, a+c, b+c and a+b+c.
You have to guess three numbers a, b and c using given numbers. Print three guessed integers in any order.
Pay attention that some given numbers a, b and c can be equal (it is also possible that a=b=c).
Input
The only line of the input contains four positive integers x1,x2,x3,x4 (2≤xi≤109) —
numbers written on a board in random order. It is guaranteed that the answer exists for the given number x1,x2,x3,x4

Output
Print such positive integers a, b and c that four numbers written on a board are values a+b, a+c, b+c and a+b+c written in some order.
Print a, b and c in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.

Examples
Input:
3 6 5 4
Output:
2 1 3
Input:
40 40 40 60
OutputCopy
20 20 20
Input:
201 101 101 200
Output:
1 100 100
                                                                                                               */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers(4);
    
    // Input four numbers
    for (int i = 0; i < 4; i++) {
        cin >> numbers[i];
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Extract a, b, and c
    int a = numbers[3] - numbers[2];
    int b = numbers[3] - numbers[1];
    int c = numbers[3] - numbers[0];

    // Print the result
    cout << a << " " << b << " " << c << endl;

    return 0;
}



