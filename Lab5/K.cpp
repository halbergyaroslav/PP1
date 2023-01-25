#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++) if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u') c += 1;
    cout << c;
}
