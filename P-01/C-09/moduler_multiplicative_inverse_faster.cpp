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

// m is prime (must)
int inverse(int a, int m) {
	return power(a, m - 2, m);
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    cout << inverse(2, 5) << '\n'; // 3
	return 0;
}
