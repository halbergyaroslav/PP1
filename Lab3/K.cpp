#include <iostream>
using namespace std;

int main() {
    int n, k = 0, error = 0;
    cin >> n;
    int array[n];
    int arr[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++) {
        error = 0;
        for (int j = 0; j < k; j++) if (array[i] == arr[j]) error = 1;
        if (error == 0) {
            arr[k] = array[i];
            k += 1;
        }
    }
    for (int i = 0; i < k; i++) cout << arr[i] << ' ';
}
