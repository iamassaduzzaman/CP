#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;
    assert(b != 0); // if b  = 0  then it will through assertion failed
    cout << a / b << '\n';
    return 0;
}