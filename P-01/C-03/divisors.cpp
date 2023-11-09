#include <bits/stdc++.h>
using namespace std;

void print_divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ' ';
        }
    }
    cout << endl;
}

int main()
{
    int n = 12;
    print_divisors(n);
    return 0;
}