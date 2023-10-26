#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long mx_sum = -1e18;
    long long sum = -1e18;
    for (int i = 0; i < n; i++)
    {
        sum = max((long long)a[i], sum + a[i]);
        mx_sum = max(mx_sum, sum);
    }

    cout << mx_sum << '\n';
    return 0;
}