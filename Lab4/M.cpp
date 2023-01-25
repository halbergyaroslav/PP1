#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n, sum = 0;
    cin >> n;
    long long int array[n][n] = {};
    long long type_move = 1, row1 = 0, column1 = 0, row2 = 0, column2 = 0, k = 1;
    long long coor_x = -1, coor_y = 0;
    while (k <= n * n) {
        if (type_move == 1) {
            coor_x += 1;
            if (coor_x == n - 1 - column1) {
                type_move = 2;
                row1 += 1;
            }
        }
        else if (type_move == 2) {
            coor_y += 1;
            if (coor_y == n - 1 - row2) {
                type_move = 3;
                column1 += 1;
            }
        }
        else if (type_move == 3) {
            coor_x -= 1;
            if (coor_x == column2) {
                type_move = 4;
                row2 += 1;
            }
        }
        else {
            coor_y -= 1;
            if (coor_y == row1) {
                type_move = 1;
                column2 += 1;
            }
        }
        array[coor_y][coor_x] = k;
        k += 1;
    }
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) cout << array[i][j] << ' ';
        cout << endl;
    }
}
