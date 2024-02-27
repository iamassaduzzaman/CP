#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9, mod = 1e9 + 7;

int fact[N], ifact[N];

int power(int x, int n) { // O(log n)
	int ans = 1;
	while(n > 0) {
		if(n & 1) {
			ans = 1LL * ans * x % mod;
		}
		x = 1LL * x * x % mod;
		n >>= 1;
	}
	return ans;
}

int inverse(int n) { // O(log mod)
	return power(n, mod - 2);
}

void prec() {
	fact[0] = 1;
	for(int i = 1; i < N; ++i) {
		fact[i] = 1LL * fact[i - 1] * i % mod;
	}
	ifact[N - 1] = inverse(fact[N - 1]);
	for(int i = N - 2; i >= 0; --i) {
		ifact[i] = 1LL * ifact[i + 1] * (i + 1) % mod; // 1 / i! = (1 / (i + 1)!) * (i + 1)
	}
}

int nCr(int n, int r) {
	if(n < r) return 0;
	return 1LL * fact[n] * ifact[r] % mod * ifact[n - r] % mod; 
}

int nPr(int n, int r) {
	if(n < r) return 0;
	return 1LL * fact[n] * ifact[n - r] % mod;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    prec();
    int q, cs = 0; cin >> q;
    while(q--) {
    	int n, r; cin >> n >> r;
    	cout << nCr(n, r) << '\n';
    }
    
	return 0;
}

// O(n + q)
