#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n, sum = 0;
    cin >> n;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) {
            long long int x;
            cin >> x;
            if (i + j == n - 1) sum += x;
        }
    }
    cout << sum;
}
