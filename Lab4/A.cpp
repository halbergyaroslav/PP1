#include <iostream>
using namespace std;

int main() {
    long long int n, c = -100001;
    cin >> n;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) {
            long long x;
            cin >> x;
            c = max(c, x);
        }
    }
    cout << c;
}
