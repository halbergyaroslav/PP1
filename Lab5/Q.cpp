#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t, ans = "YES", a = "";
    cin >> t >> s;
    int c = s.length() / t.length();
    for (int i = 0; i < c; i++) for (int j = 0; j < t.length(); j++) a += t[j];
    if (c * t.length() != s.length()) ans = "NO";
    else for (int i = 0; i < s.length(); i++) if (s[i] != a[i]) ans = "NO";
    cout << ans;
}
