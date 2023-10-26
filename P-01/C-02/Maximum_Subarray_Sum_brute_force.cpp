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
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            long long sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            mx_sum = max(mx_sum, sum);
        }
    }

    cout << mx_sum << '\n';
    return 0;
}