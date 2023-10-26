
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        long long sum = 0;
        for (int k = 0; k < n; k++)
        {
            if (mask & (1 << k))
            {
                sum += a[k];
            }
        }
        if (sum == s)
            flag = true;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}