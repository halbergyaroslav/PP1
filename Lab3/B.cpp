#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++) if (array[i] > 0) k += 1;
    cout << k;
}
