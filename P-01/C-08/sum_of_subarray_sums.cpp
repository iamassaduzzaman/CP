#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3] = {1, 2, 3};

    // naive approach
    int sum1 = 0;
    for(int i = 0; i < 3; ++i) {
        for(int j = i; j < 3; ++j) {
            for(int k = i; k <= j; ++k) {
                sum1 += a[k];
                // cout << a[k] << ' ';
            }
            // cout << '\n';
        }
    }
    cout << sum1 << '\n';


     
    // contibuition technique
    int b[4] = {0, 1, 2, 3};
    int sum = 0;
    for(int i = 1; i <= 3; ++i) {
        sum += (b[i] * i * (3 - i + 1)); // here n = 3;
    }
    cout << sum <<  '\n';

    return 0;
}