#include <iostream>
using namespace std;

int main() {
    int n, k, index = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    k = array[0];
    for (int i = 0; i < n; i++) if (array[i] > k) {
        index = i;
        k = array[i];
    }
    cout << index + 1;
}
