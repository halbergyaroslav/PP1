#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == pow(floor(sqrt(n)), 2)) cout << "Yes";
    else cout << "No";
}
