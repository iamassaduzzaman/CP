#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // selection sort
  for (int i = 1; i < n; i++) {
    int min_index = i;
    for (int j = i + 1; j <= n; j++) {
      if (a[j] < a[min_index]) {
        min_index = j;
      }
    }
    swap(a[i], a[min_index]);
  }

  //output
  for (int i = 1; i <= n; i++) {
    cout << a[i] <<' ';
  }
  return 0;
}