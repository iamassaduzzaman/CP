#include<bits/stdc++.h>
using namespace std;

bool query(int x) {
  cout << x << endl;
  string s; cin >> s;
  return s == "yes";
}
bool is_prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(0);
  if (query(2 * 2) or query(3 * 3) or query(5 * 5) or query(7 * 7)) {
    cout << "composite" << endl;
    return 0;
  }
  int prime_divs = 0;
  int cnt = 0;
  for (int i = 2; i <= 50; i++) {
    if (is_prime(i)) {
      cnt++;
      prime_divs += query(i);
    }
  }
  // cout << cnt << '\n'; // cnt = 15
  if (prime_divs <= 1) {
    cout << "prime" << endl;
  }
  else {
    cout << "composite" << endl;
  }
  return 0;
}