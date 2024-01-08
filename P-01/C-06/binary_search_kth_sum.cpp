#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N], b[N], n;
long long k;
// O(logn)
int get_count(int lim) {
  // count how many elements in b which are <= lim
  // b is sorted
  // int l = 1, r = n, ans = 0;
  // while (l <= r) {
  //   int mid = (l + r) / 2;
  //   if (b[mid] <= lim) {
  //     ans = mid;
  //     l = mid + 1;
  //   }
  //   else {
  //     r = mid - 1;
  //   }
  // }
  // return ans;
  return upper_bound(b + 1, b + n + 1, lim) - b - 1;
}
// O(n logn)
bool f(int x) { // is the answer (kth smallest sum) <= x ?
  long long cnt = 0;
  for (int i = 1; i <= n; i++) {
    // count how many j's are there such that
    // a[i] + b[j] <= x => b[j] <= x - a[i]
    cnt += get_count(x - a[i]);
  }
  return cnt >= k;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  sort(a + 1, a + n + 1);
  sort(b + 1, b + n + 1);
  // vector<int> v;
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     v.push_back(a[i] + b[j]);
  //   }
  // }
  // sort(v.begin(), v.end());
  // cout << v[k - 1] << '\n';
  int l = 0, r = 2e9, ans = 0;
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
  // O(30 * n logn)
  cout << ans << '\n';
  return 0;
}
// O(n log^2 n)

  