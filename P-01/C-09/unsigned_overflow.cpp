#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

ull power(ull x, ull n) {
    ull ans = 1;
    while(n > 0) {
        if(n & 1) {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }

    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ull x = 1e9 + 7, n = 1e18;
    cout << power(x, n) << '\n'; // x^n mod 2^64
    return 0;
}