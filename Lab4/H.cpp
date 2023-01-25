#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 10001, index = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sum += x;
        }
        if (ans > sum) {
            ans = sum;
            index = i;
        }
    }
    cout << index + 1;
}
