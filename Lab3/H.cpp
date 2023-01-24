#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    long long int sum = 0;
    cin >> n >> l >> r;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++) if (i >= l - 1 && i <= r - 1) sum += array[i];
    cout << sum;
}
