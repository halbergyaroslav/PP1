#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    for (int i = a.length() - 1; i > -1; i--) b += a[i];
    int c = 0;
    for (int i = 0; i < a.length(); i++) if (a[i] == b[i]) c += 1;
    if (c == a.length()) cout << "YES";
    else cout << "NO";
}
