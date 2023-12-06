#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5, y = 10;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << x << " " << y << '\n';
    return 0;
}