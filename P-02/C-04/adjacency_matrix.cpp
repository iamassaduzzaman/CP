#include<bits/stdc++.h>
using namespace std;

const int N = 105;
int g[N][N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u][v] = 1;
    g[v][u] = 1;
  }
  if (g[4][2]) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}