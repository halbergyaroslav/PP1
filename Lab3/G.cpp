#include <iostream>
using namespace std;

int main() {
    int n, x_max, x_min;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    x_max = array[0];
    x_min = array[0];
    for (int i = 0; i < n; i++) x_max = max(array[i], x_max);
    for (int i = 0; i < n; i++) x_min = min(array[i], x_min);
    for (int i = 0; i < n; i++) {
        if (array[i] == x_max) cout << x_min << ' ';
        else cout << array[i] << ' ';
    }
}
