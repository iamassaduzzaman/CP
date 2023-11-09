#include <bits/stdc++.h>
using namespace std;

int n, a[22];
bool is_taken[22];

void rec(int pos)
{
    if (pos > n)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (is_taken[i])
            {
                cout << a[i] << " ";
            }
        }
        cout << '\n';
        return;
    }

    is_taken[pos] = false; // do not take
    rec(pos + 1);

    is_taken[pos] = true; // take
    rec(pos + 1);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    rec(1);

    return 0;
}