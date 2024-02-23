#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    
  int n; cin >> n;
  int a[n + 1];
  for(int i =  1; i <= n; ++i) {
    cin >> a[i];
  }

  long long sum = 0;

  int cnt[30][2];
  memset(cnt, 0, sizeof cnt);
  for(int i = 1; i <= n; ++i) {
    for(int j = 0; j <= n; ++j) {
      if(a[i] >> j & 1) {
        cnt[j][1]++;
      }
      else {
        cnt[j][0]++;
      }
    }
  }

  // pow
  long long pw = 1;
  for(int i = 1; i < n; ++i) {
    pw *= 2 % mod;
  }

  for(int k = 0; k < 30; ++k) {
    if(!cnt[k][1]) continue;
    // long long contrib = (1ll * cnt[k][0] * cnt[k][1]) - 1;
    long long contrib = pw; // 2^(n - 1)
    sum += 1ll * (contrib * (1 << k)) % mod;
    sum %= mod;
  }

  cout << sum << '\n';
  return 0;
}
