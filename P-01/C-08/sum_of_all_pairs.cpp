#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3] = {2, 3, 4};

    // naive 
    int sum1 = 0;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            sum1 += a[i] + a[j];
        }
    }
    cout << sum1 << '\n';

    // optimization
    int sum = 0;
    for(int i = 0; i < 3; ++i) {
        sum += (a[i] * 2 * 3);
    }
    cout << sum << '\n';

    return 0;
}