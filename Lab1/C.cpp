#include <iostream>
using namespace std;

int main() {
    int a, b = 0;
    cin >> a;
    b += (a % 2) * 8;
    a /= 2;
    b += (a % 2) * 4;
    a /= 2;
    b += (a % 2) * 2;
    a /= 2;
    b += a % 2;
    cout << b;
}
