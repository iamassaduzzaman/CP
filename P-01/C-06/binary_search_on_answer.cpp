#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N], n, k;

bool f(int x) { // check if the median can be >= x
  long long sum = 0;
  for (int i = n / 2 + 1; i <= n; i++) {
    if (a[i] < x) sum += x - a[i];
  }
  return sum <= k;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  int l = 1, r = 2e9, ans = 0;
  while (l <= r) {
    int mid = l + (r - l) / 2; // using (l + r) / 2 can cause overflow here as r can be 2e9
    if (f(mid)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << '\n';
  return 0;
}