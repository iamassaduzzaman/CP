#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();

    // print using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it) << ' ';
    }

    // with auto
    for(auto it = v.begin(); it != v.end(); it++){
        cout << (*it) << ' ';
    }
 
    // print reverse 
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << (*it) << ' ';
    }

    // print next  and previous of iterator
    it = next(it);
    cout << (*it) << '\n';
    it = prev(it);
    cout << (*it) << '\n';

    return 0;
}