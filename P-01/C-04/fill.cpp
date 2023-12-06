#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 5;
    int a[n];
    fill(a, a + n, 5);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}