#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int power(int x, int n) {
    if(n == 0) return 1;
    int cur = power(x, n / 2);
    if(n & 1) {
        return 1LL * cur * cur % mod * x % mod;
    }
    else {
        return 1LL * cur * cur % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q; cin >> q;
    while(q--) {
        int a, b; cin >> a >> b;
        cout << power(a, b) << '\n';
    }

    return 0;
}
