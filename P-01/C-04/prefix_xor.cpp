#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    int a[n+1];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    long long prefix_xor[n+1];
    prefix_xor[1] = a[1];
    for(int i = 2; i <= n; ++i){
        prefix_xor[i] = prefix_xor[i-1] ^ a[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == 1) cout << prefix_xor[r] << '\n';
        else cout << (prefix_xor[r] ^ prefix_xor[l-1]) << '\n';
    }
    return 0;
}