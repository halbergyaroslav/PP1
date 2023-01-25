#include <iostream>
using namespace std;

int main() {
    long long int n, m, sum = 0;
    cin >> m >> n;
    long long int array[n][m];
    for (long long int j = 0; j < m; j++) {
        for (long long int i = 0; i < n; i++) cin >> array[i][j];
    }
    cout << "coordinates of min elements:\n";
    for (long long int i = 0; i < n; i++) {
        long long int j_cor = 0, el = 10001;
        for (long long int j = 0; j < m; j++) {
            if (array[i][j] < el) {
                j_cor = j;
                el = array[i][j];
            }
        }
        sum += el;
        cout << j_cor + 1 << ';' << i + 1 << endl; 
    }
    cout << "\nTheir sum:\n";
    cout << sum;
}
