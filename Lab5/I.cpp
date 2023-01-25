#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int array1[26] = {}, array2[26] = {}, c = 0;
    for (int i = 0; i < s.length(); i++) array1[int(s[i]) - int('a')] += 1;
    for (int i = 0; i < t.length(); i++) array2[int(t[i]) - int('a')] += 1;
    for (int i = 0; i < 26; i++) if (array1[i] == array2[i]) c += 1;
    if (c == 26) cout << "YES";
    else cout << "NO";
}
