#include <bits/stdc++.h>
using namespace std;

int power(int x, long long n, int mod) {
    x %= mod;
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 1e8 + 9; long long n = 1e18; int mod = 1e9 + 7;
    cout << power(x, n, mod) << '\n';
    return 0;
}