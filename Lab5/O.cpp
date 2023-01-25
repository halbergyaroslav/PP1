#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++) c = max(c, int(s[i]));
    cout << char(c);
}
