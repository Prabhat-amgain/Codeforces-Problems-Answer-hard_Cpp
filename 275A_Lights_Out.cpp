/*                                                            A. Lights Out
                                                                                                    time limit per test 2 seconds
                                                                                                    memory limit per test256 megabytes
Lenny is playing a game on a 3 × 3 grid of lights. In the beginning of the game all lights are switched on.
Pressing any of the lights will toggle it and all side-adjacent lights. The goal of the game is to switch all the lights off.
We consider the toggling as follows: if the light was switched on then it will be switched off, if it was switched off then it will be switched on.
Lenny has spent some time playing with the grid and by now he has pressed each light a certain number of times.
Given the number of times each light is pressed, you have to print the current state of each light.

Input
The input consists of three rows. Each row contains three integers each between 0 to 100 inclusive.
The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.

Output
Print three lines, each containing three characters.
The j-th character of the i-th line is "1" if and only if the corresponding light is switched on, otherwise it's "0".

Examples
Input:
1 0 0
0 0 0
0 0 1
Output:
001
010
100
Input:
1 0 1
8 8 8
2 0 3
Output:
010
011
100
                                                                                                                                    */
#include <iostream>
using namespace std;

int main() {
    int press[3][3];

    // Read the input grid
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> press[i][j];

    int result[3][3];

    // Directions: up, down, left, right
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int total_presses = press[i][j];

            // Add neighbor presses
            for(int d = 0; d < 4; d++) {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if(ni >= 0 && ni < 3 && nj >= 0 && nj < 3) {
                    total_presses += press[ni][nj];
                }
            }

            // If total presses odd: light is OFF (0), else ON (1)
            if(total_presses % 2 == 1)
                result[i][j] = 0;
            else
                result[i][j] = 1;
        }
    }

    // Output the final state
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}

