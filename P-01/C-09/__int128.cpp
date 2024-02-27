#include<bits/stdc++.h>
using namespace std;

__int128 read() {
  string s; cin >> s;
  __int128 ans = 0;
  for (int i = 0; i < s.size(); i++) {
    ans = ans * 10 + (s[i] - '0');
  }
  return ans;
}

string to_string(__int128 x) {
  string s;
  while (x > 0) {
    s += (char)(x % 10 + '0');
    x /= 10;
  }
  reverse(s.begin(), s.end());
  return s;
}

void write(__int128 x) {
  cout << to_string(x) << '\n';
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  __int128 x = read(), y = read();
  __int128 ans = x * y;
  ans += 2;
  write(ans);
  return 0;
}