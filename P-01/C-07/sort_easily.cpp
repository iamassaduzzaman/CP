#include<bits/stdc++.h>
using namespace std;

// O(nlogn)
int32_t main() {
  int n;
  cin >> n;
  vector<array<int, 5>> v;
  for (int i = 0; i < n; i++) {
    int x, y, z, u, v;
    cin >> x >> y >> z >> u >> v;
    v.push_back({z, y, u, x, v});
  }
  sort(v.begin(), v.end());
  for (auto x: v) {
    cout << x[3] << ' ' << x[1] << ' ' << x[2] << ' ' << x[0] << ' ' << x[4] << '\n';
  }
  return 0;
}