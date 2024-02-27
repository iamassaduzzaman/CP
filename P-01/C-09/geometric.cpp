#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int power(int x, ll n, int mod) {
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

int solve(int a, ll x, int m) {
	if(x == 0) {
		return 1 % m;
	}

	if(x & 1) {
		ll p = x / 2;
		int cur = solve(a, p, m);
		int ans = (cur + 1LL * power(a, p + 1, m) * cur % m) % m;
		return ans;
	}
	else {
		int ans = (solve(a, x - 1, m) + power(a, x, m)) % m;
		return ans;
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int a, m; ll x; cin >> a >> x >> m;
    int ans = solve(a, x - 1, m);
    cout << ans << '\n';
	return 0;
}
