#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int c;
    for (int i = 0; i < s.length(); i++) {
        if (int(s[i]) >= int('a') && int(s[i]) <= int('z')) {
            c = int(s[i]);
            s[i] = char(c - 32);
        }
    }
    cout << s;
}
