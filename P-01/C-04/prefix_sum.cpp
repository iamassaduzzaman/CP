#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    long long prefix_sum[n];
    prefix_sum[0] = a[0];
    for(int i = 1; i < n; ++i){
        prefix_sum[i] = a[i] + prefix_sum[i-1];
    }

    int q; cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == 0) cout << prefix_sum[r] << '\n';
        else cout <<  prefix_sum[r] - prefix_sum[l-1] << '\n';
    }
    
    return 0;
}