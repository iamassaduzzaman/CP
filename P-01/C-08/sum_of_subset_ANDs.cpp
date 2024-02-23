#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    
  int n; cin >> n;
  int a[n + 1];
  for(int i = 1; i <= n; ++i) {
    cin >> a[i];
  }

  int ans = 0;

  // bruteforce
  // for(int mask = 1; mask < (1 << n); ++mask) {
  //   int A = (1 << 30) - 1;
  //   for(int i = 0; i < 30; ++i) {
  //     if(mask >> i & 1) {
  //       A &= a[i + 1];
  //     }
  //   }
  //   ans += A;
  // }


  // optimize
  int cnt[30][2];
  memset(cnt, 0, sizeof cnt);
  for(int i = 1; i <= n; ++i) {
    for(int j = 0; j < 30; ++j) {
      if(a[i] >> j & 1) {
        cnt[j][1]++;
      }
      else {
        cnt[j][0]++;
      }
    }
  }

  int pw[n + 1];
  pw[0] = 1;
  for(int i = 1; i <= n; ++i) {
    pw[i] = (pw[i - 1] * 2) % mod;
  }
  
  for(int k = 0; k < 30; ++k) {
    int contrib = pw[cnt[k][1]] - 1;
    ans += (contrib * (1 << k)) % mod;
    ans %= mod;
  }

  cout << ans << '\n';

  return 0;
}
