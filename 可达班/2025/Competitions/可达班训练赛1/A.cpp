#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char c = 'A' + (2 + i + j) % 26;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}