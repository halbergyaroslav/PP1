#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    s += ' ';
    long long int sum = 0;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') word += s[i];
        else {
            for (int j = word.length() - 1; j > -1; j--) sum += (int(word[j] - 48)) * pow(10, word.length() - 1 - j);
            word = "";
        }
    }
    cout << sum;
}
