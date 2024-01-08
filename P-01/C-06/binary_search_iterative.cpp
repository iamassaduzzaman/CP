#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N], x;

bool search(int l, int r){
   while(l <= r){
    int mid = (l+r)/2;
    if(a[mid] == x){
        return true;
    }
    else if(x > a[mid]){
        l = mid + 1;
    }
    else{
        r = mid - 1;
    }
   }
   return false;
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