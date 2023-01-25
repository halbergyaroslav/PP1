#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    int n, c = 0, d;
    cin >> s >> t >> n;
    for (int i = 0; i <= s.length() - t.length(); i++) {
        d = 0;
        for (int j = 0; j < t.length(); j++) if (t[j] == s[i + j]) d += 1;
        if (d == t.length()) c += 1;
    }
    if (c >= n) cout << "YES";
    else cout << "NO";
}
