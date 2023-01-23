#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 10 == 7) k += 1;
    }
    cout << k;
}
