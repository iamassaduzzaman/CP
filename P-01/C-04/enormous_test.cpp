#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while(n--){
      int a, b; cin >> a >> b;
      long long val = a * b;
      cout << val << '\n';
    }
    return 0;
}