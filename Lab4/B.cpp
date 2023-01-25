#include <iostream>
using namespace std;

int main() {
    long long int n, c = -100001, d, e = 0, b = -100001;
    cin >> n;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) {
            long long x;
            cin >> x;
            if (i == 0 && j == 0) d = x;
            if (x != d) e = 1;
            if (x > c) {
                b = c;
                c = x;
            }
            else if (x > b && x < c) b = x;
        }
    }
    if (e == 1) cout << b;
    else cout << 0;
}
