#include<bits/stdc++.h>
using namespace std;

double f(double x) {
  return x * x  + sqrt(x);
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  double c; cin >> c;
  double l = 0, r = 1e5, ans;
  int iterations = 100; // running binary search for 100 iterations should be enough for this problem
   // while (r - l > 1e-7) { // another approach: until the l and r are 10^-7 difference apart
  while (iterations--) {
    double mid = (l + r) / 2;
    if (f(mid) >= c) {
      ans = mid;
      r = mid; // not mid +/- 1
    }
    else {
      l = mid; // not mid +/- 1
    }
  }
  cout << fixed << setprecision(10) << ans << '\n';
  return 0;
}