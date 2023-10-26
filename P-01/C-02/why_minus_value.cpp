#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1000000000;
    int b = 1000000000;
    int product1 = a * b;
    long long product2 = 1LL * a * b;
    cout << product1 << '\n';
    cout << product2 << '\n';
    cout << (bitset<32>(product1)) << '\n';
    cout << (bitset<64>(product2)) << '\n';
    return 0;
}