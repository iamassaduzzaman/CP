#include <bits/stdc++.h>
using namespace std;


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    
  int n; cin >> n; 
  int a[n + 1];
  vector<int> v(30, 0);
  for(int i = 1; i <= n; ++i) {
    cin >> a[i];
    for(int j = 0; j < 30; ++j) {
      if(a[i] >> j & 1) {
        v[j]++;
      }
    }
  }

  int sum = 0;
  for(int k = 0; k < 30; ++k) {
    sum += (v[k] * (1 << k));
  }
  cout << sum << '\n';
  return 0;
}
