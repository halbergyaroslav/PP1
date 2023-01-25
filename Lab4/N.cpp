#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long int n) {
    for (int i = 2; i < sqrt(n) + 1; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    long long int n;
    cin >> n;
    cout << "2 is prime\n";
    for (long long int i = 3; i < n + 1; i++) {
        if (is_prime(i)) cout << i << " is prime\n";
    }
}
