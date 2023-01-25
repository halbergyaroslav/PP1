#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int c = 0;
    if (a.length() != b.length()) cout << "NO";
    else {
        for (int i = 0; i < a.length(); i++) if (a[i] == b[i]) c += 1;
        if (c == a.length()) cout << "YES";
        else cout << "NO";
    }
}
