#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k > n) k = n;
    cout << (2 * n + k - 1) / k; 
}
