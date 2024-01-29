#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
int d[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
      d[j]++;
    }
  }
  vector<int> primes;
  for (int i = 1; i < 100; i++) {
    if (d[i] == 2) {
      primes.push_back(i);
    }
  }
  cout << primes.size() << '\n';
  for(auto val: primes){
    cout << val << ' ';
  }
  return 0;
}