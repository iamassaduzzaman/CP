#include<bits/stdc++.h>
using namespace std;

int n, k;
bool f(int x) { // check if the number of values from to 1 to x that are not divisible by n is >= k
  int not_divisible = x - x / n;
  return not_divisible >= k;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;
  while (tc--) {
    cin >> n >> k;
    int l = 1, r = 2e9, ans = 0;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (f(mid)) {
        ans = mid;
        r = mid - 1;
      }
      else {
        l = mid + 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}