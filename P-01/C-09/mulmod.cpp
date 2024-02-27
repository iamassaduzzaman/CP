#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// ll mulmod(ll x, ll y, ll mod) {
//     ll ans = 0;
//     while(y > 0) {
//         if(y & 1) {
//             ans = (ans + x) % mod;
//         }
//         x = (x + x) % mod;
//         y >>= 1;
//     }

//     return ans;
// }

// using __int128
ll mulmod(ll x, ll y, ll mod) { 
    return (ll)((__int128)x * y % mod); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x = (ll)1e15 + 2, y = (ll)1e13 + 4, mod = (ll)1e18 + 7;
    cout << mulmod(x, y, mod) << '\n';
    return 0; 
}