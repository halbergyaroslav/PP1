#include <iostream>
using namespace std;

int main() {
    long long int n, c = -1000000001, i_pos = 0, j_pos = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long int x;
            cin >> x;
            if (x > c) {
                c = x;
                i_pos = i;
                j_pos = j;
            }
        }
    }
    cout << i_pos + 1 << ' ' << j_pos + 1;
}
