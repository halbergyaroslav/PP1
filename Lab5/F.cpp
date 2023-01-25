#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int l, r;
    cin >> a >> l >> r;
    for (int i = l; i < r + 1; i++) cout << a[i];
}
