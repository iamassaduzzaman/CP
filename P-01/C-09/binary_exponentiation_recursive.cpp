#include <bits/stdc++.h>
using namespace std;

int power(int x, long long n, int mod) { // O(log n)
    if(n == 0) return 1 % mod;
    int cur = power(x, n / 2, mod);
    if(n & 1) { // odd
        return 1LL * cur * cur % mod * x % mod;
    } 
    else {
        return  1LL * cur * cur % mod;
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 1e8 + 9; long long n = 1e18; int mod = 1e9 + 7;
    cout << power(x, n, mod) << '\n';
    return 0;
}
