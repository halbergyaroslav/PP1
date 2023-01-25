#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n, m;
    cin >> n >> m;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) {
            long long int x;
            cin >> x;
            if (x == pow(floor(sqrt(x)), 2)) cout << sqrt(x) << ' ';
            else cout << x << ' ';
        }
        cout << endl;
    }
}
