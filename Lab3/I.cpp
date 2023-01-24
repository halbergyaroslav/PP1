#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int array[n];
    l -= 1;
    r -= 1;
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < l; i++) cout << array[i] << ' ';
    for (int i = r; i > l - 1; i--) cout << array[i] << ' ';
    for (int i = r + 1; i < n; i++) cout << array[i] << ' ';
}
