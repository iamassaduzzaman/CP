#include <bits/stdc++.h>
using namespace std;


int power(int x, int n, int mod) {
    int ans = 1 % mod;
    while(n > 0) {
        if(n & 1) {
             ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int main() {
    int n; cin >> n;
    int mod = 1e9 + 7;
    while(n--) {
        int a, b, c; cin >> a >> b >> c;
        int z = power(b, c, mod - 1);
        int ans = power(a, z, mod);
        cout << ans << '\n';
    }
    return 0;
}