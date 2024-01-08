#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N], n, k;

bool f(long long x) { // check if the maximum sum of a subarray is <= x
  for (int i = 1; i <= n; i++) {
    if (a[i] > x) return false;
  }
  long long sum = a[1];
  int cnt = 1;
  for (int i = 2; i <= n; i++) {
    sum += a[i];
    if (sum > x) {
      cnt++;
      sum = a[i];
    }
  }
  return cnt <= k;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  long long l = 1, r = 2e14, ans = 0;
  while (l <= r) {
    long long mid = (l + r) / 2;
    if (f(mid)) {
      ans = mid;
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  cout << ans << '\n';
  return 0;
}