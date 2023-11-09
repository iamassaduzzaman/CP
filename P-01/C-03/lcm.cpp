#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 12, b = 18;
    int result = (a * b) / __gcd(a, b); // make sure to use long long if a * b overflows
    cout << "lcm(" << a << ", " << b << ") = " << result << endl;
    return 0;
}