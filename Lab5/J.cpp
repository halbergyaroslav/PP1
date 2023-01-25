#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    s += "0";
    for (int i = s.length() - 1; i > -1; i--) t += s[i];
    int c = 0;
    for (int i = 1; i < s.length() - 1; i++) if (s[i] == t[i]) c += 1;
    if (c == s.length() - 2) cout << "YES";
    else cout << "NO";
}
