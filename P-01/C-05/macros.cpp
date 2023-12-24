#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define F first 
#define S second 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> v;

    v.pb(mp(1, 5));
    v.pb(mp(9, 3));
    v.pb(mp(7, 8));
    v.pb(mp(2, 7));

    sort(all(v));

    for(auto x: v){
        cout << x.F << ' ' << x.S << '\n';
    }

    return 0;
}

// highly recommeded not to use macros