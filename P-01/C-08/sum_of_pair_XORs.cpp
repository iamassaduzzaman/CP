#include <bits/stdc++.h>
using namespace std;


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    
  int n; cin >> n;
  int a[n + 1];
  for(int i = 1; i <= n; ++i) {
    cin >> a[i];
  }

  // bruteforce approach (n * n);
  long long sum = 0;
  // for(int i = 1; i <= n; ++i) {
  //   for(int j = 1; j <= n; ++j) {
  //     sum += (a[i] ^ a[j]);
  //   }
  // }

  // with bit law (n * logn)
  int cnt[30][2];
  memset(cnt, 0, sizeof(cnt));
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

  for(int i = 0; i < 30; ++i) {
    long long contribution = 1ll * cnt[i][0] * cnt[i][1] * 2;
    sum += (contribution * (1 << i));
  }

  cout << sum << '\n';
  return 0;
}
