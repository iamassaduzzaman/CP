#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        cout << n << " ";
        for(int i = 1; i < n; ++i){
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}