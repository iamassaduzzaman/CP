#include <bits/stdc++.h>
using namespace std;

int main() {
    bool found = false;
    for (int i = 1; i <= 1000000; i++) {
        cout << i << endl;
        string s;
        cin >> s;
        if (s == "<") {
            cout << "! " << i-1 << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "! 1000000" << endl;
    }
    return 0;
}