#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> v = {"hello", "world"};

    for(auto s: v){
        cout << s << ' ';
    }
    cout << '\n';

    reverse(v.begin(), v.end());
    for(auto s: v){
        cout << s << ' ';
    }
    cout << '\n';

    pair<int, vector<string>> p = {1, v};
    cout << p.second[0] << '\n';
    return 0;
}