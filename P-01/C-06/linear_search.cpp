#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    // O(n)
    for(int i = 0; i < n; ++i){
        if(v[i] == x){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}