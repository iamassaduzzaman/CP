#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, sum = 0;
    while(cin >> n)
    {
        sum += n;
    }
    cout << sum << '\n';
    return 0;
}