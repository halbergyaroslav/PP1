#include <iostream>
using namespace std;

int main() {
    long long int n, m;
    cin >> n >> m;
    long long int array[n][m];
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) cin >> array[i][j];
    }
    for (long long int i = 0; i < n; i++) {
        long long int sum = 0;
        for (long long int j = 0; j < m; j++) sum += array[i][j];
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }
    for (long long int j = 0; j < m; j++) {
        long long int sum = 0;
        for (long long int i = 0; i < n; i++) sum += array[i][j];
        cout << "The sum of column number " << j + 1 << " is " << sum << endl;
    }
}
