#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int x;
    int y;
    int result = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 ; j++) {
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
                break;
            }
        }
    }
    int xmove = 2 - x;
    int abs_x = abs(xmove);
    int ymove = 2 - y;
    int abs_y = abs(ymove);
    result = abs_x + abs_y;
    cout << result;
}