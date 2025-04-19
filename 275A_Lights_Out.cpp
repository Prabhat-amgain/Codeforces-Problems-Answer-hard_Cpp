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

