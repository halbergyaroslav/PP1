#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    k = array[0];
    for (int i = 0; i < n; i++) k = max(k, array[i]);
    cout << k;
}
