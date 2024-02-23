#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int product = 1;
    int n; cin >> n;
    int a[n];
    for(int i = 1; i <= n; ++i) {
        product *= pow(a[i], 2 * n);
    }

    return 0;
}