/* 


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



