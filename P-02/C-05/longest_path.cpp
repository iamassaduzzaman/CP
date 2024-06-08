#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int dp[N];
int n, m;
int f(int u) {
	if (dp[u] != -1) return dp[u];
	int ans = 0;
	for (auto v: g[u]) {
		ans = max(ans, f(v) + 1);
	}
	return dp[u] = ans;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin >> n >> m;
    while (m--) {
    	int u, v; cin >> u >> v;
    	g[u].push_back(v);
    }
    memset(dp, -1, sizeof dp);
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
    	ans = max(ans, f(i));
    }
    cout << ans << '\n';
	return 0;
}
