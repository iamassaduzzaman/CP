#include <bits/stdc++.h>
using namespace std;

int power(int x, int n, int mod) {
    int ans = 1 % mod;
    for(int i = 1; i <= n; ++i) {
        ans = 1LL * ans * x % mod;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 1e8 + 9, n = 1e6, mod = 1e9 + 7;
    cout << power(x, n, mod) << '\n';
    return 0;
}
