#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> cnt(30, 0);
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      for (int j = 0; j < 30; j++) {
        if (a[i] >> j & 1) {
          cnt[j]++;
        } 
      }
    }
    for (int k = 1; k <= n; k++) {
      bool ok = true;
      for (int j = 0; j < 30; j++) {
        if (cnt[j] % k != 0) {
          ok = false;
        }
      }
      if (ok) cout << k << ' ';
    }
    cout << '\n';
  }
  return 0;
}