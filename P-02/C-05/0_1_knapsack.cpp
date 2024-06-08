#include <bits/stdc++.h>
using namespace std;

const int N = 105, M = 1e5 + 9;
using ll = long long;
ll dp[N][M];
int w[N], v[N];
int n, s;
ll knapsack(int i, int weight) {
	if (i == n + 1) return 0;
	if (dp[i][weight] != -1) return dp[i][weight];
	ll ans = knapsack(i + 1, weight);
	if (weight + w[i] <= s) {
		ans = max(ans, knapsack(i + 1, weight + w[i]) + v[i]);
	}
	return dp[i][weight] = ans;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; ++i) {
    	cin >> w[i] >> v[i];
    }
    memset(dp, -1, sizeof dp);
    cout << knapsack(1, 0) << '\n';
	return 0;
}
