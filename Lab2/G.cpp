#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        k = max(k, x);
    }
    cout << k;
}
