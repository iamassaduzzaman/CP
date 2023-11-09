#include <bits/stdc++.h>
using namespace std;

// fibonacci sequence uning memoization
int memo[20];

int fib(int n)
{
    if (n <= 1)
        return n;

    if (memo[n] != -1)
    {
        return memo[n];
    }
    else
    {
        return memo[n] = fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;

    // initializing every value with -1
    for (int i = 0; i < 20; ++i)
    {
        memo[i] = -1;
    }

    cout << fib(n) << '\n';

    return 0;
}