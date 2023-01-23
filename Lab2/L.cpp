#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x = 1;
    cin >> n;
    while (x <= n) {
        cout << x << ' ';
        x *= 2;
    }
}
