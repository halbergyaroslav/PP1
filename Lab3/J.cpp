#include <iostream>
using namespace std;

int main() {
    int n, index = -1, c = 0;
    long long int t;
    cin >> n >> t;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++) {
        if (array[i] == t) index = i;
        if (array[i] < t) c += 1;
    }
    if (index == -1) cout << c;
    else cout << index + 1;
}
