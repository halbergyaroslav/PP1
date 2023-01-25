#include <iostream>
using namespace std;

int main() {
    long long int n, m;
    cin >> n >> m;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) {
            long long int x;
            cin >> x;
            if ((i + j) % 2 == 0) cout << x + 1 << ' ';
            else cout << x - 1 << ' ';
        }
        cout << endl;
    }
}
