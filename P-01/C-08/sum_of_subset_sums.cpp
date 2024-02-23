#include <bits/stdc++.h>
using namespace std;

int main() {

    // contribution technique
    int a[4] = {0, 1, 2, 3};
    int sum = 0;
    for(int i = 1; i <= 3; ++i) {
        sum += (a[i] * pow(2, 3 - 1)); // here n = 3;
    }
    cout << sum << '\n';

    return 0;
}