#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s; cin >> n >> s;
    int cnt = 0, sum = 0;
    while(1){
        if(sum >= s) break;
        sum += n;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}