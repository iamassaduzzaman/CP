#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N], x;

bool search(int l, int r){
    if(l > r){
        return false;
    }

    int mid = (l + r)/2;
    if(a[mid] == x){
        return true;
    }
    else if(x > a[mid]){
        search(mid+1, r);
    }
    else{
        search(l, mid - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n >> x;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    cout << boolalpha << search(0, n - 1) << '\n';
    return 0;
}