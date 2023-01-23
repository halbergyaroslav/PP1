#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < x.length(); j++) if (x[j] == '0') k += 1;
    }
    cout << k;
}
