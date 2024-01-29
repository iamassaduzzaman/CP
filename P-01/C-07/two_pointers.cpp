#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    vector<int> ans;
    int i = 0, j = 0;
    while (i < n and j < m) {
        if (a[i] < b[j]) {
            ans.push_back(a[i]);
            i++;
        } else {
            ans.push_back(b[j]);
            j++;
        }
    }
    while (i < n) {
        ans.push_back(a[i]);
        i++;
    }
    while (j < m) {
        ans.push_back(b[j]);
        j++;
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}