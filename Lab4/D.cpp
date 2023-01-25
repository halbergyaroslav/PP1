#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) {
            if (i == 0 && j != 0) cout << j << ' ';
            else if (i != 0 && j == 0) cout << i << ' ';
            else cout << i * j << ' ';
        }
        cout << endl;
    }
}
