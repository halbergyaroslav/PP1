#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++) cin >> arr[i];
    int a = 0, b = 0;
    while (a + b < n + m) {
        if (array[a] <= arr[b] && a < n) {
            cout << array[a] << ' ';
            a += 1;
        }
        else if (array[a] >= arr[b] && b < m) {
            cout << arr[b] << ' ';
            b += 1;
        }
        else if (a == n) {
            cout << arr[b] << ' ';
            b += 1;
        }
        else if (b == m) {
            cout << array[a] << ' ';
            a += 1;
        }
    }
}
