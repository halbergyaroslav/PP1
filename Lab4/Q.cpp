#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n, sum = 0;
    cin >> n;
    for (long long int i = 1; i < n + 1; i++) {
        for (long long int j = 0; j < n - i; j++) cout << '.';
        for (long long int j = 0; j < 2 * i - 1; j++) cout << '*';
        for (long long int j = 0; j < n - i; j++) cout << '.';
        cout << endl;
    }
}
