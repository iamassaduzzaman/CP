#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    sort(a, a + 3, greater<int>());

    do
    {
        for (int i = 0; i < 3; ++i)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    } while (prev_permutation(a, a + 3));
    return 0;
}