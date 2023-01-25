#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, ans = "YES";
    getline(cin, a);
    int array[10] = {}, c = 0;
    for (int i = 0; i < a.length(); i++) if (a[i] >= int('0') && a[i] <= '9') array[int(a[i]) - 48] += 1;
    for (int i = 0; i < 10; i++) if (array[i] != 0) c = array[i];
    for (int i = 0; i < 10; i++) if (array[i] != c && array[i] != 0) ans = "NO";
    cout << ans;
}
