#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x = 1;
    cin >> n;
    for (int i = 2; i < sqrt(n) + 1; i++) if (n % i == 0) x = 0;
    if (x) cout << "Yes";
    else cout << "No";
}
