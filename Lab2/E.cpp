#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n == k) cout << 0;
    else if (n > k) cout << 1;
    else cout << 2;
}
