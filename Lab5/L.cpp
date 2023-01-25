#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 1; i < s.length(); i++) if (int(s[i]) >= int(s[i - 1])) c += 1;
    if (c == s.length() - 1) cout << "YES";
    else cout << "NO";
}
