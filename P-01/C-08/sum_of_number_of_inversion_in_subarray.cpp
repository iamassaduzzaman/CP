#include<bits/stdc++.h>
using namespace std;

const int N = 2e3 + 9;
int a[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (a[i] > a[j]) {
        ans += i * (n - j + 1);
      }
    }
  }
  cout << ans << '\n';
  return 0;
}