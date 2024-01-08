#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    // bubble sort
    for(int i = 1; i < n; ++i){
        for(int j = 1; j < n; ++j){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }

    // output 
    for(int i = 1; i <= n; ++i){
        cout << a[i] << ' ';
    }
    return 0;
}