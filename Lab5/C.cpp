#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, s, t, ans = "NO";
    getline(cin, a);
    int c = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != ' ') s += a[i];
        else {
            c = i + 1;
            break;
        }
    }
    for (int i = c; i < a.length(); i++) t += a[i];
    for (int i = 0; i <= (s.length() - t.length()); i++) {
        c = 0;
        for (int j = 0; j < t.length(); j++) if (t[j] == s[i + j]) c += 1;
        if (c == t.length()) ans = "YES";
    }
    cout << ans;
}
