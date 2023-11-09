#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, a[] = {12, 18, 24, 30, 36};
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = __gcd(result, a[i]);
    }
    cout << result << endl;
    return 0;
}