#include <bits/stdc++.h>
using namespace std;

int power(int x, int n, int mod) {
    if(mod == 1) return 0;
    vector<int> ans;
    vector<bool> visited(mod, false);
    ans.push_back(1); // x^0
    visited[1] = true;
    int cur = 1, st = 0;
    while(true) {
        cur = 1LL * cur * x % mod;
        if(visited[cur]) {
            st = find(ans.begin(), ans.end(), cur) - ans.begin();
            break;
        }
        visited[cur] = true;
        ans.push_back(cur);
    }

    int period = (int)ans.size() - st;
    if(n < st) return ans[n];
    n -= st;
    return ans[st + n % period];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 2, n = 9, mod = 40;
    cout << power(x, n, mod) << '\n';
    return 0;
}
