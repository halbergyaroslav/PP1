#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int c1 = 0, c2 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (int(s[i]) >= int('a') && int(s[i]) <= int('z')) c1 += 1;
        else if (int(s[i]) >= int('A') && int(s[i]) <= int('Z')) c2 += 1;
    }
    cout << c1 << ' ' << c2;
}
