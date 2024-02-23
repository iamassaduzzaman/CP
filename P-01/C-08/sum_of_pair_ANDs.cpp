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
  //     sum += (a[i] & a[j]);
  //   }
  // }

  // with bit law (n * logn)
  vector<int> cnt(30, 0);
  for(int i = 1; i <= n; ++i) {
    for(int j = 0; j < 30; ++j) {
      if(a[i] >> j & 1) {
        cnt[j]++;
      }
    }
  }
  
  for(int j = 0; j < 30; ++j) {
    long long contrib = 1ll * cnt[j] * cnt[j];
    sum += (contrib * (1 << j));
  }

  cout << sum << '\n';
  return 0;
}
