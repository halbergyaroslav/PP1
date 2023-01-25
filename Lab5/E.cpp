#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 0) sum_even += int(a[i] - int('0'));
        else sum_odd += int(a[i] - int('0'));
    }
    if (sum_odd == sum_even) cout << "YES";
    else cout << "NO";
}
