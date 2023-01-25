#include <iostream>
using namespace std;

int main() {
    long long int n, m, c = 0;
    cin >> n >> m;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) {
            long long x;
            cin >> x;
            if (x < 0) c += 1;
        }
    }
    cout << c;
}
