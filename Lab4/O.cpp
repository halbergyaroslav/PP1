#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n, c = 0, el;
    cin >> n;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) {
            long long int x;
            cin >> x;
            if (i == 0 && j == 0) el = x;
            if (i == j) {
                if (x > el) {
                    el = x;
                    c = i;
                }
            }
        }
    }
    cout << "Maximum element is: " << el << " with coordinates: " << c + 1 << ';' << c + 1;
}
