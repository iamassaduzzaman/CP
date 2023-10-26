#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }

    for (int mask = 0; mask < (1 << n); mask++)
    {
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                cout << a[i] << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}