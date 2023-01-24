#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++) {
        int x = i, y = array[i];
        for (int j = i + 1; j < n; j++) {
            if (array[j] > y) {
                y = array[j];
                x = j;
            }
        }
        int a = array[i];
        array[i] = y;
        array[x] = a;
    }
    for (int i = 0; i < n; i++) cout << array[i] << ' ';
}
