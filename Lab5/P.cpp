#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'z') cout << 'a';
        else cout << char(int(s[i]) + 1);
    }
}
